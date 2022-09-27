/* Brayan Mejía Mora
Escribe los primeros 200 elementos de la serie 7, 11, 15, 19, ?
Entrada: --
Salida: los primeros 200 números de la serie 7, 11, 15, ...
*/

#include <iostream>
using namespace std;

int main() {
   int n=7, cont=0;

   cout<<"Programa que imprime los primeros 200 elementos de la serie 7, 11, 15, 19, ,...\n";

   while (cont<=200) {
      n += 4;
      cout<<n<<" ";
      cont++;
   }
   
   cout<<"\n\n";
   return 0;
}
