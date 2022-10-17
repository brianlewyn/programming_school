/* 
Hacer un programa que lea dos números desde teclado y llame a una función llamda mult(), que multiplicará dos números, el resultado se desplegará desde la función

Entrada: dos números enteros
Salida: multiplicación de dos números
funciones1.cpp    hecho por Verónica Orozco     11 Oct 2022
*/

#include <iostream>
using namespace std;

void mult(int num1, int num2);

int main() {
   int n1, n2;

   cout<<"Programa que multiplic dos números, usa funciones\n\n";

   cout<<"Introduce el primer número: ";
   cin>>n1;
   cout<<"Introduce el segundo número: ";
   cin>>n2;

   mult(n1, n2);

   return 0;
}

void mult(int num1, int num2) {
   cout<<"El resultdado de multiplicar "<<num1<<" * "<<num2<<" es: "<<num1*num2<<endl;
   return;
}