/* Brayan Mejía Mora
Realizar un algoritmo que ingrese una vocal minúscula y lo muestre en mayúscula.
Entrada: Una vocal en minúscula.
Salida: Una vocal en mayúscula.
*/

#include <iostream>
using namespace std;

int main(){
   char letter;

   cout<<"Programa que lee una vocal minúscula y lo muestra en mayúsculas.\n";
   cout<<"Introduce una vocal minúscula: ";
	cin>>letter;

   switch(letter){
      case 'a':
         cout<<"A";
         break;
      case 'e':
         cout<<"E";
         break;
      case 'i':
         cout<<"I";
         break;
      case 'o':
         cout<<"O";
         break;
      case 'u':
         cout<<"U";
         break;
      default:
         cout<<"Error";
         break;
   }

   cout<<endl;
   return 0;
}