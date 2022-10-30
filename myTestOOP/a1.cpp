#include <iostream>
using namespace std;

// Declare a class
class Room {
   public:
      double length;
      double breadth;
      double height;

      // calArea method 
      double calArea() {
         return length * breadth;
      }

      // calVolumen method
      double calVolume() {
         return length * breadth * height;
      }
};

int main() {
   cout<<"Test 01 about Objects & Class\n\n";

   // Create objects of Room class
   Room myRoom, yourRoom;

   // Assign values to data members
   myRoom.length = 10;
   myRoom.breadth = 15;
   myRoom.height = 3;

   // Calculate and display
   cout<<"My Room: \n";
   cout<<"Area: "<<myRoom.calArea()<<endl;
   cout<<"Volumen: "<<myRoom.calVolume()<<endl;

   cout<<"\nYour Room: \n";
   cout<<"Area: "<<yourRoom.calArea()<<endl;
   cout<<"Volumen: "<<yourRoom.calVolume()<<endl;

   cout<<endl;
   return 0;
}