/* Brayan Mejía Mora
Escribe un programa que pida al usuario una calificación y muestre por pantalla la calificación final.
Entrada: Calificación.
Salida: Tipo de calificación.
*/

#include <iostream>
using namespace std;

int main(){
   int score;

   cout<<"Programa que lee una calificación y dice que tipo calificación es.\n";
   cout<<"Introduce tu calificación: ";
	cin>>score;

   switch(score){
      case (9, 10):
         cout<<"Sobresaliente";
         break;
      case (7, 8):
         cout<<"Notable";
         break;
      case 6:
         cout<<"Aprobado";
         break;
      default:
         cout<<"Suspenso";
         break;
   }

   cout<<endl;
   return 0;
}