/* Brayan Mejía Mora
Leer dos números desde teclado y multiplicarlos si son iguales, restarlos si el primero es mayor que el segundo o sumarlos si el primero es menor que el segundo.
Entrada: Dos números.
Salida: Calculo de mutiplicar, restar o sumar.
*/

#include <iostream>
using namespace std;

int main(){
   float a, b;

   cout<<"Programa que lee dos números y multiplica si son iguales, resta si el primero es mayor que el segundo o suma si el primero es menor que el segundo.\n";
   cout<<"Introduce un número: ";
   cin>>a;
   cout<<"Introduce otro número: ";
   cin>>b;

   if(a==b){
      cout<<"Es "<<(a*b);
   } else if (a>b) {
      cout<<"Es "<<(a-b);
   } else {
      cout<<"Es "<<(a+b);
   }

   cout<<endl;
   return 0;
}