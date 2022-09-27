/* Brayan Mejía Mora
Escribe un algoritmo que lea un número desde teclado y diga si un número es par o impar.
Entrada: Número.
Salida: Es par o impar.
*/

#include <iostream>
using namespace std;

int main(){
   int n;

   cout<<"Programa que lee un número y dice si es Par o Impar.\n";
   cout<<"Introduce un número: ";
	cin>>n;

   if(n%2 == 0) {
      cout<<"Es Par";
   } else {
      cout<<"Es Impar";
   }

   cout<<endl;
   return 0;
}