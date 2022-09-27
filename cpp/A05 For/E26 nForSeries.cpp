// Brayan Mejía Mora

// Escribe un programa que solicite al usuario un valor no negativo n (si introduce un valor negativo le volveremos 
// a pedir el numero hasta que introduzca uno positivo (usa do...while para esta validación), y visualice la siguiente salida:

// Nota: Es un ciclo for dentro de otro ciclo for.
// Suponiendo que n vale 6.
// 123456
// 12345
// 1234
// 123
// 12
// 1

// Entrada: un número no negativo
// Salida: del valor ingresado, obtener una serie de numeros

#include <iostream>
#include <math.h>
using namespace std;

int main() {
   /* My program
   int num, nPower, newNum=0;
   cout<<"Programa que muestra una serie de números a partir de un número leído desde teclado\n";
   do {
      cout<<"Introduce un número positivo: "; cin>>num;
   } while (num<=0);
   for (int nDigit = num; nDigit>=1; nDigit--) {
      nPower = nDigit;
      for (int unit=1; unit<=nDigit; unit++) {
         nPower -= 1;
         newNum += unit * pow(10, nPower);
      }
      cout<<newNum<<endl;
      newNum = 0;
   }
   */

   int num, aux;
   cout<<"Programa que hace una pirámide de números a partir de un leído desde téclado\n";
   num=1;
   do {
      cout<<"Introudce un número positivo: "; cin>>num;
   } while (num<0);
   // aux=num;
   // for (int i=1; i<=num; i++) {
   //    for (int j=1; j<=aux; j++) {
   //       cout<<j;
   //    }
   //    cout<<endl;
   //    aux--;
   // }
   for (int i=num; i>=1; i--) {
      for (int j=1; j<=i; j++) {
         cout<<j;
      }
      cout<<endl;
   }

   return 0;
}