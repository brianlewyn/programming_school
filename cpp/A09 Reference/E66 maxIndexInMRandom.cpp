/* Brayan Mejía Mora

Se dispone de una lista de números enteros. Calcular el valor máximo y el orden que ocupa en la matriz. Debes considerar si se repite el número.
• Leer desde el programa principal el tamaño de la matriz
• Crear en el programa principal la matriz
• Hacer una función para llenar la matriz con números aleatorios (deberá tener como parámetro la matriz)
• Hacer otra función para encontrar el valor máximo, que lo devolverá al programa principal (deberá tener como parámetro la matriz)
• Desde el programa principal desplegar el valor máximo y el lugar de la matriz donde se encuentra ubicado.

Entrada: número de filas de la matriz
Salida: el valor máximo y su indice en la matriz
*/

#include <iostream>
using namespace std;

const int col = 5;

void mRandom(int row, int m[][col]);
void mFindMaxValueItsIndex(int row, int m[][col], int &max, int &x, int &y);

int main() {
   int row, max, x, y;
   cout<<"Programa que lee el número de filas de una matriz, luego lo rellena con números aletorios y finalmente, ncuentra el valor máximo y su ubicación \n\n";

   cout<<"El número de columnas es 5";
   cout<<"Digite el número de filas: "; cin>>row;
   int m[row][col];

   mRandom(row, m);
	mFindMaxValueItsIndex(row, m, max, x, y);

   cout<<"\nEl dato mayor de la matriz es: "<<max<<" y su posicion en la matriz es: "<<x<<","<<y<<endl<<endl;

   for (int i=0; i<row; i++) {
      for (int j=0; j<col; j++) {
         cout<<"["<<m[i][j]<<"]";
      }
      cout<<endl;
	}

   cout<<endl<<endl;
	return 0;
}


void mRandom(int row, int m[][col]){
	srand(time(NULL));
	for (int i=0; i<row; i++) {
      for (int j=0; j<col; j++) {
         m[i][j] = 1+rand()%(100);
      }
	}
	return;
}

void mFindMaxValueItsIndex(int row, int m[][col], int &max, int &x, int &y) {
	x = 0;
   y = 0;  
	max = m[0][0];

   for (int i=0; i<row; i++) {
      for (int j=0; j<col; j++) {
         if (m[i][j] > max){
            max = m[i][j];
            x = i;
            y = j;
         }
      }
	}
	return;
}

/* Prueba de escritorio 
Programa que lee el número de filas de una matriz, luego lo rellena con números aletorios y finalmente, ncuentra el valor máximo y su ubicación 

El número de columnas es 5Digite el número de filas: 5

El dato mayor de la matriz es: 100 y su posicion en la matriz es: 2,1

[77][5][93][46][28]
[52][90][29][4][56]
[79][100][35][95][80]
[84][32][71][35][30]
[3][6][65][76][6]
*/