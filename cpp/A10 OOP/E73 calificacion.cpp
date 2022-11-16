/*
Hacer una clase llamada calificación que tendrá la calificación de I.
Programación y Matemáticas, hacer:
- Diagrama de clase
- Implementar la calse en c++
- Constructor por defecto
- Constructor con todos los parámetros
- setters y getters
- método para promediar ambas calificaciones
- ver datos
En el programa principal hacer:
- un vector de objetos para almacenar varias calificaciones

--------------------------
      Calificación
--------------------------
- calProg: int
- calMate: int
--------------------------
+ Calificación()
+ Calificación(int, int)
+ void setProg(float)
+ void setMate(float)
+ float getProg()
+ float getMate()
+ float Promedio()
+ void verDatos()
--------------------------
*/

#include <iostream>
using namespace std;

class Calificacion {
 private:
  float calProg, calMate;

 public:
  Calificacion();
  Calificacion(float, float);
  void setCalProg(float);
  void setCalMate(float);
  float getCalProg();
  float getCalMate();
  float promedio();
  void verDatos();
};

Calificacion::Calificacion() {
  this->calProg = 0;
  this->calMate = 0;
}
Calificacion::Calificacion(float _calProg, float _calMate) {
  this->calProg = _calProg;
  this->calMate = _calMate;
}

void Calificacion::setCalProg(float _calProg) { this->calProg = _calProg; }
void Calificacion::setCalMate(float _calMate) { this->calMate = _calMate; }

float Calificacion::getCalProg() { return this->calProg; }
float Calificacion::getCalMate() { return this->calMate; }

float Calificacion::promedio() { return ((calProg + calMate) / 2); }
void Calificacion::verDatos() {
  cout << "\nCalificación de I. a la Programación: " << calProg;
  cout << "\nCalificación de Matemáticas: " << calMate;
}

int main() {
  float cal;
  Calificacion Memo, vCalifcacion[10];

  // # Instancia: Memo
  // cout << "\n# Un Objeto\n";
  // cout << "Calificación de Introdución a la programáción: \n";
  // cin >> cal;
  // Memo.setCalProg(cal);
  // cout << "Calificación de Matemáticas:\n";
  // cin >> cal;
  // Memo.setCalMate(cal);
  // Memo.verDatos();
  // cout << "\nEl promedio de Memo es de: " << Memo.promedio() << endl;

  // # Primera instancia de un vetor
  // cout << "\nVector de objetos";
  // cout << "\nCalificación de Introdución a la programáción: \n";
  // cin >> cal;
  // vCalifcacion[0].setCalProg(cal);
  // cout << "\nCalificación de Matemáticas:\n";
  // cin >> cal;
  // vCalifcacion[0].setCalMate(cal);
  // vCalifcacion[0].verDatos();
  // cout << "\nPosición [0] del vector de obj de Int Prog: ";
  // cout << vCalifcacion[0].getCalProg() << endl;
  // cout << "Posición [0] del vector de obj de Mate: ";
  // cout << vCalifcacion[0].getCalMate() << endl;
  // cout << "El promedio de Memo es de: " << vCalifcacion[0].promedio() <<
  // endl;

  // Interara en vector de objetos
  cout << "Guardar 5 calficaciones \n";
  for (int i = 0; i <= 5; i++) {
    cout << "Calificacion de introduccion a la programacion [" << i << "]: ";
    cin >> cal;
    vCalifcacion[i].setCalProg(cal);

    cout << "Calificacion de matematicas: [" << i << "]: ";
    cin >> cal;
    vCalifcacion[i].setCalMate(cal);
  }

  cout << "\nMostrar el registro de calificaciones\n";
  for (int i = 0; i <= 5; i++) {
    cout << "\nvector de objetos [" << i << "]";
    vCalifcacion[i].verDatos();
    cout << "\nPromedio de la posición [" << i << "]: ";
    cout << vCalifcacion[i].promedio() << endl;
  }

  return 0;
}
