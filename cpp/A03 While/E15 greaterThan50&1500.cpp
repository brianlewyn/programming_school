/* Brayan Mejía Mora
Hacer la suma de los números (desde el 1, 2, 3, 4…..) hasta que la suma sea mayor a 50. Debes mostrar el resultado.
Hacer la multiplicación de los números (desde 1,2,3,4….) hasta que la multiplicación sea mayor a 1500. Debes mostrar el resultado.
Entrada: --
Salida: De los primeros números consecutivos la suma mayor a 50 y la multiplicación mayor a 1500.
*/

#include <iostream>
using namespace std;

int main(){
   int n, temp;

   cout<<"Programa que suma y mutiplica los números consecutivos a partir de 1 hasta obtener una suma mayor a 50 y multiplicación mayor a 1500\n";

   n=1, temp=0;
   while (temp<50) 
   {
      temp += n;
      n++;
   }
   cout<<"La suma es "<<temp<<endl;

   n, temp = 1;
   while (temp<1500) 
   {
      temp *= n;
      n++;
   }
   cout<<"La multiplicación es "<<temp<<endl;

   cout<<endl;
   return 0;
}