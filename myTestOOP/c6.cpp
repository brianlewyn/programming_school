#include <iostream>
using namespace std;

// Declare a class
class Room {
   private:
      string name;
      double length;
      double breadth;
      double height;

      // calArea()
      double calArea() {
         return length * breadth;
      }

      // calVolumen()
      double calVolume() {
         return length * breadth * height;
      }

   public:
      // initialize variables with parameterized constructor
      Room(string _name, double _length, double _breadth, double _height) {
         name = _name + " Room";
         length = _length;
         breadth = _breadth;
         height = _height;
      }

      // Room.calDisplayRoom()
      void calDisplayRoom() {
         cout<<"\n"<<name<<": \n";
         cout<<"Area: "<<calArea()<<endl;
         cout<<"Volumen: "<<calVolume()<<endl;
      }
};

// createRoom() that returns object of Room
Room createAndDisplayRoom(string name, double length, double breadth, double height) {
   // Create an object of Room class
   Room room(name, length, breadth, height);
   room.calDisplayRoom();
   return room;
}

int main() {
   cout<<"Test 06 about Objects & Class\n\n";

   // Create an object of Room class
   Room myRoom("My", 10, 15, 3);
   Room yourRoom = createAndDisplayRoom("Your", 12, 4, 3);

   // Calculate and display the area and volume of the rooms
   // myRoom.calDisplayRoom();
   // yourRoom.calDisplayRoom();

   cout<<endl;
   return 0;
}