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

const int n=20;
void requestEachData(int vector[n]);
void checkRepeatedData(bool *flag, int cont, int i, int vector[n]);
void getLargestAndItsIndex(int *index, int *largest, int vector[n]);

int main() {
   int index=0, largest=0, vector[n]={};

   cout<<"Programa lee 20 números enteros diferentes, muestra el número mayor y su posición dentro de vector\n";
   requestEachData(vector);
   getLargestAndItsIndex(&index, &largest, vector);
   cout<<"Mayor <- "<<largest<<"  Index <-"<<index<<"\n\n";

   return 0;
}

void requestEachData(int vector[n]) {
   int cont=0;
   bool flag=true;
   for (int i=0; i<n; i++) {
      cout<<"Introduce el dato de la posición ["<<i<<"]: "; cin>>vector[i];
      cont++;
      while (flag) {
         flag = false;
         checkRepeatedData(&flag, cont, i, vector);
      }
      flag = true;
   }
}

void checkRepeatedData(bool *flag, int cont, int i, int vector[n]) {
   for (int j=0; j<cont; j++) {
      if (vector[i]==vector[j] && i!=j) {
         cout<<"Vuleve a introducir el dato de la posición ["<<i<<"]: "; cin>>vector[i];
         *flag = true;
      }
   }
}

void getLargestAndItsIndex(int *index, int *largest, int vector[n]) {
   *largest = vector[0];
   for (int i=0; i<n; i++) {
      if (vector[i] > *largest) {
         *largest = vector[i];
         *index = i;
      }
   }
}