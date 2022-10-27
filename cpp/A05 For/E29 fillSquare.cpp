/* Brayan Mejía Mora
Escribe un programa que lea el lado de un cuadrado y a continuación lo imprima en forma de asteriscos. Su programa deberá funcionar para cuadrados de entre 1 y 20 (validar este rango). Por ejemplo, si tu programa lee un tamaño de 4, debe imprimir:
****
****
****
****
Entrada: un número
Salida: Imprimir el área de un cuadrado como asteriscos
*/

#include <iostream>
using namespace std;

int main() {
   int l;

	cout<<"Programa que imprime el area de un cuadrado en forma de astericos a partir de un número ledo desde teclado\n";

	do {
		cout<<"Introduce un lado entre 1 y 20: "; cin>>l;
	} while (!(l>=1 && l<=20));

	for (int i=1; i<=l; i++) {
		for (int j=1; j<=l; j++) {
			cout<<"*";
		}
		cout<<endl;
	}

   return 0;
}
