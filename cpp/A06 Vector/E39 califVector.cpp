/* Brayan Mejía Mora

Crear dos vectores, uno para guardar cadenas y otro de tipo flotante. El primero es para guardar el nombre de los estudiantes y el otro para guardar sus calificaciones. Deberás pedir al usuario el tamaño del vector. Sugerencia: primero pregunta el tamaño del vector y luego lo creas.
Se capturarán los nombres de los estudiantes en un vector y sus calificaciones en el otro, de manera correspondiente.
Deberás encontrar aquellos que reprobaron y deberás desplegar el nombre y su calificación

Entrada: el número de estudiantes, sus nombres y sus calificaciones
Salida: el nombre y la calificación de los alumnos reprobados
*/

#include <iostream>
using namespace std;

int main() {
   int size;

   cout<<"Programa que lee el nombre y la calificación de un estudiante, los guarda en una lista con un tamaño definido por el usuario, y al final solo muestra quellos que reprobaron\n\n";

   cout<<"Introduce el tamaño de la lista: "; cin>>size;
   string names[size]={};
   float scores[size]={};

   // Contruir la lista de nombres y calificaciones
   for (int i=0; i<size; i++) {
      cout<<"\nNombre: "; cin>>names[i];
      cout<<"Calificación: "; cin>>scores[i];
   }

   // Mostrar aquellos alumnos que reprobaron (nombre y calificación)
   cout<<"\nEl o los alumnos reprobado(s) son: \n";
   for (int i=0; i<size; i++) {
      if (scores[i] < 6) {
         cout<<names[i]<<": "<<scores[i]<<endl;
      }
   }

   cout<<endl;
   return 0;
}