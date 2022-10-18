/* Brayan Mejía Mora

Escribe un programa en C++ que lea un número desde teclado y desde el programa principal. Deberá llamar a una función que nos devuelva true si es la letra “X” o false si es alguna otra letra.

- Debes llamar una función que recibirá como parámetro el caracter leído y devolverá true o false.
- Desde el programa principal desplegarás “Es la letra X” si el resultado es true o “No es la letra X” si el resultado es false
- El tipo de la función es bool
- Poner en la prueba de escritorio los dos casos (cuando es X y cuando no lo es)

Entrada: un número
Salida: si es la letra x o no
*/

#include <iostream>
using namespace std;

bool checkIfIsX(int n);

int main() {
   int n;
   cout<<"Programa que compruba si el número leido desde teclado es igual a X o no\n\n";

   cout<<"Digite un número: ";
   cin>>n;

   if (checkIfIsX(n)) {
      cout<<"\nEs la letra X";
   } else {
      cout<<"\nNo es la letra X";
   }

   cout<<endl<<endl;
   return 0;
}

bool checkIfIsX(int n) {
   if (n==78 || n==110) {
      return true;
   } else {
      return false;
   }
}
