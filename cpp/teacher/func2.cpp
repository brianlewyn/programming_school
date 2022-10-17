//Programa que usa funciones sin parámetros ----- funciones2.cpp hecho por: Verónica Orozco
#include<iostream>
using namespace std;

void guiones ();

int main (){
   cout << "    Ejemplo 1 ";
   guiones();
   
   cout << "    Ejemplo 2 ";
   guiones();
   
   cout << "    Ejemplo 3 ";
   guiones();

   cout<<endl;
   return 0;
}

void guiones () {
	int i=1;
   while (i<=20){
      cout<<"-";
      i++;
	}
	cout<<endl;
}