// funciones1.cpp hecho por: Verónica Orozco
#include<iostream>;
using namespace std;

int main (){
   int i=1;
   cout<<" Ejemplo 1 ";
   while (i<=20){
      cout<<"-";
      i++;
   }
   cout<<endl<<endl;

   i=1;
   cout << " Ejemplo 2 ";
   while (i<=20){
      cout<<"-";
      i++;
   }
   cout<<endl<<endl;

   i=1;
   cout << " Ejemplo 3 ";
   while (i<=20){
      cout<<"-";
      i++;
   }

   cout<<endl<<endl;
   return 0;
}

/*
   1. ¿Qué hace el programa funciones1.cpp?
   Por cada ejemplo, se escribe el mismo fragmento de código para imprimir 20 guiones 

   2. ¿Qué hace el programa funciones2.cpp?
   Por cada ejemplo, se utiliza mismo código para imprimir 20 guiones usando una función que solo imprime los guiones de forma constante

   3. ¿Qué hace el programa funciones3.cpp?
   Por cada ejemplo, se utiliza mismo código para imprimir 20 guiones usando una función que solo imprime el nombre del ejemplo y los guiones, pero en este último caso se especifica el ejemplo y la cantidad de guiones, es decir, que es manipulable 

   4. ¿Cuál es la diferencia entre cada programa?
   El primer programa no utiliza funciones, por tanto escribe más de una vez un fragmento de código. En el segundo, se utiliza un función que solo imprime valores, por tanto, no utiliza parametros ni devuleve valores. En el tercero, también se hace uso de una función, pero ahora si solicita algo, dos parámetro, el nombre del ejemplo y la cantidad de guiones
*/