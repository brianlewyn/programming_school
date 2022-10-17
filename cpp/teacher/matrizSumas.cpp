/* Hacer un programa que cres una matriz de números enteros, el usuario deberá decir de cuantas filas y cuantas columnas deses, posteriormente se leerán datos desde techaldo. Posteriormente mostrarás la suma de cada fila y la suma de cada columna.
Entrada: matriz de números enteros
Salida: suma de las filas y las columnas
*/

#include <iostream>
using namespace std;

int rows, cols;

int main() {
   cout<<"Programa que crea una matriz, lee sus datos y no da \n";
   cout<<"la sumna de las filas y la suma de las coumnas\n\n";

   cout<<"Digite el número de filas: "; cin>>rows;
   cout<<"Digite el número de columnas: "; cin>>cols;
   
   // creamos la matriz
   int matriz[rows][cols]={};

   // leyendo los elementos de la matriz
   for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {
         cout<<"Introduce el elemento ["<<i<<"]["<<j<<"]: ";
         cin>>matriz[i][j];
      }
   }

   // mostrando los elementos de la matriz
   cout<<"\nMatriz: "<<endl;
   for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {
         cout<<"["<<matriz[i][j]<<"]";
      }
      cout<<endl;
   }

   // sumando y mostrando la suma de cada fila
   cout<<"\nSuma de las filas: \n";
   int sumaF=0;
   for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {
         cout<<"["<<matriz[i][j]<<"]";
         sumaF += matriz[i][j];
      }
      cout<<" "<<sumaF<<endl;
      sumaF=0;
   }

   // mostrando los elementos de la matriz y la suma de las filas
   cout<<"\nMatriz: "<<endl;
   for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {
         cout<<"["<<matriz[i][j]<<"]";
      }
      cout<<endl;
   }

   // sumando y mostrando la suma de cada fila
   cout<<"\nSuma de las columnas: \n";
   int sumaC=0;
   for (int i=0; i<rows; i++) {
      for (int j=0; j<cols; j++) {
         sumaC += matriz[j][i];
      }
      cout<<" "<<sumaC<<" ";
      sumaC=0;
   }

   cout<<endl;
   return 0;
}