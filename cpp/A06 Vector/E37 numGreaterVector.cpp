/* Brayan Mejía Mora

Hacer un programa que realice lo siguiente:
Crear un vector de 20 elementos con valores numéricos diferentes. Encontrar el valor mayor y su posición dentro del vector (los deberás desplegar).
   • Los datos se leerán desde teclado (el usuario los irá introduciendo) y debes ir viendo que no se introduzca un número repetido.
   • Posteriormente encontrar el número mayor.
   • Desplegar el número mayor y su posición dentro del vector

[10|40|70|20|50|60|15|30|28|80|25|35|55|45|05|65|75|12|22|32]
  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19

Entrada: 20 números enteros diferentes
Salida: el número mayor y su posición dentro del vector
*/

#include <iostream>
using namespace std;

int main() {
   int cont=0, index=0, largest=0, vector[20]={};
   bool flag=true;

   cout<<"Programa que lee 20 números enteros diferentes, muestra el número mayor y su posición dentro de vector\n";

   // Leer números enteros diferentes
   for (int i=0; i<20; i++) {
      cout<<"Introduce el dato de la posición ["<<i<<"]: "; cin>>vector[i];
      cont++;

      while (flag) {
         flag = false;

         // Comprar que el número es en verdad distinto
         for (int j=0; j<cont; j++) {
            // Pregunar por un número nuevo si es repetido
            if (vector[i]==vector[j] && i!=j) {
               cout<<"Vuleve a introducir el dato de la posición ["<<i<<"]: "; cin>>vector[i];
               flag = true;
            }
         }
      }
      flag = true;
   }

   // Encontrar el número mayour del vetor y su posición
   largest = vector[0];
   for (int i=0; i<20; i++) {
      if (vector[i] > largest) {
         largest = vector[i];
         index = i;
      }
   }

   cout<<"Mayor <- "<<largest<<"  Index <-"<<index<<"\n\n";

   return 0;
}