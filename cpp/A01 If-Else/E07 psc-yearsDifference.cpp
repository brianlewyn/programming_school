/* Brayan Mejía Mora
Escribe un programa que pida el año actual y un año cualquiera y muestre un mensaje diciendo cuántos años faltan para llegar a ese año (si es posterior al actual), cuántos han transcurrido desde ese año (si es anterior), o si ese año es el actual.
Entrada: Año actual y un año cualquiera.
Salida: Años de diferencia o si es el actual.
*/

#include <iostream>
using namespace std;

int main(){
   int current, any, res;

   cout<<"Programa que lee el año actual y un año cualquiera y muestra la diferencia \nde los que faltan o sobran o si es el año actual.\n";
   cout<<"Introduce el año actual: ";
   cin>>current;
   cout<<"Introduce un año cualquiera: ";
   cin>>any;

   res = current-any;

   if (res==0){
      cout<<"El año cualquiera es el mismo que el actual";
   } else if(res>0){
      cout<<"Años anteriores al año actual son "<<res;
   } else {
      cout<<"Años posteriores al año actual son "<<res*(-1);
   }

   cout<<endl;
   return 0;
}