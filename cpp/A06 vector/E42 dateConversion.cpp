/* Brayan Mejía Mora

Escribir un programa de conversión que lea una cadena representando una  fecha  en  formato dd/mm/aa como  17/11/21  y  la  devuelva  en  formato  de  texto:  17  de noviembre de 2021.

Entrada: fecha en formato dd/mm/aa
Salida: fecha en formato texto
*/

#include <iostream>
#include <string>
using namespace std;

const string months[12] = {
   "Enero", "Febrero", "Marzo", "Abril", 
   "Mayo", "Junio", "Julio", "Agosto",
   "Septiembre", "Octubre", "Noviembre", "Diciembre"
};

string convertToDateFormat(string date);

int main() {
   string date="", text="";

   cout<<"Programa que hace conversión de una fecha en formato dd/mm/aa a formato texto\n\n";
   cout<<"Introduce la fecha en formato (dd/mm/aa): "; getline(cin, date);
   cout<<"Fecha es: "<<convertToDateFormat(date)<<"\n\n";

   return 0;
}

string convertToDateFormat(string date){
   string day="", nMonth="", year="";

   for (int i=0; i<date.size(); i++) {
      if (i<2) {
         day += date[i];
      } else if (i>2 && i<5) {
         nMonth += date[i];
      } else if (i>5) {
         year += date[i];
      }
   }

   return (day+" de "+ months[stoi(nMonth)-1]+" de "+year);
}