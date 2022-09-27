// Brayan Mejía Mora

// Hacer un programa que muestre en la pantalla del 40 al 10 de 5 en 5.
// Entrada: --
// Salida: Números del 40 al 10, de 5 en 5

#include <iostream>
using namespace std;

int main() {
   cout<<"Programa que muestra los números del 40 al 10 de 5 en 5\n";

   for (int i=40; i>=10; i=i-5) {
      cout<<"El valor es "<<i<<endl;
   }

   return 0;
}