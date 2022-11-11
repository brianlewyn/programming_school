// By brianlewyn
#include <iostream>
#include "Country.h"
using namespace std;

// constructor
Country::Country(string _name, string _capital, string _continent, string _language, string _currency, int _population) {
   this->name = _name;
   this->capital = _capital;
   this->continent = _continent;
   this->language = _language;
   this->currency = _currency;
   this->population = _population;
}

// another methods
void Country::getAttributes(string nameCountry) {
   name = nameCountry;
   cout<<"Capital: ";
   getline(cin, capital);
   cout<<"Continente: ";
   getline(cin, continent);
   cout<<"Idioma: ";
   getline(cin, language);
   cout<<"Moneda: ";
   getline(cin, currency);
   cout<<"Población: "; cin>>population;
   cout<<endl;
}

void Country::showCountryData() {
   cout<<"# "<<name;
   cout<<"\nCapital: "<<capital;
   cout<<"\nContinente: "<<continent;
   cout<<"\nIdioma: "<<language;
   cout<<"\nMoneda: "<<currency;
   cout<<"\nPoblación: "<<population<<"\n\n";
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