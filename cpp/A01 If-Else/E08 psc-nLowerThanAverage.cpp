/* Brayan Mejía Mora
Crea un programa que reciba como entrada cuatro números enteros y muestre por pantalla aquellos inferiores al valor medio de los cuatro números (se excluyen los valores iguales a la media).
Entrada: Cuatro números.
Salida: Aquellos números inferiores a la media.
*/

#include <iostream>
using namespace std;

int main(){
   int a, b, c, d;
   float medio;

   cout<<"Programa que lee cuatro números y muestra todos aquellos inferiores al valor medio de los cuatro numeros.\n";
   cout<<"Introduce el primer valor: ";
	cin>>a;
	cout<<"Introduce el segundo valor: ";
	cin>>b;
	cout<<"Introduce el tercer valor: ";
	cin>>c;
	cout<<"Introduce el cuarto valor: ";
	cin>>d;

   medio = (a+b+c+d)/4;
   cout<<"Inferior al valor medio: ";

   if(a<medio) {
		cout<<a<<" ";
   }
   if(b<medio) {
		cout<<b<<" ";
   }
   if(c<medio) {
		cout<<c<<" ";
   }
   if(d<medio) {
		cout<<d;
   }

   cout<<endl;
   return 0;
}