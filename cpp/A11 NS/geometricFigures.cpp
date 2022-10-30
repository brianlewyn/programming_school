#include <iostream>
using namespace std;

int main() {
   int answer;
   float b, l, h, r, a, n, perimeter, area;

   cout<<"Programa que calcula el área y perímetro de figuras geométricas regulares\n\n";

   do {
      cout<<"\nMENU: ";
      cout<<"\n1. Círculo";
      cout<<"\n2. Triángulo Equilatero";
      cout<<"\n3. Rectángulo";
      cout<<"\n4. Cuadrado";
      cout<<"\n5. Figuras regulares con más de 5 lados";
      cout<<"\n6. Salir\n";

      cout<<"\nDigite el numero de opción: ";
      cin>>answer;

      if (answer>0 && answer<6) {
         switch (answer) {
         case 1:
            cout<<"\n# Círculo";
            cout<<"\nDigite el valor del radio: ";
            cin>>r;

            perimeter = 2 * 3.1416 * r;
            area = 3.1416 * r * r;
            break;
         case 2:
            cout<<"\n# Triángulo Equilatero";
            cout<<"\nDigite el valor de la base: ";
            cin>>b;
            cout<<"\nDigite el valor de la altura: ";
            cin>>h;

            perimeter = 3 * b;
            area = b * h / 2;
            break;
         case 3:
            cout<<"\n# Rectángulo";
            cout<<"\nDigite el valor de la base: ";
            cin>>b;
            cout<<"\nDigite el valor de la altura: ";
            cin>>h;

            perimeter = 2 * b + 2 * h;
            area = b * h;
            break;
         case 4:
            cout<<"\n# Cuadrado";
            cout<<"\nDigite el valor de uno de los lados: ";
            cin>>l;

            perimeter = 4 * l;
            area = l * l;
            break;
         default:
            cout<<"\n# Figuras regulares con más de 5 lados";
            cout<<"\nDigite el numero de lados: ";
            cin>>n;
            cout<<"\nDigite el valor del apotema: ";
            cin>>a;
            cout<<"\nDigite el valor de uno de los lados: ";
            cin>>l;

            perimeter = n * l;
            area = perimeter * a / 2;
            break;
         }

         cout<<"\nEl área es: ", area;
         cout<<"\nEl perímetro es: ", perimeter;
      }
      
      if (answer<0 || answer>6) 
         cout<<"\nEl valor esté fuera del rango, vuelva a intentarlo\n";
   } while (!(answer == 6));

   return 0;
}