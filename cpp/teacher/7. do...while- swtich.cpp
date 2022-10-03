/* (Usar switch y do while)
   Escribe un conversor de varias monedas extracomunitarias a euros. El programa debe presentar un menú como sigue:
   Seleccione una opción: 
               1. Dólar 
			   2. Yen japonés 
			   3. Libra esterlina 
			   4. Salir 
	y a continuación ha de solicitar una cantidad de la moneda seleccionada, que será traducida a euros.
	do-while- switch.cpp				hecho por Verónica Orozco				20 sep 2022
	Datos de entrada: divisa, cantidad
	Datos de salida: conversión a euros*/


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
	//menú
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
