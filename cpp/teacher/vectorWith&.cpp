/*funciones
TODOS LOS ARREGLOS (VECTORES-MATRICES) PASAN POR REFERENCIA PERO NO ES NECESARIO COLOCAR EL &
hacer un programa que defina a un vector de tamaño 5 de numeros enteros y llame a una funcion para que haga el cuadro de cada elemento, hacer otra funcion para mostrar los datos.
*/

#include <iostream>
using namespace std;

void mostrarDatos(int vectorN[], int t);
void cuadradoNumeros(int vectorN[], int t);

const int TAM=5; //Es buena practica declarar el tamaño del vector como constante 
// Las constantes se escriben en mayusculas

int main(){
	int vectorNum[] = {1,2,3,4,5};
	mostrarDatos(vectorNum, TAM);
	cuadradoNumeros(vectorNum, TAM);
	mostrarDatos(vectorNum, TAM);
	return 0;
}

void mostrarDatos(int vectorN[], int t){
	for (int i=0; i<t; i++){
		cout<<"Indice["<<i<<"] "<<vectorN[i]<<endl;
	}
	cout<<endl<<endl;
}

void cuadradoNumeros(int vectorN[], int t){
	for (int i=0; i<t; i++){
		vectorN[i] = vectorN[i] * vectorN[i];
	}
}
