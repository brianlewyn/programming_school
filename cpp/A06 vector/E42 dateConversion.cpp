/* Brayan Mejía Mora

Escribir un programa de conversión que lea una cadena representando una fecha en formato dd/mm/aa como 17/11/21  y la devuelva en formato de texto: 17 de noviembre de 2021.

Entrada: fecha en formato dd/mm/aa
Salida: fecha en formato texto
*/

#include <iostream>
using namespace std;

int main(){
	string date="", day="", month="", year="";

	cout<<"Programa que hace conversión de una fecha en formato dd/mm/aa a formato texto\n\n";
   cout<<"Introduce la fecha en formato (dd/mm/aa): "; cin>>date;

	// Recorriendo el string de fecha
	int i=0;
   for (char c : date) {
      if (i<2) {
         day += date[i];
      } else if (i>2 && i<5){
         month += date[i];
		} else if (i>5){
         year += date[i];
      }
		i++;
	}

	// Eligiendo el mes
	if (month == "01") {
		month = "enero";
	} else if (month == "02") {
		month = "febrero";
	} else if (month == "03") {
		month = "marzo";
	} else if (month == "04") {
		month = "abril";
	} else if (month == "05") {
		month = "mayo";
	} else if (month == "06") {
		month = "junio";
	} else if (month == "07") {
		month = "julio";
	} else if (month == "08") {
		month = "agosto";
	} else if (month == "09") {
		month = "septiembre";
	} else if (month == "10") {
		month = "octubre";
	} else if (month == "11") {
		month = "noviembre";
	} else if (month == "12") {
		month = "diciembre";
	}

	cout<<day<<" de "<<month<<" del "<<"20"<<year<<endl<<endl;

	return 0;
}