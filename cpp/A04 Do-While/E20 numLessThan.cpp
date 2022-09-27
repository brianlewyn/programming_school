/* Brayan Mejía Mora
Realizar un algoritmo que lea números desde teclado, deberás preguntar al usuario si desea continuar introduciendo números, hasta que el usuario responda no, terminará el ciclo. Debes visualizar el número menor introducido por el usuario.
Nota: solo debes mostrar el valor mínimo del total de la lista, no cada vez que entra al ciclo.
Entrada: un numero y si se desea continuar
Salida: el número menor de los números ingresados
*/

#include <iostream>
using namespace std;

int main() {
   int num, menor;
	string resp = "si";
	bool bandera = true;

   cout<<"Programa que encuentra un número menor de números leídos desde teclado\n";

   do {
      cout<<"Introduceun número: ";
		cin>>num;

		if (bandera) {
			menor = num;
         bandera = false;
      }

      if (num < menor)
         menor = num;

		cout<<"Deseas continuar introduciendo números? ";
		cin>>resp;
   } while (resp!="no" and resp!="No");
   cout<<"El número menor es: "<<menor;

   cout<<"\n\n";
   return 0;
}