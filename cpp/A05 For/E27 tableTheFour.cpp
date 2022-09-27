/* Brayan Mejía Mora
Escribe un programa que imprima la tabla de multiplicar del número 4.
Entrada: --
Salida: Mostrat la tabla de multiplicar del 4
*/

#include <iostream>
using namespace std;

int main() {
	cout<<"Programa que imprime la tabla de multiplicar del número 4\n";
   for (int i=1; i<=10; i++) {
		cout<<"4x"<<i<<" = "<<4*i<<endl;
   }
   return 0;
}
