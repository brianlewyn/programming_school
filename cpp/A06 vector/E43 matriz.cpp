/* Hacer un programa que defina una matriz de números reales 3 x 3 y la muestre, además:
- Mostrar su diagonal principa;
- Mostrar la suma de la matriz
- Mostrar el promedio de la matriz
matriz.cpp        hecho por Verónica Orozco        10/Oct/22  
*/

#include <iostream>
using namespace std;

int main() {
   // Se recomienda en la práctica dejar una fila y una columna para no tener erroes.
   // Definir la matriz 3 x 3 de números reales:
   float matriz[3][3] = {{1.1, 1.2, 1.3}, {2.1, 2.2, 2.3}, {3.1, 3.2, 3.3}};
   float vectorAux[3] = {0.1, 0.2, 0.3};
   float sum=0, average=0;

   cout<<"Programa que define una matriz 3 x 3, la muestre,\n";
   cout<<"además, muestra sudiagonal principal, la suma y el promedio de toda la matriz\n\n";

   // mostrar los elementos de la matriz:
   cout<<"Mostrando los elementos de la matriz: \n";
   for (int i=0; i<3; i++) { // posicionar filas
      for (int j=0; j<3; j++) { // posicionar columnas
         cout<<"["<<matriz[i][j]<<"]";
      }
      cout<<endl;
   }

   // mostarando la digonal principal:
   cout<<"\n\nMostrando los elementos de la diagonal principal: \n";
   for (int i=0; i<3; i++) { // posicionar filas
      for (int j=0; j<3; j++) { // posicionar columnas
         if (i==j) {
            cout<<"["<<matriz[i][j]<<"]";
         }
      }
      cout<<endl;
   }

   // sacando la suma y el promedio de la matriz:
   cout<<"\n\nSumando los elementos de la matriz y sacando el promedio: \n";
   for (int i=0; i<3; i++) { // posicionar filas
      for (int j=0; j<3; j++) { // posicionar columnas
         sum += matriz[i][j];
      }
   }
   average = sum/9;
   cout<<"La suma es: "<<sum<<" y el promedio es: "<<average<<endl;

   // Permutar los elementos de la fila uno con los de la fila tres. Usar ciclos for y utilizar un vectorAux auxiliar.
   cout<<"\n\nPermutar los elementos de la fila 1 con la fila tres: \n";
   for (int i=0; i<3; i++) { // rows
      for (int j=0; j<3; j++) { // colums
         if (i==0) {
            vectorAux[j] = matriz[i][j];
         }
         if (i==2) {
            matriz[i-2][j] = matriz[i][j];
            matriz[i][j] = vectorAux[i];
         }
         cout<<"["<<matriz[i][j]<<"]";
      }
      cout<<endl;
   }

   // Encontrar el valor máximo y el valor mínimo de la matríz. Mostrar la posición.
   cout<<"\n\nEncontrar el valor máximo y el valor mínimo de la matríz: \n";
   float greater=matriz[0][0], less=matriz[0][0];
   int x1=0, y1=0, x2=0, y2=0;
   for (int i=0; i<3; i++) { // rows
      for (int j=0; j<3; j++) { // colums
         if (greater < matriz[i][j]) {
            greater = matriz[i][j];
            x1 = i;
            y1 = j;
         }
         if (less > matriz[i][j]) {
            less = matriz[i][j];
            x2 = i;
            y2 = j;
         }
      }
   }
   cout<<"El mayor es: "<<greater<<" y su posición: ("<<x1<<", "<<y1<<")"<<endl;
   cout<<"El menor es: "<<less<<" y su posición: ("<<x2<<", "<<y2<<")"<<endl; 

   cout<<endl;
   return 0;
}