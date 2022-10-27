#include <iostream>
using namespace std;

// Declare a class
class Room {
   private:
      double length;
      double breadth;
      double height;

      // calArea function
      double calArea() {
         return length * breadth;
      }

      // calVolumen function
      double calVolume() {
         return length * breadth * height;
      }

   public:
      // initialize variables with parameterized constructor
      Room(double _length, double _breadth, double _height) {
         length = _length;
         breadth = _breadth;
         height = _height;
      }

      // calDisplayRoom method
      void calDisplayRoom() {
         cout<<"Area: "<<calArea()<<endl;
         cout<<"Volumen: "<<calVolume()<<endl;
      }
};

int main() {
   cout<<"Test 04 about Objects & Class\n\n";

   // Create object and initialize data members
   Room myRoom(10, 15, 3), yourRoom(0, 0, 0);

   // Calculate and display the area and volume of the rooms
   cout<<"My Room: \n";
   myRoom.calDisplayRoom();

   cout<<"\nYour Room: \n";
   yourRoom.calDisplayRoom();

   cout<<endl;
   return 0;
}