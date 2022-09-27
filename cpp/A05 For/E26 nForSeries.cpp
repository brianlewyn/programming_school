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
   int num, nPower, newNum=0;

   cout<<"Programa que muestra una serie de números a partir de un número leído desde teclado\n";

   do {
      cout<<"Introduce un número positivo: ";
      cin>>num;
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

   return 0;
}