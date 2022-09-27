// Brayan Mejía Mora
// Realiza la prueba de escritorio del siguiente programa y muestra la salida del programa.

#include <iostream>
using namespace std;

int main() {
   int row=5, col;

   while (row>=1) {
      col = 1;
      while (col<=5) {
         if (row%2 == 0)
            cout<<"<";
         else
            cout<<">";
         col++;
      }
      row--;
      cout<<endl;
   }

   return 0;
}