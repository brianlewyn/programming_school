#include <iostream>
using namespace std;

int parametroPorValor(int iValor);
void parametroPorReferencia(int &iReferencia);

int main() {
   int i;
   cout<<"Introduce el valor de i: ";
   cin>>i;

   cout<<"Valor de i: "<<i<<"\nDirección de i"<<&i<<endl<<endl;
   parametroPorValor(i);

   cout<<"Valor de i después de llamar a la función de parámetro por valor: "<<i<<endl<<endl;
   parametroPorReferencia(i);
   cout<<"Valor de i después de llamar a la función de parámetro por referncia: "<<i;

   cout<<endl<<endl; 
   return 0;
}

int parametroPorValor(int iValor) {
   cout<<"Valor de iValor: "<<iValor<<endl;
   iValor++;
   return iValor;
}

void parametroPorReferencia(int &iReferencia) {
   cout<<"Dirección de iReferencia: "<<&iReferencia<<endl;
   iReferencia++;
   return;
}