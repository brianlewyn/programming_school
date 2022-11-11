#include <iostream>
using namespace std;

int main() {
   cout<<"Programa que muestra un patron de simbolos (piramide)\n";

   // First pattern
   for (int i=0; i<10; i++) {
      for (int j=0; j<i; j++) {
         cout<<"*";
      }
      if (i!=9)
         cout<<endl;
   }

   // First pattern
   for (int i=10; i>0; i--) {
      for (int j=1; j<10; j++) {
         if (j>=i) {
            cout<<"*";
         } else {
            cout<<" ";
         }
      }
      cout<<endl;
   }

   cout<<endl;
   return 0;
}