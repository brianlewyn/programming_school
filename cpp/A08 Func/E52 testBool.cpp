/* 
Hacer un programa que determine si un número es par o no. Debes leer desde el programa principal el número y llamar a una función y llegasr a una función tipo booleana para definir si es par o impar.
Deberás poner como parámetro el número leído

Entrada: número entero
Salida: si es par o impar
funciones1.cpp    hecho por Verónica Orozco     11 Oct 2022
*/

#include <iostream>
using namespace std;

bool esParImpar(int num);

int main() {
   int n;
   cout<<"Programa que dice si un número es par o impar\n\n";

   cout<<"Introduce el número: ";
   cin>>n;

   if (esParImpar(n)) {
      cout<<"El número "<<n<<" es par";
   } else {
      cout<<"El número "<<n<<" es impar";
   }

   cout<<endl;
   return 0;
}

bool esParImpar(int num) {
   if (num%2 == 0) {
      return true;
   } else {
      return false;
   }
}