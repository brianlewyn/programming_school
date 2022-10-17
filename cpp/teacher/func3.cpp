//Programa que usa funciones con parámetros    -------------        funciones3.cpp    hecho por: Verónica Orozco  
#include<iostream>
using namespace std;

void guiones (string titulo, int num);

int main (){
   guiones("    Ejemplo 1", 20);
   guiones("    Ejemplo 2 ", 16);
   guiones("    Ejemplo 3 ", 17);
   return 0;   
}

void guiones (string titulo, int num) {
	int i=1;
	cout<<titulo;

   while (i<=num){
      cout<<"-";
      i++;
   }
   cout<<endl<<endl;

	return;
}