/* Ejercicio 3. Usar ciclo for
   Hacer un programa que haga lo siguiente:
   1. Crear 4 cadenas de caracteres (tipo char). Las 3 primeras de tamaño 15 y la última de tamaño 45.
   2. En la cadena 1 leerás el nombre del usuario
   3. En la cadena 2 leerás el apellido paterno de usuario
   4. En la cadena 3 leerás el apellido materno del usuario
   5. En la cadena 4 deberás pasar el contenido de la cadena 1 a la cadena 4, luego lo de la cadena 2 y finalmente lo de la cadena 3. De manera que en la cadena 4 quede nombre, apellido paterno y apellido materno, no olvides introducir un espacio en blanco entre el nombre y los apellidos. Por ejemplo: en la cadena  4 debe quedar: Juan Pérez González.
   6. Deberás desplegar SÓLO la cadena 4
   7. Buscar en la cadena 4 las vocales y decir cuántas veces de repite cada una

Datos de entrada: nombre, apellido paterno, apellido materno
Datos de salida: nombre completo
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
   char cad1[15], cad2[15], cad3[15], cad4[45]={};
   int i=0,va=0,ve=0,vi=0,vo=0,vu=0;

   cout<<"Programa que lee 3 cadenas y las pasa a otro vector\n\n";
   cout<<"Introduce tu nombre: "; cin>>cad1;
   cout<<"Introduce tu apellido paterno: "; cin>>cad2;
   cout<<"Introduce tu apellido materno: "; cin>>cad3;

   for (i; cad1[i]!='\0'; i++)
      cad4[i] = cad1[i];
   cad4[i]=' ';
   i++;

   for (int j=0; cad2[j]!='\0'; j++){
      cad4[i] = cad2[j];
      i++;
   }
   cad4[i]=' ';
   i++;

   for (int j=0; cad3[j]!='\0'; j++){
      cad4[i] = cad3[j];
      i++;
   }

   for (int j=0; cad4[j]!='\0'; j++){
      cout<<cad4[j];

      switch (cad4[j]){
      case 'a': va++; break;
      case 'A': va++; break;
      case 'e': ve++; break;
      case 'E': ve++; break;
      case 'i': vi++; break;
      case 'I': vi++; break;
      case 'o': vo++; break;
      case 'O': vo++; break;
      case 'u': vu++; break;
      case 'U': vu++; break;
      }
   }
   cout<<"\na: "<<va<<"\ne: "<<ve<<"\ni: "<<vi<<"\no: "<<vo<<"\nu: "<<vu;

   cout<<endl;
   return 0;
}