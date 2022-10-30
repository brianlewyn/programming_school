#include <iostream>
using namespace std;

class Country {
   private:
      string name, capital, continent, language, currency;
      int population;

   public:
      // Default
      Country() {}

      // Specific builder
      Country(string _name, string _capital, string _continent, string _language, string _currency, int _population) {
         name = _name;
         capital = _capital;
         continent = _continent;
         language = _language;
         currency = _currency;
         population = _population;
      }

      // Destroyer
      ~Country() {} // countries[index].~Country();

      void getCountryData(string nameCountry);
      void showCountryData();
      void resetData();

      void setCapital();
      void setContinent();
      void setLanguage();
      void setCurrency();
      void setPopulation();

      string getName();
      string getCapital();
      string getContinent();
      string getLanguage();
      string getCurrency();
      int getPopulation();
};

// another method
void Country::getCountryData(string nameCountry) {
   name = nameCountry;
   cout<<"Capital: "; cin>>capital;
   cout<<"Continente: "; cin>>continent;
   cout<<"Idioma: "; cin>>language;
   cout<<"Población: "; cin>>population;
   cout<<"Moneda: "; cin>>currency;
}

void Country::showCountryData() {
   cout<<"\n# "<<name;
   cout<<"\nCapital: "<<capital;
   cout<<"\nContinente: "<<continent;
   cout<<"\nIdioma: "<<language;
   cout<<"\nMoneda: "<<currency;
   cout<<"\nPoblación: "<<population<<endl;
}

void Country::resetData() {
   name = "";
   capital = "";
   continent = "";
   language = "";
   currency = "";
   population = 0;
}

// set method
void Country::setCapital() {
   cout<<"Ingrese el nuevo nombre de la capital: ";
   cin>>capital;
}
void Country::setContinent() {
   cout<<"Ingrese el nuevo nombre del continente: ";
   cin>>continent;
}
void Country::setLanguage() {
   cout<<"Ingrese el nuevo nombre del idioma: ";
   cin>>language;
}
void Country::setCurrency() {
   cout<<"Ingrese el nuevo tipo de moneda: ";
   cin>>currency;
}
void Country::setPopulation() {
   cout<<"Ingrese el nuevo total de la población: ";
   cin>>population;
}

// get method
string Country::getName() {
   return name;
}
string Country::getCapital() {
   return capital;
}
string Country::getContinent() {
   return continent;
}
string Country::getLanguage() {
   return language;
}
string Country::getCurrency() {
   return currency;
}
int Country::getPopulation() {
   return population;
}
