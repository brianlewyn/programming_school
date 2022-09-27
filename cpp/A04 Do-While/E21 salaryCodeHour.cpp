/* Brayan Mejía Mora
Se deberá calcular el pago de los trabajadores de una empresa. Por cada trabajador se ingresará el código y el número de horas trabajadas, la hora es pagada a $250.00. Si trabaja 40 horas o menos, se le descontará el 8% de impuesto en caso contrario se le descontará el 12%. El proceso se terminará hasta leer el código 0.
Entrada: código y número de horas
Salida: Salario con impuesto agregado
*/

#include <iostream>
using namespace std;

int main() {
   int code, nHour, payPerHour, amount;

   cout<<"Programa que calcula el pago de los trabajadores ingresando el código y el número de horas trabajas\n\n";

   payPerHour = 250;
   do {
      cout<<"Ingresa el código: ";
      cin>>code;

      if (code != 0) {
         cout<<"Ingresa el número de horas trabajadas: ";
         cin>>nHour;

			amount = nHour * payPerHour;

			if (nHour <= 40) {
				amount -= amount * 0.08;
				cout<<"El pago es $"<<amount<<"\n\n";
			} else {
				amount -= amount * 0.12;
				cout<<"El pago es $"<<amount<<"\n\n";
         }
      }
   } while (code != 0);

   cout<<endl;
   return 0;
}