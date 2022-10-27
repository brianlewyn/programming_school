#include <iostream>
using namespace std;

struct InfRoom {
   string name;
   double length, breadth, height;
};

class Room {
   private:
      string name;
      double length, breadth, height;

      double calArea();
      double calVolume();

   public:
      Room(string, double, double, double);
      void calDisplayRoom();
      InfRoom pushRoom();
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

InfRoom Room::pushRoom() {
   InfRoom data;
   data.name = name;
   data.length = length;
   data.breadth = breadth;
   data.height = height;
   return data;
}

int main() {
   InfRoom FriendRoom[10];

   cout<<"Test 08 about Objects & Class\n";

   Room myRoom("My", 10, 15, 3);
   Room yourRoom("Your", 12, 4, 3);

   myRoom.calDisplayRoom();
   yourRoom.calDisplayRoom();
   cout<<endl;

   // Add data to FriendRoom[]
   FriendRoom[0] = myRoom.pushRoom();
   FriendRoom[1] = yourRoom.pushRoom();
   
   // Display InfRoom struct
   for (int i=0; i<2; i++) {
      cout<<FriendRoom[i].name<<endl;
      cout<<FriendRoom[i].length<<endl;
      cout<<FriendRoom[i].breadth<<endl;
      cout<<FriendRoom[i].height<<endl;
      cout<<endl;
   }

   return 0;
}