#include <iostream>
using namespace std;

// Declare a class
class Room {
   private:
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
      double length;

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

// getAverageLenTwoRoom function
void getAverageLenTwoRoom(Room r1, Room r2);

int main() {
   cout<<"Test 05 about Objects & Class\n\n";

   // Create an object of Room class
   Room myRoom(10, 15, 3), yourRoom(12, 4, 3);

   // Calculate and display the area and volume of the rooms
   cout<<"My Room: \n";
   myRoom.calDisplayRoom();

   cout<<"\nYour Room: \n";
   yourRoom.calDisplayRoom();

   getAverageLenTwoRoom(myRoom, yourRoom);

   cout<<endl;
   return 0;
}

// Function that has objects as parameters
void getAverageLenTwoRoom(Room r1, Room r2) {
   double average = (r1.length + r2.length)/2;
   cout<<"\nLongitud promedio de dos habitaciones: "<<average<<endl;
}