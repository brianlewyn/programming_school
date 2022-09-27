/* Mtra. Veronica
Hace la raíz cuadrada de x entre y cuadrada menos 1
expreAlge.cpp     hecho por Verónica Orozco
Entrada: x, y
Salida: resultado de la fórmula
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
   float x, y, res;

   cout<<"Programa que saca la raíz cuadrada de x entre y cuadrada menos 1"<<endl<<endl;
   cout<<"Introduce el valor de x: ";
   cin>>x;
   cout<<"Introduce el valor de y: ";
   cin>>y;

   res = ((sqrt(x) / (pow(y, 2) - 1)));
   // sqrt es para sacar la raíz cuadrada
   // pow es para elevar un número a una potencia

   cout<<"El resultado es: "<<res;

   cout<<endl;
   return 0;
}