/* Brayan Mejía Mora

Crear la clase libro que contenga los siguientes atributos:
titulo, ISBN, autor y número de páginas. Hacer lo siguiente:
1) Hacer el diagrama de clase en su libreta

En c++
2) Definir la clase
3) Construtor con todos los parámetros
4) Hacer el método mostrar datos, con el siguiente formato:
"El libro ___ con ISBN ___ creado por el autor ___ tiene ___ páginas"

En el programa principal
5) instanciar 2 objetos
6) mostrar los datos de los objetos

Entrada: --
Salida: mostrar los datos de los objetos
*/

#include <iostream>
using namespace std;

class Libro{
   private:
      string titulo, isbn, autor;
      int nPag;
   
   public:
      Libro(string, string, string, int);
      void mostrarDatos();
};

Libro::Libro(string _titulo, string _isbn, string _autor, int _nPag) {
   titulo = _titulo;
   isbn = _isbn;
   autor = _autor;
   nPag = _nPag;
}

void Libro::mostrarDatos() {
   cout<<"El libro "<<titulo<<" con ISBN "<<isbn<<" creado por el autor "<<autor<<" tiene "<<nPag<<" páginas\n";
}

int main() {
   Libro book1("libro1", "123a456b789d", "Mr. John", 560);
   Libro book2("libro2", "123A456B789D", "Mr. Tales", 825);

   book1.mostrarDatos();
   book2.mostrarDatos();
   return 0;
}