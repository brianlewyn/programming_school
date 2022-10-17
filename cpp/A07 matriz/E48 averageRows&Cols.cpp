/* Brayan Mejía Mora

Crear una matriz de números enteros, de tamaño M x N, el usuario especificará este tamaño, deberás verificar que M y N no sean números iguales.
Deberás leer desde teclado una variable de tipo entero K.
Una vez que ya hayas leído deberás generar números aleatorios para llenar la matriz.
Una vez que ya la hayas llenado deberás sacar el promedio por cada fila y el promedio por cada columna.

Entrada: las dimensiones de una matriz
Salida: la matriz con el promedio de cada fila y columna
*/

#include <iostream>
#include <stdlib.h>  // nRandom
#include <time.h>    // nRandom
using namespace std;

int main() {
   int M, N, K;
   bool flag=false;
   cout<<"Programa que lee desde teclado las dimensiones de una matriz, luego la muestra con el promedio de cada fila y cada columna\n\n";

   // Solicitar las dimensiones (N*M) de la matriz
   do {
      if (flag)
         cout<<"\nLas dimensiones deben ser distintas, vuelva a intarlo\n";

      cout<<"Digite el número de filas: "; cin>>M;
      cout<<"Digite el número de columnas: "; cin>>N;
      flag = true;
   } while (M==N);

   // Crear la matriz
   int matriz[N][M];

   // Leer la variable K
   // cout<<"\nDitite un número cualquiera: "; cin>>K;

   // Poder generar números aleatorios
   srand(time(NULL));

   // Llenar las matrices con números aleatorios
   for (int i=0; i<M; i++) { // rows
      for (int j=0; j<N; j++) { // colums
         matriz[i][j] = 1+rand()%(100);
      }
   }

   // Mostrar la matriz y el promedio de cada fila y columna
   int sumRows=0, sumCols=0;

   cout<<"\nMatriz\n";
   for (int i=0; i<M; i++) { // rows
      for (int j=0; j<N; j++) { // colums
         cout<<"["<<matriz[i][j]<<"]";
         sumRows += matriz[i][j];
      }
      cout<<" "<<(sumRows/N)<<endl;
      sumRows = 0;
   }

   for (int i=0; i<N; i++) {  // 
      for (int j=0; j<M; j++) { //
         sumCols += matriz[j][i];
      }
      cout<<" "<<(sumCols/M)<<" ";
      sumCols = 0;
   }

   cout<<endl<<endl;
   return 0;
}

/*
Programa que lee desde teclado las dimensiones de una matriz, luego la muestra con el promedio de cada fila y cada columna

Digite el número de filas: 3    
Digite el número de columnas: 3

Las dimensiones deben ser distintas, vuelva a intarlo
Digite el número de filas: 4
Digite el número de columnas: 3

Matriz
[39][37][45] 40
[83][75][86] 81
[76][28][40] 48
[19][55][28] 34
 54  48  49 
*/