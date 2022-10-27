#include <iostream>
using namespace std;

class Room {
   private:
      string name;
      double length, breadth, height;

      double calArea();
      double calVolume();

   public:
      Room(string, double, double, double);
      void calDisplayRoom();
};

double Room::calArea() {
   return length * breadth;
}

double Room::calVolume() {
   return length * breadth * height;
}

Room::Room(string _name, double _length, double _breadth, double _height) {
   name = _name + " Room";
   length = _length;
   breadth = _breadth;
   height = _height;
}

void Room::calDisplayRoom() {
   cout<<"\n"<<name<<": \n";
   cout<<"Area: "<<calArea()<<endl;
   cout<<"Volumen: "<<calVolume()<<endl;
}

Room createAndDisplayRoom(string name, double length, double breadth, double height) {
   Room room(name, length, breadth, height);
   room.calDisplayRoom();
   return room;
}

int main() {
   cout<<"Test 07 about Objects & Class\n";

   // Creating and display an object of Room class
   Room myRoom =  createAndDisplayRoom("My", 10, 15, 3);
   Room yourRoom = createAndDisplayRoom("Your", 12, 4, 3);

   cout<<endl;
   return 0;
}