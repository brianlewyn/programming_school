/* Brayan Mejía Mora

Realizar un programa que pida dos matrices (A y B) y las sume (siempre que sea posible) o avise de que no se pueden sumar. Lo primero que se hará es pedir la dimensión de la matriz y luego se leerán sus datos desde teclado.

Nota: La suma de dos matrices A y B es otra matriz C teniendo en cuenta que, para poder sumar matrices, ambas deben tener la misma dimensión, es decir, el mismo número de filas y de columnas.

Una vez que ha verificado que sí se pueden sumar, se deberá sumar la celda A[0][0] con la celda B[0][0] y la suma se guardará en la celda C[0][0], así con toda la matriz.

Entrada: Las dimensiones de dos matrices y sus datos
Salida: matriz A y B, y matriz C o decir que no se pudo sumar
*/

#include <iostream>
using namespace std;

int main() {
   int rowA, colA, rowB, colB;
   cout<<"Programa que pide las dimensiones de dos matrices y lee sus datos desde teclado, luego hace la suma si es que son del mismo tamaño y si lo son, muestra tres matrices.\n\n";

   // Crear las matrices A y B
   cout<<"Digite el número de filas de la matriz A: "; cin>>rowA;
   cout<<"Digite el número de columnas de la matriz A: "; cin>>colA;
   int mA[rowA][colA];

   cout<<"\nDigite el número de filas de la matriz B: "; cin>>rowB;
   cout<<"Digite el número de columnas de la matriz B: "; cin>>colB;
   int mB[rowB][colB];

   // Llenar la matrices A y B
   cout<<"\nMatriz A\n";
   for (int i=0; i<rowA; i++) {
      for (int j=0; j<colA; j++) {
         cout<<"Digite el dato de la posición ["<<i<<"]["<<j<<"]: ";
         cin>>mA[i][j];
      }
   }

   cout<<"\nMatriz B\n";
   for (int i=0; i<rowB; i++) {
      for (int j=0; j<colB; j++) {
         cout<<"Digite el dato de la posición ["<<i<<"]["<<j<<"]: ";
         cin>>mB[i][j];
      }
   }

   // Mostrar la matriz A
   cout<<"\nMatriz A\n";
   for (int i=0; i<rowA; i++) {
      for (int j=0; j<colA; j++) {
         cout<<"["<<mA[i][j]<<"]";
      }
      cout<<endl;
   }

   // Mostrar la matriz B
   cout<<"\nMatriz B\n";
   for (int i=0; i<rowB; i++) {
      for (int j=0; j<colB; j++) {
         cout<<"["<<mB[i][j]<<"]";
      }
      cout<<endl;
   }

   // Intentar sumar la matriz A y B, en la matriz C
   if (rowA==rowB && colA==colB) {
      // Crear la matriz C
      int mC[rowA][colB];

      // Llenar la matriz C apatir de la suma de las matrices A y B 
      for (int i=0; i<rowA; i++) {
         for (int j=0; j<colB; j++) {
            mC[i][j] = mA[i][j] + mB[i][j];
         }
      }

      // Mostrar la matriz C
      cout<<"\nMatriz C\n";
      for (int i=0; i<rowA; i++) {
         for (int j=0; j<colB; j++) {
            cout<<"["<<mC[i][j]<<"]";
         }
         cout<<endl;
      }
   } else {
      cout<<"\nLas dimensiones de ambas matrices son diferentes, no se pueden sumar";
   }

   cout<<endl<<endl;
   return 0;
}

/*
Programa que pide las dimensiones de dos matrices y lee sus datos desde teclado, luego hace la suma si es que son del mismo tamaño y si lo son, muestra tres matrices.

Digite el número de filas de la matriz A: 3
Digite el número de columnas de la matriz A: 3

Digite el número de filas de la matriz B: 3
Digite el número de columnas de la matriz B: 3

Matriz A
Digite el dato de la posición [0][0]: 1
Digite el dato de la posición [0][1]: 2 
Digite el dato de la posición [0][2]: 3
Digite el dato de la posición [1][0]: 4
Digite el dato de la posición [1][1]: 5
Digite el dato de la posición [1][2]: 6
Digite el dato de la posición [2][0]: 7
Digite el dato de la posición [2][1]: 8
Digite el dato de la posición [2][2]: 9

Matriz B
Digite el dato de la posición [0][0]: 1
Digite el dato de la posición [0][1]: 2
Digite el dato de la posición [0][2]: 3
Digite el dato de la posición [1][0]: 4
Digite el dato de la posición [1][1]: 5
Digite el dato de la posición [1][2]: 6
Digite el dato de la posición [2][0]: 7
Digite el dato de la posición [2][1]: 8
Digite el dato de la posición [2][2]: 9

Matriz A
[1][2][3]
[4][5][6]
[7][8][9]

Matriz B
[1][2][3]
[4][5][6]
[7][8][9]

Matriz C
[2][4][6]
[8][10][12]
[14][16][18]
*/