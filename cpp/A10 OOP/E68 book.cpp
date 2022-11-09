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
      Libro(){}
      Libro(string, string, string, int);
      void mostrarDatos();

      void setName(string nameBook);
      void setISBN(string nIsbn);
      void setAutor(string nameAutor);
      void setNPag(int n);

      string getName();
      string getISBN();
      string getAutor();
      int getNPag();
};

Libro::Libro(string _titulo, string _isbn, string _autor, int _nPag) {
   titulo = _titulo;
   isbn = _isbn;
   autor = _autor;
   nPag = _nPag;
}

void Libro::setName(string nameBook) {
   titulo = nameBook;
}
void Libro::setISBN(string nIsbn) {
   isbn = nIsbn;
}
void Libro::setAutor(string nameAutor) {
   autor = nameAutor;
}
void Libro::setNPag(int n) {
   nPag = n;
}

string Libro::getName() {
   return titulo;
}
string Libro::getISBN() {
   return isbn;
}
string Libro::getAutor() {
   return autor;
}
int Libro::getNPag() {
   return nPag;
}

void Libro::mostrarDatos() {
   cout<<"\nEl libro "<<getName()<<" con ISBN "<<getISBN()<<" creado por el autor "<<getAutor()<<" tiene "<<getNPag()<<" páginas\n";
}

int main() {
   string title, isbn, autor;
   int nPag;

   Libro book1("libro1", "123a456b789d", "Mr. John", 560);
   Libro newBook;

   cout<<"Programa para agregar un nuevo libro\n\n";

   cout<<"Ingrese el nombre del libro: ";
   getline(cin, title);
   newBook.setName(title);

   cout<<"Ingrese el número de ISBN: ";
   cin>>isbn;
   newBook.setISBN(isbn);

   cout<<"Ingrese el autor: ";
   cin.ignore();
   getline(cin, autor);
   newBook.setAutor(autor);

   cout<<"Ingrese el número de páginas: ";
   cin>>nPag;
   newBook.setNPag(nPag);

   book1.mostrarDatos();
   newBook.mostrarDatos();
   return 0;
}