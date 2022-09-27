/* Brayan Mejía Mora
Realizar un algoritmo que solicite el ingreso de dos números y de un operador ( +, -, *, /). El algoritmo debe calcular el resultado de la operación seleccionada.
Entrada: Dos números y un operador.
Salida: Calculo acorde al operador.
*/

#include <iostream>
using namespace std;

int main(){
   char sign;
   int n1, n2;

   cout<<"Programa que lee dos números y un operador, para hacer una operación.\n";
   cout<<"Introduce un número: ";
	cin>>n1;
	cout<<"Introduce otro número: ";
	cin>>n2;
	cout<<"Introduce un operador (+, -, *. /): ";
	cin>>sign;

   switch(sign){
   case '+':
      cout<<"Suma: "<<(n1+n2);
      break;
   case '-':
      cout<<"Resta: "<<(n1-n2);
      break;
   case '*':
      cout<<"Multiplicación: "<<(n1*n2);
      break;
   case '/':
      cout<<"División: "<<(n1/n2);
      break;
   default:
      cout<<"Error";
      break;
   }

   cout<<endl;
   return 0;
}