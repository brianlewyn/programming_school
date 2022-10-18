/* Brayan Mejía Mora

Escribe un programa en C++ que desde el programa principal lea un número entero desde teclado, posteriormente llame a una función que imprima por pantalla tantos asteriscos como indique el número que recibe como parámetro:

- Debes llamar una función que recibirá como parámetro el número leído
- Recuerda que el tipo de la función es void (sin retorno)

Entrada: un número entero
Salida: un determinado número de asteriscos
*/

#include <iostream>
using namespace std;

void print_nAsterisk(int num);

int main() {
   int n;
   cout<<"Programa lee un número desde teclado, y según el valor imprime una cantidad de asteriscos\n\n";

   cout<<"Ingrese un número: ";
   cin>>n;

   cout<<endl;
   print_nAsterisk(n);

   cout<<endl<<endl;
   return 0;
}

void print_nAsterisk(int num) {
   int i=0;
   while(i<num) {
      cout<<"*";
      i++;
   }
}