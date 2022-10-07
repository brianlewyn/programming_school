/* Brayan Mejía Mora

Definir un vector de 8 elementos, con los siguientes datos:
[1|2|3|4|5|6|7|8]
 0 1 2 3 4 5 6 7

Debes hacer un programa que tome el número de la posición 7 (en este caso el 8), lo guarde en una variable y recorra los demás números un lugar a la derecha, finalmente el 8 quedará en la primera posición, quedando de la siguiente manera:
[8|1|2|3|4|5|6|7]

Nota: debes usar un ciclo for para hacer el corrimiento de los números, de otra manera no tendrá puntaje este ejercicio.

Entrada: -
Salida: mostrar el mismo vector asignado, pero ahora desplazando un lugar a la derecha
*/

#include <iostream>
using namespace std;

int main() {
   int aux, vector[8]={1,2,3,4,5,6,7,8};

   cout<<"Programa que muestra un vector de 8 elementos, y luego muestra ese mismo vector deplazando un lugar a la derecha\n";

   cout<<"\nEl vector es: "; 
   for (int i=0; i<8; i++) {
      cout<<vector[i]<<" ";
   }

   // Desplazar un lugar a la recha dentro del vector
   aux = vector[7];
   for (int i=8; i>0; i--) {
      vector[i] = vector[i-1];
   }
   vector[0] = aux;

   cout<<"\n\nY ahora desplazando un lugar: ";
   for (int i=0; i<8; i++) {
      cout<<vector[i]<<" ";
   }

   cout<<"\n\n";
   return 0;
}