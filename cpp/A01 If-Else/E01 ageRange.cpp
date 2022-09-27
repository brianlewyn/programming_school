/* Mtr. Veronica
Escribe un programa en c++ que solicite una edad (un entero) e indique en la salida estándar si está en el rango de [18-25].
Entrada: Edad.
Salida: Si se encuentra en el rango.
*/

#include <iostream>
using namespace std;

int main(){
   int edad;

   cout<<"Digita su edad: ";
   cin>>edad;

   if((edad>=18) && (edad<=25)) {
      cout<<"Su edad está en el rango [18-25]";
   } else {
      cout<<"Su edad no está en el rango [18-25]";
   }

   cout<<"\n";
   return 0;
}
