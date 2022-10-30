/* Brayan Mejía Mora

Calcular el valor máximo y el orden que ocupa en la vector. Debes considerar si se repite el número.
• Leer desde el programa principal el tamaño del vector
• Crear en el programa principal el vector
• Hacer una función para llenar el vector con números aleatorios (pasaras el vector como parámetro)
• Hacer otra función para encontrar el valor máximo, que lo devolverá al programa principal (pasarás el vector como parámetro)
• Desde el programa principal desplegar el valor máximo y el lugar del vector donde se encuentra ubicado.

Entrada: tamaño del vector
Salida:	el valor máximo y su indice en el vector, y el vector 
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void vRandom(int size, int v[]);
void vFindMaxValueItsIndex(int size, int v[], int &max, int &index);

int main(){
	int size, max, index;

	cout<<"Programa lee el tamaño de un vetor, luego lo rellena con números aletorios y finalmente, encuentra el valor máximo y su índice\n\n";

	cout<<"Ingresa el tamaño: "; cin>>size;
	int v[size];

	vRandom(size, v);
	vFindMaxValueItsIndex(size, v, max, index);

	cout<<"\nEl dato mayor del vector es: "<<max<<" y su posicion en el vector es: "<<index<<endl<<endl;

	for (int i=0; i<size; i++) {
		cout<<"["<<v[i]<<"]";
	}

	cout<<endl<<endl;
	return 0;
}

void vRandom(int size, int v[]) {
	srand(time(NULL));
	for (int i=0; i<size; i++) { 
		v[i] = 1+rand()%(100);
	}
	return;
}

void vFindMaxValueItsIndex(int size, int v[], int &max, int &index){
	index = 0; 
	max = v[0];

	for (int i=0; i<size; i++){
		if (v[i] > max){
			max = v[i];
			index = i;
		}
	}
	return;
}

/* Prueba de escritorio
Programa lee el tamaño de un vetor, luego lo rellena con números aletorios y finalmente, encuentra el valor máximo y su índice

Ingresa el tamaño: 10

El dato mayor del vector es: 87 y su posicion en el vector es: 9

[6][4][72][47][31][32][81][68][40][87] 
*/