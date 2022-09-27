// entFloatantes.cpp    hecho pro Verónica Orozco     10 marzo 22

#include <iostream>  //I/O
// para reconocer el teclado en español:
// #include <windows.h>
using namespace std;

int main(){
   // Setlocate(LS_ALL, "Spanish"); //reconocer el teclado español
   // SetConsoleCP(1252);  // reconocer el teclado español (entradas)
   // SetConsoleOutputCP(1252); // reconocer el teclado español (salidas)
   float x, y;
   string cadena; // Leer cadenas - no se pueden leer espacios en blanco
   char cadena2[30]; // Vector de caracters - no se pueden leer espacios en blanco

   cout<<"Introduce la cadena:ñóíúéá ";
   cin>>cadena;
   cout<<"Introduce la cadena 2: ";
   cin>>cadena2;

   cout<<"Cadena "<<cadena<<endl;
   cout<<"Cadena2 "<<cadena2<<endl;

   cout<<endl;
   return 0;
}