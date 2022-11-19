#ifndef Methods_H
#define Methods_H
#include <iostream>
#include <string>
#include "FuncsToVerifyData.h"
using namespace std;

// Format method
string Country::getFormatPopulation() {
   int len, cont=0;
   string reverse, temp = to_string(population);

   // Length
   for (len=0; temp[len]!='\0'; len++){}

   // Reverse number
   for (int i=len; i>=0; i--) {
      reverse += temp[i];
   }

   // Reverse number with format
   temp = "";
   for (int i=0; i<=len; i++) {
      if (i%3==0 && i!=0) {
         temp += reverse[i];
         if (i!=0 && i!=len) {
            temp += ",";
         }
         cont++;
      } else {
         temp += reverse[i];
      }
   }

   // Again, reverse number with format
   reverse = "";
   for (int i=len+cont; i>=0; i--) {
      reverse += temp[i];
   }

   return reverse;
}

// Default
Country::Country() {
   this->population = 0;
}

// Constructor
Country::Country(string _name, string _capital, string _continent, string _language, string _currency, int _population) {
   this->name = _name;
   this->capital = _capital;
   this->continent = _continent;
   this->language = _language;
   this->currency = _currency;
   this->population = _population;
}

// Methods for data
void Country::getData(string nameCountry) {
   string temp;
   this->name = nameCountry;

   cout<<"Capital: ";
   getline(cin, temp);
   this->capital = temp;

   cout<<"Continente: ";
   getline(cin, temp);
   this->continent = temp;

   cout<<"Idioma: ";
   getline(cin, temp);
   this->language = temp;

   cout<<"Moneda: ";
   getline(cin, temp);
   this->currency = temp;

   this->population = intRequest("Población: ");
   cout<<endl;
}

void Country::showData() {
   cout<<"# "<<name;
   cout<<"\nCapital: "<<capital;
   cout<<"\nContinente: "<<continent;
   cout<<"\nIdioma: "<<language;
   cout<<"\nMoneda: "<<currency;
   cout<<"\nPoblación: ";
   cout<<getFormatPopulation()<<"\n\n";
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
void Country::setPopulation(int _population) {
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
int Country::getPopulation() {
   return this->population;
}
#endif
