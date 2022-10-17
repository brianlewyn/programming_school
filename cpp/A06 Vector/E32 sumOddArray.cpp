/* Brayan Mejía Mora
Hacer un programa que cree un vector de números enteros de tamaño 10, lea los números desde teclado, luego los muestre en pantalla y finalmente nos muestre la suma de los números que se encuentran en los índices impares.
Entrada: 10 números 
Salida: la suma de los números que se encuentran en los índices impares
*/

#include <iostream>
using namespace std;

int main() {
   int num[10], sum=0;

   cout<<"Programa que muestra la suma de los números ubicados en los índices impares\n";

   for (int i=0; i<10; i++){
		cout<<"Introduce el número de la posición ["<<i<<"]: ";
		cin>>num[i];
	}

   for (int i=1; i<10; i+=2){
      sum+=num[i];
   }

   cout<<"La suma es "<<sum<<endl;

   return 0;
}