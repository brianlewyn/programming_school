// Crea una clase llamada Cuenta que tendrá los siguientes atributos: titular y
// cantidad (puede tener decimales). Para abrir la cuenta se requieren
// inicialmente 2,000 pesos.

#include <iostream>
using namespace std;

class Cuenta {
private:
  string titular;
  float cantidad;

public:
  Cuenta();
  void setTitular(string);
  string getTitular();
  void ingresar();
  void retirar();
  void mostrarDatos();
};

Cuenta::Cuenta() {
  this->titular = "\0";
  this->cantidad = 2000;
}

void Cuenta::setTitular(string _titular) { this->titular = _titular; }
string Cuenta::getTitular() { return titular; }

void Cuenta::ingresar() {
  float temp;
  cout << "Ingresa el monto en pesos: ";
  cin >> temp;

  cantidad += temp;
  cout << "Monto final: " << cantidad << " pesos\n";
}
void Cuenta::retirar() {
  float temp;
  cout << "Ingresa el monto a retirar, en pesos: ";
  cin >> temp;
  if (0 <= temp && temp <= cantidad) {
    cantidad -= temp;
    cout << "Monto final: " << cantidad << " pesos\n";
  } else {
    cout << "ERROR: El monto ingresado, está fuera rango\n";
  }
}
void Cuenta::mostrarDatos() {
  cout << "Titular: " << titular << endl;
  cout << "Monto total: " << cantidad << endl;
}

void programAccout(Cuenta user, string nUser);

// int main() {
//   Cuenta user1, user2;

//   cout << "Programa que abre una cuenta con un monto mínimo ";
//   cout << "de 2000 pesos, con un menú para ingresar o retirar ";
//   cout << "dinero \n\n";

//   programAccout(user1, "user1");
//   cin.ignore();
//   programAccout(user2, "user2");

//   return 0;
// }

void programAccout(Cuenta user, string nUser) {
  string temp;
  int digitMenu;
  bool flag = true;

  do {
    if (flag) {
      cout << nUser << "\nIngrese el nombre del titular: ";
      getline(cin, temp);
      user.setTitular(temp);
      flag = false;
    }

    cout << "\n# " << user.getTitular() << endl;
    cout << "Menú [cuenta]:\n";
    cout << "1. Cambiar Titular\n";
    cout << "2. Ingresar monto\n";
    cout << "3. Retirar monto\n";
    cout << "4. Mostrar cuenta actual\n";
    cout << "5. Salir\n\n";

    cout << "Digite el número de opción: ";
    cin >> digitMenu;

    cout << endl;
    switch (digitMenu) {
    case 1:
      cout << "# Cambiar Titular\n";
      cout << "Ingrese el nuevo titular: ";
      cin.ignore();
      getline(cin, temp);
      user.setTitular(temp);
      break;
    case 2:
      cout << "# Ingresar monto\n";
      user.ingresar();
      break;
    case 3:
      cout << "# Retirar monto\n";
      user.retirar();
      break;
    case 4:
      cout << "# Mostrar cuenta actual\n";
      user.mostrarDatos();
      break;
    case 5:
      // get out of the menu
      break;
    default:
      cout << "El número está fuera de rango, vuelva a intentarlo\n";
      break;
    }
  } while (!(digitMenu == 5));
}