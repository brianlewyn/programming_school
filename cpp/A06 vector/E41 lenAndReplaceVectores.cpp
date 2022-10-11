/* Brayan Mejía Mora

Escribir  un  programa  que  lea  3 cadenas  de  caracteres  de  longitud  40. Por cada cadena leída, su programa hará lo siguiente:
   a) Leer cada cadena desde teclado
   b) Imprimir la longitud de la cadena leída (cadena no vector).
   c) Contar el número de ocurrencias de palabras de cuatro letras.
   d) Sustituir cada palabra de cuatro letras por una cadena de cuatro asteriscos e imprimir la nueva cadena

Entrada: 3 cadenas de caracters
Salida: mostrar la longitud, la ocurrencias y sustituir las palabras de cuatro letras por asteriscos en las tres cadenas
*/

#include <iostream>
using namespace std;

int main() {
	int size=0, word=0, occurrence=0;
	char arrChar[40]={};

	cout<<"Programa que solicita tres cadenas de caractes para mostrar su longitud, y también, la ocurrencia de palabras de 4 letras y las sustituye por asteriscos\n\n";

	// ArrChar 1
	cout<<"Ingrese una frase: "; cin.getline(arrChar, 40);
	for (int i=0; arrChar[i]!='\0'; i++) {
		size++; word++;

		// Reiniciar en 0, el contador de 4 letras (word)
		if (arrChar[i]==' '){
			word=0;
		}

		// Comprobar que la palabra sea de 4 letras
		if (word==4 && (arrChar[i+1]==' ' || arrChar[i+1]=='\0')){
			// Sustituir las palabras de 4 letras por '*'
			for (int j=i-3; j<=i; j++) {
				arrChar[j]='*';
			}
			occurrence++;
		}
	}
	cout<<"\nLongitud: "<<size;
	cout<<"\nNúmero de ocurrencias: "<<occurrence;
	cout<<"\nNueva frase: "<<arrChar;

	// ArrChar 2
	size=0; word=0; occurrence=0; arrChar[40]={};
	cout<<"\n\nIngrese una frase: "; cin.getline(arrChar, 40);
	for (int i=0; arrChar[i]!='\0'; i++) {
		size++; word++;

		// Reiniciar en 0, el contador de 4 letras (word)
		if (arrChar[i]==' '){
			word=0;
		}

		// Comprobar que la palabra sea de 4 letras
		if (word==4 && (arrChar[i+1]==' ' || arrChar[i+1]=='\0')){
			// Sustituir las palabras de 4 letras por '*'
			for (int j=i-3; j<=i; j++) {
				arrChar[j]='*';
			}
			occurrence++;
		}
	}
	cout<<"\nLongitud: "<<size;
	cout<<"\nNúmero de ocurrencias: "<<occurrence;
	cout<<"\nNueva frase: "<<arrChar;

	// ArrChar 3
	size=0; word=0; occurrence=0; arrChar[40]={};
	cout<<"\n\nIngrese una frase: "; cin.getline(arrChar, 40);
	for (int i=0; arrChar[i]!='\0'; i++) {
		size++; word++;

		// Reiniciar en 0, el contador de 4 letras (word)
		if (arrChar[i]==' '){
			word=0;
		}

		// Comprobar que la palabra sea de 4 letras
		if (word==4 && (arrChar[i+1]==' ' || arrChar[i+1]=='\0')){
			// Sustituir las palabras de 4 letras por '*'
			for (int j=i-3; j<=i; j++) {
				arrChar[j]='*';
			}
			occurrence++;
		}
	}
	cout<<"\nLongitud: "<<size;
	cout<<"\nNúmero de ocurrencias: "<<occurrence;
	cout<<"\nNueva frase: "<<arrChar<<endl<<endl;

	return 0;
}