/* Brayan Mejía Mora

Diagrama de clase (siempre)
# Gatito
- nombre:string
- raza:string
+ Gatito(string,string)
+ void jugar()
+ void mostrarDatos()
// + ~Gatitio(string,string) // destructor

Implementar la clase Gatito, como atributo tiene el nombre y la raza, como métodos jugar y mostrar datos

Entrada: 
Salida:
*/

#include <iostream>
using namespace std;

class Cat{
   private:
      string name, race;

   public:
      Cat(string, string);
      void play();
      void showData();
};

Cat::Cat(string _name, string _race) {
   name = _name;
   race = _race;
}

void Cat::play() {
   cout<<"Hola, soy "<<name<<" y estoy jugando"<<endl;
}

void Cat::showData() {
   cout<<"Nombre del gatito: "<<name<<endl;
   cout<<"Raza: "<<race<<endl;
}

int main() {
   Cat cat1("Don Gato", "callejero"), cat2("Señor Gato", "negro");
   cat2.play();
   cat1.play();
   cat1.showData();
   cat2.showData();
   return 0;
}