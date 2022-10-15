/* Brayan Mejía Mora

Nos piden que implementemos el software para una máquina expendedora de golosinas.
Cada golosina tiene un nombre y un precio.

También tendrán una cantidad inicial, que en principio será de 3. Debes crear otra matriz
para guardar esta información.

Implementar Vender golosina: pedirá la posición de la golosina que quiera. Esta máquina
tiene golosinas en cada posición, identificados por su fila y columna, que será lo que
introduzca el usuario al pedir una golosina, por ejemplo si el usuario teclea 20 significa que
está pidiendo la golosina que está en la fila 2 columna 0. Cuando no haya más golosinas se le
indicará al usuario. Solo puede pedir una golosina y supondremos que el usuario siempre
tiene dinero al elegir. Recuerda de disminuir la cantidad al pedir.

Deberás estar dentro de un ciclo hasta que el usuario diga que ya no quiere más dulces. Cada
vez que se venda un dulce deberás mostrar la leyenda “El dulce expedido es: Chicle Adams
con código 03, con precio de 1.5 dólares, quedan 2 en existencia”.

Una vez que ya no quiera comprar más dulces deberás mostrar las 3 matrices.

Entrada: 
Salida:
*/

#include <iostream>
using namespace std;

const int n=4;

string sweet[n][n] = {
   {"KitKat\t\t   ", "Chicles de fresa\t", "Chicle Adams\t\t", "Palotes"}, 
   {"Kinder Sorpresa\t   ", "Doritos\t\t", "Chetos\t\t\t", "Twix"}, 
   {"Carlos V\t   ", "M&M\t\t\t", "Papitas\t\t\t", "Chicles de menta"},
   {"Palomitas\t   ", "Crunch\t\t", "Milkyway\t\t", "KitKat fresa"}
};

float price[n][n] = {
   {1.1, 0.8, 1.5, 0.9},
   {1.8, 1.0, 1.2, 1.0},
   {1.8, 1.3, 1.2, 0.8},
   {1.5, 1.1, 1.1, 1.1}
};

int stock[n][n] = {{3, 3, 3, 3},{3, 3, 3, 3},{3, 3, 3, 3},{3, 3, 3, 3}};

int main() {
   cout<<"Máquina expendedora de golosinas\n\n";

   // Mostrar las golocinas, su posición y precio;
   for (int i=0; i<n; i++) {// row
      for (int j=0; j<n; j++) {// col
         cout<<sweet[i][j];
      }
      cout<<endl;
   }

   return 0;
}