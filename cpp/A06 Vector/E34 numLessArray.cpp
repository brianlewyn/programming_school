/* Hacer un programa que realize la siguiente:
1. Crear un vector de números enteros, el usuario dirá el tamaño del vetor.
   sugerencia: primero greguntas el tamaño del vector y luego la creas
2. Los datos se leeran desde teclado
3. Mostrar los dats
4. Debes encontrar el número menor
5. Luego derás decir cuántas veces aparece el número menor
6. Finalmente, deberás desplegar el número menor y el número de ocurrencias en el vector
7. Sacar el promedio del vector
8. Decir la suma y el total de números positivos y negativos

Entrada: tamaño del vector y números enteros
Salida: número menor y cuántas veces aparece

VectorMenor.cpp   hecho pro verónica orozco     4 oct 22
*/

#include <iostream>
using namespace std;

int main() {
   int tam, menor;

   cout<<"Programa que crea un vector de entero, lee los datos desde teclado y encuentra el menor\n\n";
   cout<<"Introduce el tamaño del vector: ";
   cin>>tam;
   int vector[tam];


   // Leyendo los datos del vector
   for (int i=0; i<tam; i++) {
      cout<<"Introduce el dato de la posición ["<<i<<"]: ";
      cin>>vector[i];
   }

   // Mostrando los datos del vector
   for (int i=0; i<tam; i++) {
      cout<<"Vector ["<<i<<"]: "<<vector[i]<<endl;
   }

   // Encontrar el número menor
   menor = vector[0];
   for (int i=0; i<tam; i++) {
      if (vector[i]<menor)
         menor = vector[i];
   }
   cout<<"\nEl número menor es: "<<menor<<endl;

   // Econtrar el número de vecs que aparece el número menor
   int cont=0;
   for (int i=0; i<tam; i++) {
      if (vector[i]==menor)
         cont++;
   }
   cout<<"\nEl número de ocurrencias del número menor es: "<<cont<<endl;

   // Promedio
   int promedio=0;
   for (int i=0; i<tam; i++) {
      promedio += vector[i]; 
   }
   promedio /= tam;
   cout<<"\nEl promedio es: "<<promedio<<endl;

   // Suma y total de positivos y negativos
   int sumPositive=0, sumNegative=0, tolPositive=0, tolNegative=0;
   for (int i=0; i<tam; i++) {
      if (vector[i] < 0) {
         sumNegative += vector[i];
         tolNegative++;
      } else {
         sumPositive += vector[i];
         tolPositive++;
      }
   }
   cout<<"\nPositivos  Suma: "<<sumPositive<<"  Tol: "<<tolPositive<<endl;
   cout<<"Negativos  Suma: "<<sumNegative<<"  Tol: "<<tolNegative<<endl;

   return 0;
}