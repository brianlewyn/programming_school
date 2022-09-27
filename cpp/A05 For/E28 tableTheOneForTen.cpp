/* Brayan Mejía Mora
Escribe un programa que imprima las tablas de multiplicar del 1 al 10. Usa dos ciclos para (for) anidados.
Entrada: --
Salida: Mostrar la tabla de multiplicar del 1 al 10.
*/

#include <iostream>
using namespace std;

int main() {
	cout<<"Programa que imprime la tabla de multiplicar del número 4\n";
   for (int i=1; i<=10; i++) {
      for (int j=1; j<=10; j++) {
         cout<<i<<"x"<<j<<" = "<<i*j<<endl;
      }
      cout<<endl;
   }
   return 0;
}