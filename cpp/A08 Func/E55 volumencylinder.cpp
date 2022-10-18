/* Brayan Mejía Mora

Escribe un programa en C++ que lea desde teclado y desde el programa principal el radio y la altura de un cilindro, son números reales, y nos devuelva el volumen del cilindro. Debes considerar lo siguiente:

- Define el valor de π (pi) como una constante y la declaras como global
- Debes llamar una función que recibirá dos parámetros y nos devuelva el volumen.
- Desde el programa principal desplegarás el resultado
- Recuerda que el tipo de la función es float (real)

Entrada: el radio y la altrua de un cilindro
Salida: volumen de un cilindro
*/

#include <iostream>
using namespace std;

const float PI = 3.1416;

float volCylinder(float radius, float height);

int main() {
   float radius, height;
   cout<<"Programa que calcula el volumen de un cilindro\n\n";

   cout<<"Digite el radio del cilindro: ";
   cin>>radius;
   cout<<"Digite la altura del cilindro: ";
   cin>>height;

   cout<<"\nEl volumen es: "<<volCylinder(radius, height);

   cout<<endl<<endl;
   return 0;
}

float volCylinder(float radius, float height) {
   float volumen;
   volumen = PI * (radius*radius) * height;
   return volumen;
}