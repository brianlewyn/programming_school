/* Brayan Mejía Mora
Escribe un programa que nos dé como resultado la siguiente tabla de valores:
Entrada: --
Salida: Generar una tabla de valores.

Tabla:
a     a+2   a+4   a+6
3     5     7     9
6     8     10    12
9     11    13    15
12    14    16    18
15    17    19    21
*/

#include <iostream>
using namespace std;

int main(){
   int a=3;

   cout<<"Programa que genera una tabala de valores\n";
   cout<<"a  a+2  a+4  a+6\n";

   while (a<=15){
      cout<<a<<" "<<a+2<<" "<<a+4<<" "<<a+6<<endl;
      a += 3;
   }

   cout<<endl;
   return 0;
}