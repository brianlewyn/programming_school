/* Mtra. Veronica
Introducir 3 números distintos entre si,luego mostrar el menor y el mayor.
Ejemplos:
   Si a=2, b=5 y c=12; deberá mostrar 2, 12
   Si a=12, b=6 y c=8; deberá mostrar 6, 12
Datos de entrada: 3 números distintos.
Datos de salida: el menor y el mayor (en ese orden).
*/

#include <iostream>
using namespace std;

int main() {
   // Declaración de tipo entero
   int a, b, c, menor, mayor;

   cout<<"Programa que muestra el mayor y el menor de 3 números enteros.\n";
   
   cout<<"Introduce el primer número: ";
   cin>>a;
   cout<<"Introduce el segundo número: ";
   cin>>b;
   cout<<"Introduce el tercer número: ";
   cin>>c;

   // Encontrando el número menor
   if (a<b && a<c){
      menor=a;
   }
   if (b<a && b<c){
      menor=b;
   }
   if (c<a && c<b){
      menor=c;
   }

   // Encontrando el número mayor
   if (a>b && a>c){
      mayor=a;
   }
   if (b>a && b>c){
      mayor=b;
   }
   if (c>a && c>b){
      mayor=c;
   }

   cout<<"\nLos números menor y mayor son: "<<menor<<" "<<mayor<<endl;
   return 0;
}