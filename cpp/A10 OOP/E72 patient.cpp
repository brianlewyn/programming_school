// Vamos a almacenar la información de las personas que acuden a la clínica
// “Quiero estar sano”. Para eso se guarda la siguiente información: nombre del
// paciente, fecha de consulta, diagnóstico y medicamentos recetados.

#include <iostream>
using namespace std;

class Patient {
private:
  string name, date, diagnosis, medicines[20];
  int nMedicines();

public:
  Patient() {}
  void setName(string);
  void setDate(string);
  void setDiagnosis(string);
  void addMedicine(string);
  void removeMedicine(string);
  string getName();
  string getDate();
  string getDiagnosis();
  void showData();
};

// Private
int Patient::nMedicines() {
  int len = 0;
  for (int i = 0; i < 20; i++) {
    if (medicines[i] != "\0") {
      len++;
    }
  }
  return len;
}

// Public
void Patient::setName(string _name) { this->name = _name; }
void Patient::setDate(string _date) { this->date = _date; }
void Patient::setDiagnosis(string _diagnosis) { this->diagnosis = _diagnosis; }
void Patient::addMedicine(string medicine) {
  if (nMedicines() <= 20) {
    medicines[nMedicines()] = medicine;
    cout << "Se pueden agregar " << 20 - nMedicines() << " medicamentos\n";
  } else {
    cout << "Son 20 medicamentos, ya no es posible agregar\n";
  }
}
void Patient::removeMedicine(string medicine) {
  bool status = false;
  for (int i = 0; i < 20; i++) {
    if (medicines[i] == medicine) {
      cout << "Se ha eliminado el medicamento\n";
      medicines[i] = "\0";
      status = true;
      break;
    }
  }

  if (status) {
    int j = 0;
    for (int i = 0; i < 20; i++) {
      if (medicines[i] != "\0") {
        medicines[j] = medicines[i];
        j++;
      }
    }
    medicines[nMedicines() - 1] = "\0";
  } else {
    cout << "El nombre, no está en el registro\n";
  }
}

string Patient::getName() { return name; }
string Patient::getDate() { return date; }
string Patient::getDiagnosis() { return diagnosis; }
void Patient::showData() {
  int len = nMedicines();
  cout << "\nPaciente [" << name << "]:\n";
  cout << "Fecha: " << date << endl;
  cout << "\nDignóstico:\n" << diagnosis << endl;
  cout << "\nMedicamentos recetados: \n";
  if (len != 0) {
    for (int i = 0; i < len; i++) {
      cout << i + 1 << ") " << medicines[i] << endl;
    }
  } else {
    cout << "Ninguno\n";
  }
}

// func prototype
void addNewPatient(Patient &user);
void editPatient(Patient &user, int digit);

int main() {
  Patient patient1, patient2;
  string temp;
  int digitMenu, digitSubMenu;
  bool patinet1Exists, patinet2Exists, flag = true, flag2 = true;

  cout << "Programa que almacena la información de los pacientes que ";
  cout << "acuden a la clínica \"Quiero estar sano\"\n";

  do {
    cout << "\nMenú [Paciente]:\n";
    cout << "1. Alta de paciente\n";
    cout << "2. Modificar datos\n";
    cout << "3. Mostrar los datos\n";
    cout << "4. Salir\n\n";

    cout << "Digite el número de opción: ";
    cin >> digitMenu;

    if (1 <= digitMenu || digitMenu <= 3) {
      if (digitMenu == 1) {
        cout << "\n# Alta de paciente\n";
        if (patient1.getName() == "\0") {
          addNewPatient(patient1);
        } else if (patient2.getName() == "\0") {
          addNewPatient(patient2);
        } else {
          cout << "Ya no es posible dar de alta a más pacientes\n";
        }
      }

      if (digitMenu == 2) {
        if (patient1.getName() != "\0" || patient1.getName() != "\0") {
          cout << "\nIngrese el nombre del paciente: \n";
          cin.ignore();
          getline(cin, temp);

          if ((patient1.getName() == temp) || (patient1.getName() == temp)) {
            do {
              cout << "\n# SubMenú: [Modificar datos: " << patient1.getName();
              cout << "]\n1. Nombre\n";
              cout << "2. Fecha\n";
              cout << "3. Diagnóstico\n";
              cout << "4. Agregar medicamento\n";
              cout << "5. Eliminar medicamento\n";
              cout << "6. Salir\n\n";

              cout << "Digite el número de opción: ";
              cin >> digitSubMenu;

              cin.ignore();
              if (patient1.getName() == temp) {
                editPatient(patient1, digitSubMenu);
              } else if (patient2.getName() == temp) {
                editPatient(patient2, digitSubMenu);
              }
            } while (!(digitSubMenu == 6));
          } else {
            cout << "El nombre, no está en el registro\n";
          }
        } else {
          cout << "No hay registros\n";
        }
      }

      if (digitMenu == 3) {
        if (patient1.getName() != "\0" || patient1.getName() != "\0") {
          cout << "Ingrese el nombre del paciente: \n";
          cin.ignore();
          getline(cin, temp);

          if (patient1.getName() == temp) {
            patient1.showData();
          } else if (patient2.getName() == temp) {
            patient2.showData();
          } else {
            cout << "El nombre, no está en el registro\n";
          }
        } else {
          cout << "No hay registros\n";
        }
      }
    }

    if (!(1 <= digitMenu && digitMenu <= 4)) {
      cout << "El número está fuera de rango, vuelva a intentarlo\n";
    }
  } while (!(digitMenu == 4));

  return 0;
}

void addNewPatient(Patient &user) {
  int number;
  string temp;

  cout << "Ingrese el nombre del paciente: \n";
  cin.ignore();
  getline(cin, temp);
  user.setName(temp);

  cout << "\nIngrese la fecha de alta del paciente: \n";
  getline(cin, temp);
  user.setDate(temp);

  cout << "\nIngrese el diagnóstico del paciente: \n";
  getline(cin, temp);
  user.setDiagnosis(temp);

  cout << "\nPuede ingresar un máximo de 20 medicamentos\n";
  cout << "Digite el total de medicamentos a ingresar: \n";
  cin >> number;

  cin.ignore();
  for (int i = 0; i < number; i++) {
    cout << "\nIngrese el nombre del medicamento: \n";
    getline(cin, temp);
    user.addMedicine(temp);
  }

  cout << "\n[!] Se hizo el registro correctamente!\n";
}
void editPatient(Patient &user, int digit) {
  string temp;
  cout << endl;
  switch (digit) {
  case 1:
    cout << "## Nombre\n";
    cout << "Ingrese el nuevo nombre del paciente: \n";
    cin.ignore();
    getline(cin, temp);
    user.setName(temp);
    break;
  case 2:
    cout << "## Fecha\n";
    cout << "Ingrese la nueva fecha para el alta del paciente: \n";
    getline(cin, temp);
    user.setDate(temp);
    break;
  case 3:
    cout << "## Diagnóstico\n";
    cout << "Ingrese el nuevo diagnóstico del paciente: \n";
    cin.ignore();
    getline(cin, temp);
    user.setDiagnosis(temp);
    break;
  case 4:
    cout << "## Agregar medicamento\n";
    cout << "Ingrese el nombre del medicamento: \n";
    getline(cin, temp);
    user.addMedicine(temp);
    break;
  case 5:
    cout << "## Eliminar medicamento\n";
    cout << "Ingrese el nombre del medicamento: \n";
    getline(cin, temp);
    user.removeMedicine(temp);
    break;
  case 6:
    // get out of the submenu
    break;
  default:
    cout << "El número está fuera de rango, vuelva a intentarlo\n";
    break;
  }
}