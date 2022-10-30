#include <iostream>
using namespace std;

// Declare a class
class Room {
   private:
      double length;
      double breadth;
      double height;

   public:
      // function to initialize private variables
      void initData(double _length, double _breadth, double _height) {
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
   cout<<"Test 02 about Objects & Class\n\n";

   // Create objects of Room class
   Room myRoom, yourRoom;

   // Assign values to data members
   myRoom.initData(10, 15, 3);

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