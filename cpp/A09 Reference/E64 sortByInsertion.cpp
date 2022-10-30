/* Brayan Mejía Mora

Dado un vector de 6 posiciones, donde se van guardando los datos de manera ordenada, tiene almacenado los siguientes datos:

2	7	10	12		       <- (Datos del vector)
0	1	2	3	4	5     <- (Índices el vector) 

Se desea ingresar el número 8, debe ser de manera ordenada, para eso, debes usar un vector auxiliar, para guardar una copia del vector y poder ingresar en el vector original el 2, 7, luego el 8 y finalmente el 10 y el 12.
Debes hacer una función, para agregar el número 8, pasar como parámetro el vector.

Entrada: --
Salida:	un vector ordenado
*/

#include <iostream>
using namespace std;

void sortByInsertion(int v[6], int n);

int main(){
	int v[6] = {2, 7, 10, 12};

	cout<<"Programa que inserta un número (8) a un vector ordenado\n\n";

	sortByInsertion(v, 8);

	for (int i=0; i<6; i++){
		cout<<"["<<v[i]<<"]";
	}

	cout<<endl<<endl;
	return 0;
}

void sortByInsertion(int v[6], int n){
	int cont=0, vAux[6]={};
	bool flag=true;

	for (int i=0; i<6; i++) {
		if (n < v[i] && flag) {
			vAux[cont+1] = v[i];
			vAux[cont] = n;
			flag = false;
			cont++;
		} else if (v[i] != 0) {
			vAux[cont] = v[i];
		}
		cont++;
	}

	for (int i=0; i<6; i++) {
		v[i] = vAux[i];
	}
	return;
}

/* Prueba de escritorio
Programa que inserta un número (8) a un vector ordenado

[2][7][8][10][12][0]
*/