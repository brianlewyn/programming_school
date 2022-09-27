/* Mtra. Veronica
Dado por telcado los datos de categoría y sueldo de un trabajador calcule el sueldo correspondiente:
   Categoría   Aumento
   1           15%
   2           30%
   3           8%
   4           7%
Entrada: categoría y sueldo.
Salida: sueldo final.
*/

#include <iostream>
using namespace std;

int main(){
   int categoria;
   float sueldo, sueldoFinal;

   cout<<"Programa que calcula el sueldo final dada la categoría y el sueldo\n";

   cout<<"Introduce la catergoría: ";
   cin>>categoria;
   cout<<"Introduce el sueldo: ";
   cin>>sueldo;

   switch (categoria){
   case 1:
      sueldoFinal = sueldo*1.15;
      cout<<"El sueldo es "<<sueldo<<" y con el aumento "<<sueldoFinal;
      break;
   case 2:
      sueldoFinal = sueldo*1.10;
      cout<<"El sueldo es "<<sueldo<<" y con el aumento "<<sueldoFinal;
      break;
   case 3:
      sueldoFinal = sueldo*1.08;
      cout<<"El sueldo es "<<sueldo<<" y con el aumento "<<sueldoFinal;
      break;
   case 4:
      sueldoFinal = sueldo*1.07;
      cout<<"El sueldo es "<<sueldo<<" y con el aumento "<<sueldoFinal;
      break;
   default:
      cout<<"Categoría no valida";
      break;
   }

   cout<<endl;
   return 0;
}