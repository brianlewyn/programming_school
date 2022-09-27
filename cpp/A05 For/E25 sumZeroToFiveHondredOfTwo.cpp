// Brayan Mejía Mora

// Hacer un programa que sume del cero al 500 de dos en dos. Sólo debes mostrar la suma final.
// Entrada: --
// Salida: Suma del 0 al 500 de 2 en 2

#include <iostream>
using namespace std;

int main() {
   int sum=0;

   cout<<"Programa que muestra la suma de los números del 0 al 500 de 2 en 2\n";

   for (int i= 0; i<=500; i=i+2) {
      sum += i;
   }

   cout<<"La suma es "<<sum<<endl;

   return 0;
}