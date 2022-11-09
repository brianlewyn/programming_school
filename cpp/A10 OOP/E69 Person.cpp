/* Brayan Mejía Mora

Crear la clase Persona que tiene como atributos, nombre, año de nacimiento, saliro y horas trabajas. Incluir el método "ver Datos".

Hacer:
   1) Diagrama de clase (en tu libreta)

En C++:
   2) Difinicion de la clase
   3) Constructores con todos los parámetros
   4) Edad de la persona
   5) Salario semanal (salario * horas trabajadas)
   6) Mostrar Datos
   7) Instanciar 2 objetos y mostrar toda su información
*/

#include <iostream>
using namespace std;

class Persona {
   private:
      string nombre;
      int yearNacimiento;
      float salario;
      int horasTrabajadas;
      float salarioSamanal;
      int edad;

   public:
      Persona(string, int, float, int);
      void calEdad(int year);
      void salarioSemanal();
      void mostrar();
};

Persona::Persona(string _nombre, int _yearNacimiento, float _salario, int _horasTrabajadas) {
   nombre = _nombre;
   yearNacimiento = _yearNacimiento;
   salario = _salario;
   horasTrabajadas = _horasTrabajadas;
   salarioSamanal = salario * horasTrabajadas; 
}

void Persona::calEdad(int year) {
   edad = year-yearNacimiento;
   cout<<"\nLa edad es: "<<edad;
}

void Persona::salarioSemanal() {
   cout<<"\nEl salario semal es: "<<salarioSamanal;
}

void Persona::mostrar() {
   cout<<"\nNombre: "<<nombre;
   cout<<"\nEdad: "<<edad;
   cout<<"\nSalarioSemal: "<<salarioSamanal<<endl;
}

int main() {
   cout<<"Programa\n\n";

   Persona per1("Yael", 2004, 450, 40), per2("Fernando", 2000, 50, 40);

   per1.calEdad(2022);
   per1.salarioSemanal();
   cout<<endl<<endl;

   per2.calEdad(2022);
   per2.salarioSemanal();
   cout<<endl<<endl;

   per1.mostrar();
   per2.mostrar();

   return 0;
}