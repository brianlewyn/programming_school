/* Hacer un programa que defina un vector de tamaño 5 y haga la suma de sus elementos. Posteriormente crear otro vector con números aleatorios, el tamaño lo especifica el usuario. Hacer la suma de sus elementos y mostrarla.

Entrada: vector de números enteros
Salida: suma de cada vector
vectorNum4.cpp       hecho por veronica orozco        6 oct 2022
*/

#include <iostream>
#include <stdlib.h> // libreria pata generar números aleatorios
#include <time.h> // libreria pata generar números aleatorios
using namespace std;

int main() {
   // definiendo un vector
   int vector[]={1,2,3,4,5}, suma=0;

   cout<<"Programa que muestra la suma de un vector"<<endl;

   // mostrando en pantalla el vector
   for (int i=0; i<5; i++) {
      cout<<"Vector ["<<i<<"]: "<<vector[i]<<endl;
   }

   // suma de números
   for (int i=0; i<5; i++) {
      suma += vector[i];
   }
   cout<<"\nLa suma es: "<<suma<<endl;

   // LLenado un vector con números aleatorios
   int tam, numRandom;
   cout<<"\n\nLlenando un vector con números aleatorios";
   cout<<"\nIntroduce el tamaño del vector: "; cin>>tam;
   int vectorAleatorio[tam];

   srand(time(NULL)); // sentencia para números aleatorios

   // LLenando el vector con números aleatorios
   for (int i=0; i<tam; i++) {
      numRandom = 1+rand()%(100); // numeros aleatorios entre 1 y 100
      vectorAleatorio[i] = numRandom; //asignandoel número aleatorio al vector
   }

   // mostrando en pantalla el vector
   for (int i=0; i<tam; i++) {
      cout<<"Vector ["<<i<<"]: "<<vectorAleatorio[i]<<endl;
   }

   suma=0; // suma de números
   for (int i=0; i<tam; i++) {
      suma += vectorAleatorio[i];
   }
   cout<<"\nLa suma es: "<<suma<<endl;
   return 0;
}