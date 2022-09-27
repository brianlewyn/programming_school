/* Brayan Mejía Mora
Modifique el programa anterior de tal forma que imprima un cuadrado hueco. Por ejemplo, si su tama�o es 5, debe imprimir:
*****
*   *
*   *
*   *
*****
Entrada: un número
Salida: Imprimir el contorno del área de un cuadrado como asteriscos
*/

#include <iostream>
using namespace std;

int main() {
   int l;

	cout<<"Programa que imprime el contorno del area de un cuadrado en forma de astericos a partir de un número ledo desde teclado\n";

	do {
		cout<<"Introduce un lado entre 1 y 20: "; cin>>l;
   }
	while (l<1 || l>20);

	for (int i=1; i<=l; i++) {
		for (int j=1; j<=l; j++) {
         if (i==1 || i==l){
				cout<<"*";
			} else {
				if (j==1 || j==l) {
					cout<<"*";
            } else {
					cout<<" ";
            }
         }
      }
		cout<<endl;
	}

   return 0;
}
