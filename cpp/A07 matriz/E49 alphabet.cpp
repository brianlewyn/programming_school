/* Brayan Mejía Mora

Hacer un programa que cree una matriz de caracteres de 4 x 4, el usuario introducirá los caracteres, pero sólo podrá meter caracteres alfabéticos (debes validar esto, recuerda que puedes poner, por ejemplo, matriz[i][j] >= ‘a’ and matriz[i][j] <=’b’).

Una vez llena la matriz la deberás mostrar. Posteriormente deberás poner la primer y última fila ordenada alfabéticamente y volver a mostrar. Puedes usar uno o varios vectores auxiliares

Mi ejemplo:
   [i][o][e][a]  =>  [a][e][i][o]
   [e][f][g][h]  =>  [e][f][g][h]
   [i][j][k][l]  =>  [i][j][k][l]
   [p][o][n][m]  =>  [m][n][o][p]

Entrada: 16 carácters alfabéticos
Salida: dos matrices, pero la última debe estar ordenada alfabéticamente el la primera y última fila
*/

#include <iostream>
using namespace std;

const int n=4;

int main() {
   char abc[n][n];
   bool flag=false, lowercase=false, uppercase=false;

   cout<<"Programa que lee desde teclado 16 carácters alfabéticos y lo muestra como una matriz, luego muestra de nuevo matriz pero con la primera y última fila ordenada alfabéticamente\n\n";

   // Solicitar los carácteres alfabéticos
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         do {
            if (flag) {
               cout<<"\nLos caracteres deben ser alfabéticos, vulve a intentarlo\n";
               flag = false;
            }

            cout<<"Ingresa un carácter alfabético: ";
            cin>>abc[i][j];

            lowercase = abc[i][j]>=65 && abc[i][j]<=90;
            uppercase = abc[i][j]>=97 && abc[i][j]<=122;

            if (!(lowercase || uppercase)) {
               flag = true;
            }
         } while(flag);
      }
   }

   // Mostrar la matriz
   cout<<"\nMatriz ABC\n";
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         cout<<"["<<abc[i][j]<<"]";
      }
      cout<<endl;
   }

   // Guardar la primera y la última fila en el v1 y v2, respetivamente
   int cont1=0, cont2=0;
   char v1[n], v2[n];

   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         if (i==0) {
            v1[cont1] = abc[i][j];
            cont1++;
         } else if (i==(n-1)) {
            v2[cont2] = abc[i][j];
            cont2++;
         }
      }
   }

   // Ordenar alfabéticamente los vectores v1 y v2
   char temp;
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         if (v1[j] > v1[i]) {
            temp = v1[j];
            v1[j] = v1[i];
            v1[i] = temp;
         }
         if (v2[j] > v2[i]) {
            temp = v2[j];
            v2[j] = v2[i];
            v2[i] = temp;
         }
      }
   }

   // Reescribir la primera y la última fila con los v1 y v2, respetivamente
   cont1=0; cont2=0;
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         if (i==0) {
            abc[i][j] = v1[cont1];
            cont1++;
         } else if (i==(n-1)) {
            abc[i][j] = v2[cont2];
            cont2++;
         }
      }
   }

   // Mostrar la matriz con la primera y la última fila ordenada
   cout<<"\nMatriz ABC\n";
   for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
         cout<<"["<<abc[i][j]<<"]";
      }
      cout<<endl;
   }

   cout<<endl;
   return 0;
}

/*
Programa que lee desde teclado 16 carácters alfabéticos y lo muestra como una matriz, luego muestra de nuevo matriz pero con la primera y última fila ordenada alfabéticamente

Ingresa un carácter alfabético: a
Ingresa un carácter alfabético: u
Ingresa un carácter alfabético: o
Ingresa un carácter alfabético: e
Ingresa un carácter alfabético: q
Ingresa un carácter alfabético: w
Ingresa un carácter alfabético: r
Ingresa un carácter alfabético: t
Ingresa un carácter alfabético: y
Ingresa un carácter alfabético: p
Ingresa un carácter alfabético: s
Ingresa un carácter alfabético: f
Ingresa un carácter alfabético: g
Ingresa un carácter alfabético: e
Ingresa un carácter alfabético: i
Ingresa un carácter alfabético: a

Matriz ABC
[a][u][o][e]
[q][w][r][t]
[y][p][s][f]
[g][e][i][a]

Matriz ABC
[a][e][o][u]
[q][w][r][t]
[y][p][s][f]
[a][e][g][i]
*/