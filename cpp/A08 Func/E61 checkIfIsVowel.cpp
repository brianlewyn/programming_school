/* Brayan Mejía Mora

   Escribe un programa en C++ que lea un carácter desde teclado y desde el programa principal. Deberá llamar a una función, que recibirá como parámetro el caracter y ésta devuelva un 1 si es una vocal MAYÚSCULA, un 2 si es una vocal minúscula o 3 un mensaje de error si es otro caracter.
   • Debes llamar una función que recibirá como parámetro el carácter leído y devolverá 1, 2 o 3.
   • Desde el programa principal desplegarás “ES MAYÚSCULA” si el resultado es 1, “es minúscula” si el resultado es 2, ó “Error!!!” si el resultado es 3.
   • Poner en la prueba de escriotio los 3 casos (cuando es 1, si es 2 y cuando es 3)

Entrada: un carácter
Salida: Si es mayúscula, minuscula o error
*/

#include <iostream>
using namespace std;

int checkIfIsVowel(char l);

int main() {
   char letter;

   cout<<"Programa que lee una vocal desde teclado, y muestra si esta en mayúsculas, en minúscula o ERROR en caso de que no sea ningúno un caracter\n\n";

   cout<<"Ingrese un caracter: ";
   cin>>letter;

   switch (checkIfIsVowel(letter)){
   case 1:
      cout<<"ES MAYÚSCULA"; 
      break;
   case 2:
      cout<<"es minúscula";
      break;
   default:
      cout<<"ERROR";
      break;
   }

   cout<<"\n\n";
   return 0;
}

int checkIfIsVowel(char l) {
   if (l==65||l==69||l==73||l==79||l==85) {
      return 1;
   }
   if (l==97||l==101||l==105||l==111||l==117) {
      return 2;
   }
   return 3;
}

/* Prueba de escritorio 1
Programa que lee una vocal desde teclado, y muestra si esta en mayúsculas, en minúscula o ERROR en caso de que no sea ningúno un caracter

Ingrese un caracter: a
es minúscula
*/

/* Prueba de escritorio 2
Programa que lee una vocal desde teclado, y muestra si esta en mayúsculas, en minúscula o ERROR en caso de que no sea ningúno un caracter

Ingrese un caracter: A
ES MAYÚSCULA
*/

/* Prueba de escritorio 3
Programa que lee una vocal desde teclado, y muestra si esta en mayúsculas, en minúscula o ERROR en caso de que no sea ningúno un caracter

Ingrese un caracter: q
ERROR
*/