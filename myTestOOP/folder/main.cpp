#include <iostream>
#include "class.h"
using namespace std;

int main() {
   cout<<"Test 08 about Objects & Class\n";

   // Creating and display an object of Room class
   Room myRoom =  createAndDisplayRoom("My", 10, 15, 3);
   Room yourRoom = createAndDisplayRoom("Your", 12, 4, 3);

   cout<<endl;
   return 0;
}