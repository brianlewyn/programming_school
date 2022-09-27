/* Brayan Mejía Mora
Escribe un programa conversor de varias modedas a euros. El programa debe presentar un menú como el siguiente:
Seleccione una opción:
   1. Dólar
   2. Yen Japonés
   3. Libra
   4. Salir
y a continuación deberá leer una cantidad de la moneda seleccionada, que será traducida a eruos. 
"Usa do-while y el switch".
Entrada: Opción selecionada y valor de moneda
Salida: Conversión a euros
*/

#include <iostream>
using namespace std;

int main() {
   int option;
   float value;

   cout<<"Programa que convierte algún tipo moneda a euros\n";
   do {
      cout<<"Seleccione la opción: \n1. Dólar \n2. Yen Japonés \n3. Libra \n4. Salir \n";
      cin>>option;

      switch (option) {
         case 1:
            cout<<"Ingrese la cantidada a convertir: ";
            cin>>value;
            cout<<"La conversión es "<<(value * 20);
            break;
         case 2:
            cout<<"Ingrese la cantidada a convertir: ";
            cin>>value;
            cout<<"La conversión es "<<(value * 0.14);
            break;
         case 3:
            cout<<"Ingrese la cantidada a convertir: ";
            cin>>value;
            cout<<"La conversión es "<<(value * 0.14);
            break;
         case 4:
            cout<<"Saliendo...";
            break;
         default:
            cout<<"Error";
            break;
      }

      cout<<"\n\n";
   }
   while (option != 4);

   return 0;
}