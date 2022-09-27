/* Brayan Mejía Mora
Escribe un programa que le pida al usuario dos enteros, debemos comprobar que el primer número sea menor que el segundo, sino se cumple esta condici�n los volveremos a pedir hasta que se cumpla. Una vez introducidos correctamente mostraremos la suma de todos los enteros comprendidos entre ambos números incluidos ellos. Por ejemplo para los números 3 y 7, la suma seria 25. SUGERENCIA: son dos ciclos los que debes usar, uno para verificar que el primer número sea mayor al segundo y otro para hacer la suma.
Entrada: dos números donde el primero es siempre el menor
Salida: la suma entre los limites de los números ingresados
*/

#include <iostream>
using namespace std;

int main() {
   int less, greater, diff, sum = 0;

   cout<<"Programa que lee dos números enteros, donde el primero debe ser siempre el menor. Luego, muestra la suma entre los limites de los números ingresados\n\n";

   cout<<"Ingresa el número: ";
	cin>>less;
	cout<<"Ingresa otro número: ";
	cin>>greater;

   while (less > greater) {
		cout<<"\nVuelve a escribir los números...\nIngresa el número: ";
      cin>>less;
      cout<<"Ingresa otro número: ";
      cin>>greater;
	}

	while (less <= greater){ 
		sum += less;
		less++;
   }

   cout<<sum<<"\n\n";
   return 0;
}