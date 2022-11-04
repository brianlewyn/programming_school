#include "Country.h"

// another methods
void Country::getCountryData(string nameCountry) {
   name = nameCountry;
   cout<<"Capital: ";
   cin.ignore(); getline(cin, capital);
   cout<<"Continente: ";
   cin.ignore(); getline(cin, continent);
   cout<<"Idioma: ";
   cin.ignore(); getline(cin, language);
   cout<<"Población: "; cin>>population;
   cout<<"Moneda: "; cin>>currency;
   cin.ignore(); getline(cin, currency);
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

// set methods
void Country::setCapital() {
   cout<<"Ingrese el nuevo nombre de la capital: ";
   cin.ignore(); getline(cin, capital);
}
void Country::setContinent() {
   cout<<"Ingrese el nuevo nombre del continente: ";
   cin.ignore(); getline(cin, continent);
}
void Country::setLanguage() {
   cout<<"Ingrese el nuevo nombre del idioma: ";
   cin.ignore(); getline(cin, language);
}
void Country::setPopulation() {
   cout<<"Ingrese el nuevo total de la población: ";
   cin>>population;
}
void Country::setCurrency() {
   cout<<"Ingrese el nuevo tipo de moneda: ";
   cin.ignore(); getline(cin, currency);
}

// get methods
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