/* Brayan Mejía Mora
Escribe un algoritmo que lea dos números enteros desde teclado y realice la suma solo si son positivos, en caso de que los números no sean positivos mostrar un mensaje de error al usuario.
Entrada: Dos números.
Salida: Suma o error.
*/

#include <iostream>
using namespace std;

int main(){
   int a, b, res;

   cout<<"Programa que lee dos números positivos y devuleve las suma.\n";
   cout<<"Introduce un número: ";
   cin>>a;
   cout<<"Introduce otro número: ";
   cin>>b;

   if(a>0 && b>0){
      res = a+b;
      cout<<"El resultado es: "<<res;
   } else {
      cout<<"Error";
   }

   cout<<endl;
   return 0;
}