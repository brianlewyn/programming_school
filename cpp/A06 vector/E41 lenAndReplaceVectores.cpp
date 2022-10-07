/* Brayan Mejía Mora

Escribir  un  programa  que  lea  3 cadenas  de  caracteres  de  longitud  40. Por cada cadena leída, su programa hará lo siguiente:
   a) Leer cada cadena desde teclado
   b) Imprimir la longitud de la cadena leída (cadena no vector).
   c) Contar el número de ocurrencias de palabras de cuatro letras.
   d) Sustituir cada palabra de cuatro letras por una cadena de cuatro asteriscos e imprimir la nueva cadena

Entrada: 3 cadenas de caracters
Salida: mostrar la longitud, la ocurrencias y sustituir las palabras de cuatro letras por asteriscos en las tres cadenas
*/

#include <iostream>
using namespace std;

const int n=40;
int length(char arr[n]);
int occurrence(char arr[n]);
void replaceByAsterisk(char arr[n], int x, int y);

int main() {
   char array[n]={};

   cout<<"Programa solicita tres cadenas de caracteres para mostrar su longitud, las ocurrencias y sustituir las palabrasde cuatro letras por asteriscos";

   for (int i=0; i<3; i++) {
      cout<<"\n\nIntroduce una frase: "; cin.getline(array, n);
      cout<<"Longitud: "<<length(array);
      cout<<"\nNúmero de ocurrencias: "<<occurrence(array);
      cout<<"\nNueva frase: "<<array;
   }

   cout<<endl<<endl;
   return 0;
}

int length(char arr[n]) {
   int len=0;
   for (len; arr[len]!='\0'; len++);
   return len;
}

int occurrence(char arr[n]) {
   int aux=0, cont=0, len=length(arr)-1;
   bool flag=true;

   for (int i=0; i<=len; i++) {
      if (arr[i]==' ') {
         //! A phrase
         if (flag && i==4) {
            replaceByAsterisk(arr, i, aux);
            flag=false;
            aux = i;
            cont++;
         }
         if ((i-aux) == 5) {
            replaceByAsterisk(arr, i, aux);
            aux = i;
            cont++;
         } else {
            aux = i;
         }
         if ((len-i) == 4) {
            replaceByAsterisk(arr, len, i);
            cont++;
         }
      } else {
         //! A word
         if ((len+1)==4 && i==3) {
            replaceByAsterisk(arr, len, 0);
            cont++;
         }
      }
   }

   return cont;
}

void replaceByAsterisk(char arr[n], int x, int y) {
   int len = length(arr)-1;

   for (int i=0; i<=len; i++){
      if ((i<x && y==0)||(x==len && i>y)||(i<x && i>y)) {
         arr[i] = '*';
      }
   }
}