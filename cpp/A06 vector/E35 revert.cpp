/* Hacer un programa que lea un vector de caracters de tamaño 30 y lo pase a otro vector de manera invertida, por ejemplo: si escribí hola en el vector 1, debe decir aloh en el vector 2
Mostrar los dos vectores.

Entrada: serie de caracteres (una palabra)
Salida: serie de caracteres invertida (una palabra invertida)
*/

#include <iostream>
using namespace std;

int main() {
   int i=30, cont=0;
   char vector1[30]={}, vector2[30]={};

   cout<<"Programa lee un vector de caracteres (una palabra) y lo muestra invertido\n";
   cout<<"Introduce una palabra: "; cin.getline(vector1, 30);

   for (i; i>=0; i--) {
      if (vector1[i]!='\0') {
         vector2[cont] = vector1[i];
         cont++;
      }
   }

   cout<<"El vector 1 es: "<<vector1<<endl;
   cout<<"El vector 2 es: "<<vector2<<endl;

   return 0;
}