/* (Usar switch y do while)
   Escribe un conversor de varias monedas extracomunitarias a euros. El programa debe presentar un men� como sigue:
   Seleccione una opci�n: 
               1. D�lar 
			   2. Yen japon�s 
			   3. Libra esterlina 
			   4. Salir 
	y a continuaci�n ha de solicitar una cantidad de la moneda seleccionada, que ser� traducida a euros.
	do-while- switch.cpp				hecho por Ver�nica Orozco				20 sep 2022
	Datos de entrada: divisa, cantidad
	Datos de salida: conversi�n a euros*/


#include <iostream>
using namespace std;

int main(){
	//planteamiento
	cout<<"Programa que convierte diferentes monedas a euros"<<endl<<endl;
	//variables
	int dolar, yen, libra, opc, cantidad, euro, divisa;
	//valor de las variables
	dolar = 25;
	yen = 18;
	libra = 12;
	//Bucle para que se pueda repetir el programa
	do{
	//men�
		cout<<"Seleccione una opcion"<<endl;
		cout<<"1. Dolar"<<endl;
		cout<<"2. Yen "<<endl;
		cout<<"3. Libra "<<endl;
		cout<<"4. Salir"<<endl<<endl;
		cin>>opc;
		if (opc==4)
			break;
		cout<<"\nIntroduce la cantidad que quieres convertir"<<endl;
		cin>>cantidad;
	//switch
	switch(opc){
	case 1: euro = cantidad * dolar;
			cout<<cantidad<<" dolares ("<<dolar<<") a euros "<<euro<<endl<<endl;
			break;
	case 2: euro = cantidad * yen;
			cout<<cantidad<<" yenes a euros "<<euro<<endl<<endl;
			break;
	case 3: euro = cantidad * libra;
			cout<<cantidad<<" libras a euros "<<euro<<endl<<endl;
			break;
	case 4: break;
	default: cout<<"ERROR opcion no valida"<<endl<<endl;
	}
	}while(opc != 4);
return 0;
}
