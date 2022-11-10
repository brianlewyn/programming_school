#include <iostream>
#include "Country.h"
using namespace std;

// constructor
Country::Country(string name, string capital, string continent, string language, string currency, int population) {
   this->name = name;
   this->capital = capital;
   this->continent = continent;
   this->language = language;
   this->currency = currency;
   this->population = population;
}

// another methods
void Country::getAttributes(string nameCountry) {
   name = nameCountry;
   cout<<"Capital: ";
   cin.ignore(); getline(cin, capital);
   cout<<"Continente: ";
   cin.ignore(); getline(cin, continent);
   cout<<"Idioma: ";
   cin.ignore(); getline(cin, language);
   cout<<"Moneda: ";
   cin.ignore(); getline(cin, currency);
   cout<<"Población: "; cin>>population;
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
void Country::setCapital(string nameCapital) {
   capital = nameCapital;
}
void Country::setContinent(string nameContinent) {
   continent = nameContinent;
}
void Country::setLanguage(string nameLanguage) {
   language = nameLanguage;
}
void Country::setCurrency(string nameCurrency) {
   currency = nameCurrency;
}
void Country::setPopulation(int numPopulation) {
   population = numPopulation;
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