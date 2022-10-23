/* Brayan Mejía Mora

Realizar un programa que permita ordenar tres números mediante una función
   • Leer los números desde teclado en el programa principal
	• Hacer paso de parámetro por referencia. 
	• Desplegar desde el programa principal los valores ordenados

Entrada: 3 números
Salida: 3 números ordenados
*/

#include <iostream>
using namespace std;

void sort3Var(int &n1, int &n2, int &n3);

int main(){
	int n1, n2, n3;
	cout<<"Programa que lee tres números desde teclado y los ordena\n\n";

	cout<<"Ingresa un numero: "; cin>>n1;
	cout<<"Ingresa un segundo número: "; cin>>n2;
	cout<<"Ingresa un tercer número: "; cin>>n3;

	sort3Var(n1, n2, n3);

	cout<<"El orden es: "<<n1<<" "<<n2<<" "<<n3;

	cout<<endl<<endl;
	return 0;
}

void sort3Var(int &n1, int &n2, int &n3){
	int aux;
	if (n1>n2 && n1>n3){
		aux = n3;
		n3 = n1;
		n1 = aux;
		if (n1 > n2){
			aux = n2;
			n2 = n1;
			n1 = aux;
		}
	}else if (n2>n1 && n2>n3){
		aux = n3;
		n3 = n2;
		n2 = aux;
		if (n1 > n2){
			aux = n2;
			n2 = n1;
			n1 = aux;
		}
	}else {
		if (n1 > n2){
			aux = n2;
			n2 = n1;
			n1 = aux;
		}	
	}
	return;
}

/* Prueba de escritorio 1
Programa que lee tres números desde teclado y los ordena

Ingresa un numero: 4
Ingresa un segundo número: 9
Ingresa un tercer número: 2
El orden es: 2 4 9
*/

/* Prueba de escritorio 2
Programa que lee tres números desde teclado y los ordena

Ingresa un numero: 9
Ingresa un segundo número: 2
Ingresa un tercer número: 4
El orden es: 2 4 9
*/