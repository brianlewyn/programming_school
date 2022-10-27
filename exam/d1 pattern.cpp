/*
*
**
***
****
*****
******
*******
********
*********
        *
       **
      ***
     ****
    *****
   ******
  *******
 ********
*********
*/

#include <iostream>
using namespace std;

int main() {
   cout<<"Programa que muestra un patron de simbolos\n\n";

   // First pattern
   for (int i=0; i<10; i++) {
      for (int j=0; j<i; j++) {
         cout<<"*";
      }
      if (i != 9)
         cout<<endl;
   }

   // First pattern
   for (int i=10; i>0; i--) {
      for (int j=1; j<i; j++) {
         cout<<" ";
      }
      for (int j=0; j<(10-i); j++) {
         cout<<"*";
      }
      cout<<endl;
   }

   cout<<endl<<endl;
   return 0;
}