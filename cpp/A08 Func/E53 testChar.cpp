/* 
Hacer un programa que lea un nombre y nos devuelva el primer carácter, debes usar una función

Entrada: nombre
Salida: primer carácter del nombre
funciones1.cpp    hecho por Verónica Orozco     29 Abr 2022
*/

#include <iostream>
using namespace std;

char primerCaracter(string nom);

int main() {
   string nombre;
   cout<<"Programa que te devuleve la primer letra de tu nombre\n\n";

   cout<<"Introduce tu numbre: ";
   getline(cin, nombre);
   cout<<"Tu nombre comienza con"<<primerCaracter(nombre);

   return 0;
}

char primerCaracter(string nom) {
   char p;
   p = nom[0];
   return p;
}