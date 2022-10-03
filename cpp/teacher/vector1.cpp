// conociendo los vectores
// vector1.cpp		hecho por Verónica Orozco			27 sep 2022

#include <iostream>
using namespace std;

int main(){
	//creando vectores de diferentes tipos
	int vEnteros[6];
	float vFlotante[3];
	string vCadenas[55];
	bool vectorBool[4];
	char vectorChar[16];
	
	//inicializando el vector de número
	vEnteros[0] = 1;
	vEnteros[1] = 10;
	vEnteros[2] = 100;
	vEnteros[3] = 1000;
	vEnteros[4] = 10000; 
	vEnteros[5] = 100000;
	 
	//mostrar los elementos del vector
	cout << vEnteros[0] << endl;
	cout << vEnteros[1] << endl;
	cout << vEnteros[2] << endl;
	cout << vEnteros[3] << endl;
	cout << vEnteros[4] << endl;
	cout << vEnteros[5] << endl;
	
	for (int i=0; i<=5; i++){
		cout << vEnteros[i] << endl;
	}
	
	//leyendo la información del vector
	for (int i=0; i<=5; i++){
		cout << "Introduce el valor del vector ["<<i<<"]: ";
		cin >> vEnteros[i];
	}
	
	for (int i=0; i<=5; i++){
		cout << vEnteros[i] << endl;
	}
	return 0;
}
