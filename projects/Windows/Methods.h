#ifndef Methods_H
#define Methods_H
#include "FuncsToVerifyData.h"
#include <iostream>
#include <string>
using namespace std;

// Default
Country::Country() {
   this->name = "";
   this->capital = "";
   this->continent = "";
   this->language = "";
   this->currency = "";
   this->population = 0;
}

// Constructor
Country::Country(string _name, string _capital, string _continent, string _language, string _currency, long _population) {
   this->name = _name;
   this->capital = _capital;
   this->continent = _continent;
   this->language = _language;
   this->currency = _currency;
   this->population = _population;
}

// Methods for data
void Country::getData(string _name) {
   int indexContinent;
   string message;

   this->name = _name;
   message = "Capital: ";
   request(message, this->capital);

   showContinents();
   message = "Continente: ";
   requestIndexContinet(message, indexContinent);
   this->continent = CONTINENTS[indexContinent];

   message = "Idioma: ";
   request(message, this->language);

   message = "Moneda: ";
   request(message, this->currency);

   message = "Población: ";
   request(message, this->population);
   cout<<endl;
}

void Country::showData() {
   cout<<"# "<<name;
   cout<<"\nCapital: "<<capital;
   cout<<"\nContinente: "<<continent;
   cout<<"\nIdioma: "<<language;
   cout<<"\nMoneda: "<<currency;
   cout<<"\nPoblación: ";
   cout<<formatNumber(population);
   cout<<" habitantes\n\n";
}

void Country::resetData() {
   this->name = "";
   this->capital = "";
   this->continent = "";
   this->language = "";
   this->currency = "";
   this->population = 0;
}

// Set methods
void Country::setName(string _name) {
   this->name = _name;
}
void Country::setCapital(string _capital) {
   this->capital = _capital;
}
void Country::setContinent(string _continent) {
   this->continent = _continent;
}
void Country::setLanguage(string _language) {
   this->language = _language;
}
void Country::setCurrency(string _currency) {
   this->currency = _currency;
}
void Country::setPopulation(long _population) {
   this->population = _population;
}

// Get methods
string Country::getName() {
   return this->name;
}
string Country::getCapital() {
   return this->capital;
}
string Country::getContinent() {
   return this->continent;
}
string Country::getLanguage() {
   return this->language;
}
string Country::getCurrency() {
   return this->currency;
}
long Country::getPopulation() {
   return this->population;
}

#endif
