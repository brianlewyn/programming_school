/* Mtra. Veronica
Programa que genera números aleatorios.
aleatorio.cpp     hecho por Verónica Orozco     12 sep 22
*/

#include <iostream>
#include <stdlib.h>  // Libreria para poder generar los números aleatorios
#include <time.h>    // Libreria para poder generar los números aleatorios
// #include <conio.h>   // Libreria para usar el getch();

using namespace std;

int main(){
   int numRandom;

   cout<<"Programa que genera números aleatorios"<<endl<<endl;

   srand(time(NULL));   // sentencia para poder generar números aleatorios

   numRandom = 1+rand()%(100);
   // generando los numeros aleatorios en el range 1 al 100
   // los guarda en la variable numRandom
   // De forma general es: 
   // variables = limite_inferior +rad

   cout<<"El número random generado es: "<<numRandom;

   // getch(); // comando para que no se cierre la pantalla para cuando usamos el archivo ejecutable. exe

   cout<<endl;
   return 0;
}