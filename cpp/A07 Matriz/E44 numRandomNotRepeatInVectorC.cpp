/* Brayan Mejía Mora

Escribir un programa que haga lo siguiente:
   1. Crear dos matrices (A y B) de tamaño n x m, el usuario deberá decir el tamaño. Verifica que n y m no sean iguales.
   2. Llenar las matrices con números aleatorios
   3. Mostrar las matrices
   4. Guardar en un vector c, todos los números que están en a pero no están en b
   5. Mostrar el vector

Entrada: tamaño de la matriz
Salida: matriz A y B, y el vector C  
*/

#include <iostream>
#include <stdlib.h>  // nRandom
#include <time.h>    // nRandom
using namespace std;

int main() {
   int n=0, m=0;
   bool flag=true;

   cout<<"Programa que crea dos matrices y la muestra con números aleatorios, luego muestra un vector con todo los números que están en A pero no están en B\n\n";

   // Solicitar el tamaño de las matrices, y comprobar que n!=m
   do {
      if (!flag)
         cout<<"\nEl número de filas y columnas debe ser distinto\n";
      cout<<"Digite el número de filas: "; cin>>n;
      cout<<"Digite el número de columnas: "; cin>>m;
      flag=false;
   } while (n==m);

   // Crear la matriz A y B
   int MatrizA[n][m]={}, MatrizB[n][m]={};

   // Poder generar números aleatorios
   srand(time(NULL));

   // Llenar las matrices con números aleatorios
   for (int i=0; i<n; i++) { // rows
      for (int j=0; j<m; j++) { // columns
         MatrizA[i][j] = 1+rand()%(100);
         MatrizB[i][j] = 1+rand()%(100);
      }
   }

   // Mostrar la matriz A
   cout<<"\nMatriz A: \n";
   for (int i=0; i<n; i++) { // rows
      for (int j=0; j<m; j++) { // columns
         cout<<"["<<MatrizA[i][j]<<"]";
      }
      cout<<endl;
   }

   // Mostrar la matriz B
   cout<<"\nMatriz B: \n";
   for (int i=0; i<n; i++) { // rows
      for (int j=0; j<m; j++) { // columns
         cout<<"["<<MatrizB[i][j]<<"]";
      }
      cout<<endl;
   }

   // Guardar en un vector C, todos los números que están en A pero no están en B
   int contC=0, contD=0, VectorC[n*m]={}, VectorD[n*m]={};
   flag = true;

   // MatrizA[i][j]
   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {

         // MatrizB[x][y]
         for (int x=0; x<n; x++) {
            for (int y=0; y<m; y++) {
               if (MatrizA[i][j] == MatrizB[x][y])
                  flag=false;
            }
         }

         // Guardar en el Vector C los números no coincidentes de la matriz A con B
         if (flag) {
            VectorC[contC] = MatrizA[i][j];
            contC++;
         } else {
            VectorD[contD] = MatrizA[i][j];
            flag=true;
            contD++;
         }
      }
   }


   // Mostrar el vector C, los números no coincidentes de la matriz A con B
   cout<<"\n\nVector C: \n";
   for (int i=0; i<n*m; i++) {
      if (VectorC[i]!='\0')
         cout<<"["<<VectorC[i]<<"]";
   }

   // Mostrar los números coincidentes de la matriz A y B
   cout<<"\n\nVector D: \n";
   for (int i=0; i<n*m; i++) {
      if (VectorD[i]!='\0')
         cout<<"["<<VectorD[i]<<"]";
   }

   cout<<endl<<endl;
   return 0;
}