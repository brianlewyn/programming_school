/* Brayan Mejía Mora

Escribe un programa en C++ que lea una cadena (tipo string) desde teclado y desde el programa principal. Deberá llamar a una función que nos devuelva el tamaño de la cadena.

- Debes llamar una función que recibirá como parámetro la cadena y devolverá su tamaño. No usar funciones del compilador para sacar la longitud.
- El tipo de la función es int

Entrada: un string
Salida: el tamaño del string
*/

#include <iostream>
using namespace std;

int lenStr(string str);

int main() {
   string paragraph;
   cout<<"Programa que le un string desde teclado y dice su longitud\n\n";

   cout<<"Introduce un frase: ";
   getline(cin, paragraph);

   cout<<"\nEl tamaño es: "<<lenStr(paragraph);

   cout<<endl<<endl;
   return 0;
}

int lenStr(string str) {
   int i=0;
   for (i; str[i] != '\0'; i++);
   return i;
}

/* otro modo de calcular el tamaño de un string
int i=0;
string copy;
do {
   copy += str[i];
   i++;
} while (!(copy==str));
*/
