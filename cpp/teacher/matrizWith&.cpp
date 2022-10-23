/* hacer un programa que defina dos matrices 3x3 de numeros enteros y hacer lo siguiente:
-mostrar el contenido de las matrices
-sumar sus elementos
-sumar la celda de la matriz 1 con la celda correspondiente de la matriz 2, guardar el resultado en matriz3 y mostrar esa matriz
Hacer uso de funciones
*/

#include <iostream>
using namespace std;

void mostrarMatriz(int m[3][3]);
int sumaMatriz(int m1[3][3]);
void sumarMatrices(int m1[3][3], int m2[3][3], int m3[3][3]);

int main(){
	int matriz1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int matriz2[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
	int matriz3[3][3];

	cout<<"Mostrando la matriz 1: "<<endl;
	mostrarMatriz(matriz1);
	cout<<"\nMostrando la matriz 2: "<<endl;
	mostrarMatriz(matriz2);

	cout<<"\nMostrando la suma de la matriz 1: "<<sumaMatriz(matriz1)<<endl;
	cout<<"\nSumando la matriz 1 con la matriz 2, de acuerdo a la celda correspondiente"<<endl;
	sumarMatrices(matriz1, matriz2, matriz3);
	mostrarMatriz(matriz3);

	cout<<endl<<endl;
	return 0;
}

void mostrarMatriz(int m[3][3]){
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"["<<m[i][j]<<"]";
		}
		cout<<endl;
	}
	return;
}

int sumaMatriz(int m1[3][3]){
	int suma=0;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			suma=suma+m1[i][j];
		}
	}
	return suma;
}

void sumarMatrices(int m1[3][3], int m2[3][3], int m3[3][3]){
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	return;
}