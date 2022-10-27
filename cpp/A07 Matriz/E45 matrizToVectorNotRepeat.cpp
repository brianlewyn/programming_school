/* Brayan Mejía Mora

Escribir un programa que haga lo siguiente:
   1. Crear una matriz de números enteros de tamaño 4 x 4
   2. Leer los elementos de la matriz  desde teclado
   3. Pasar todos los elementos a un vector, 
   4. Mostrar el vector
   5. En el vector buscar los números repetidos y sólo dejar uno, los demás elementos del vector se deberán recorrer. Ejemplo:
      [1][7][28][25][9][7][3][14][27][7][14][8][85]
      [1][7][28][25][9][3][14][27][8][85]
   6. Mostrar el vector con los números sin repetir

Entrada:
Salida:
*/

#include <iostream>
using namespace std;

const int n=4;

int main() {
   int matriz[n][n], vector[n*n], cont=0;

   cout<<"Progama que lee desde teclado una matriz de 4x4 y muestra un vector con números sin repetir\n\n";

   // Almacenar los datos leídos en la matriz y en el vector
   for (int i=0; i<n; i++) { // rows
      for (int j=0; j<n; j++) { // columns
         cout<<"Introduce el dato de la posición ["<<i<<"]["<<j<<"]: ";
         cin>>matriz[i][j];

         vector[cont] = matriz[i][j];
         cont++;
      }
   }

   // Mostrar el vector
   cout<<"\nVector: \n";
   for (int i=0; i<n*n; i++) {
      cout<<"["<<vector[i]<<"]";
   }

   // Buscar los números repetidos en el vector y sólo dejar uno
   int vectorAux[n*n]={}; cont=0;
   bool flag=true, flag2=true;
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         if (vector[i]==vectorAux[j] && i!=j) {
            flag = false;
         }
      }

      // Almacenar los datos no repetidos
      if (flag) {
         vectorAux[cont] = vector[i];
         cont++;
      } else {
         if (flag2) {
            vectorAux[cont] = vector[i];
            cont++;
            flag2 = false;
         }
         flag=true;
         flag2=true;
      }
   }


   // Mostrar el vector con números sin repetir
   cout<<"\n\nVector sin repetir: \n";
   for (int i=0; i<n*n; i++) {
      if (vectorAux[i]!='\0')
         cout<<"["<<vectorAux[i]<<"]";
   }

   cout<<endl<<endl;
   return 0;
}