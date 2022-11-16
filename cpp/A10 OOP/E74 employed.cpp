/*
Defina la clase Empleado. Esta clase debe almacenar la siguiente información:
RFC, fecha de contratación y sueldo bruto.

En tu libreta:
· Diagrama de clase

En C++:
· Implementar la clase
· Constructor por defecto
· Constructor que recibe como parámetro el RFC y sueldo (recuerda que los demás
atributos deben ir en cadena vacía o en cero)
· setters y getters
· Ver datos. Este método debe devolver una cadena con todos los atributos
concatenados, como se muestra en el siguiente ejemplo:
RFC: 202020X, fecha de contratación: 10/10/2010. Sueldo: $ 32000

En el programa principal hacer:
· un vector de objetos para almacenar 15 empleados
· capturas información de 3 empleados
· mostrar la información
· decir quién gana más
*/

#include <iostream>
using namespace std;

class Employed {
private:
  string rfc, date;
  float salary;

public:
  Employed();
  Employed(string, float);
  void setRFC(string);
  void setDate(string);
  void setSalary(float);
  string getRFC();
  string getDate();
  float getSalary();
  void showData();
};

Employed::Employed() {
  this->rfc = "\0";
  this->date = "\0";
  this->salary = 0;
}
Employed::Employed(string _rfc, float _salary) {
  this->rfc = _rfc;
  this->date = "\0";
  this->salary = _salary;
}

void Employed::setRFC(string _rfc) { this->rfc = _rfc; }
void Employed::setDate(string _date) { this->date = _date; }
void Employed::setSalary(float _salary) { this->salary = _salary; }

string Employed::getRFC() { return this->rfc; }
string Employed::getDate() { return this->date; }
float Employed::getSalary() { return this->salary; }

void Employed::showData() {
  cout << "RFC: " << rfc;
  cout << ", fecha de contratación: " << date;
  cout << ". Sueldo: $" << salary << endl;
}

int main() {
  Employed employes[15];
  string rfc, date;
  float salary, temp;
  int index;

  cout << "Programa que captura la información de tres empleados, los muestra ";
  cout << "y dice quien gana más\n";

  for (int i = 0; i < 3; i++) {
    cout << "\nIngrese su RFC:\n";
    if (i != 0)
      cin.ignore();
    getline(cin, rfc);
    employes[i].setRFC(rfc);

    cout << "Ingrese su fecha de contratación:\n";
    cin.ignore();
    getline(cin, date);
    employes[i].setDate(date);

    cout << "Ingrese su salario:\n";
    cin >> salary;
    employes[i].setSalary(salary);
  }

  cout << "\nMostrar la información de los 3 empleados:";
  for (int i = 0; i < 3; i++) {
    cout << "\nEmpleado de la posición [" << i << "]\n";
    employes[i].showData();
  }

  cout << "\nMostrar quién de los 3 empleados gana más:\n";
  temp = employes[0].getSalary();
  for (int i = 0; i < 3; i++) {
    if (temp < employes[i].getSalary()) {
      temp = employes[i].getSalary();
      index = i;
    }
  }
  cout << "El empleado de la posición [" << index << "] con: $";
  cout << employes[index].getSalary() << endl;

  return 0;
}