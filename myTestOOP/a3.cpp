#include <iostream>
using namespace std;

// Declare a class
class Room {
   private:
      double length;
      double breadth;
      double height;

   public:
      // initialize variables with parameterized constructor
      Room(double _length, double _breadth, double _height) {
         length = _length;
         breadth = _breadth;
         height = _height;
      }

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
   cout<<"Test 03 about Objects & Class\n\n";

   // Create object and initialize data members
   Room myRoom(10, 15, 3), yourRoom(0, 0, 0);

   // Calculate and display the area and volume of the rooms
   cout<<"My Room: \n";
   cout<<"Area: "<<myRoom.calArea()<<endl;
   cout<<"Volumen: "<<myRoom.calVolume()<<endl;

   cout<<"\nYour Room: \n";
   cout<<"Area: "<<yourRoom.calArea()<<endl;
   cout<<"Volumen: "<<yourRoom.calVolume()<<endl;

   cout<<endl;
   return 0;
}