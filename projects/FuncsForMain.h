#ifndef FuncsForMain_H
#define FuncsForMain_H
#include <cstdlib>
#include "Methods.h"

const int SIZE = 50;

// Funcs Prototype 
// Screen cleaning method
void clear();

// Funcs for an array of objects
int lenArray(Country);
void sortCountriesByAlphabet(Country, int);
void removeCountryInArray(Country, int);
int getIndexOfCountryInArray(Country, string, int);

// Funcs for attributes [array of objects]
bool checkIfOptionInArray(Country, string, string, int);
int getIndicesOfOptionInArray(Country, int, string, string, int);

// Screen cleaning method
void clear() {
   system("clear || cls");
}

// Get the length of a vector
int lenArray(Country countries[SIZE]) {
   int cont=0;
   for (int i=0; i<SIZE; i++) {
      if (countries[i].getName()!="")
         cont++;
   }
   return cont;
}

// Sort countries by alphabet in a vector
void sortCountriesByAlphabet(Country countries[SIZE], int len) {
   Country temp;
   for (int i=0; i<len; i++) {
      for (int j=0; j<len; j++) {
         if (countries[i].getName() < countries[j].getName()) {
            temp = countries[j];
            countries[j] = countries[i];
            countries[i] = temp;
         }
      }
   }
}

// Remove a country from the vector
void removeCountryInArray(Country countries[SIZE], int len) {
   Country aux[len];
   int cont=0;

   // Save all countries in the aux vector except it was removed
   for (int i=0; i<len; i++) {
      if (countries[i].getName() != "") {
         aux[cont] = countries[i];
         cont++;
      }
   }

   // Empty the aux vector into the countries vector, and the last one, delete it
   for (int i=0; i<=len; i++) {
      if (i<len) {
         countries[i] = aux[i];
      } else {
         countries[i].resetData();
      }
   }
}

// Get the index of the continent attribute in the vector
int getIndexOfCountryInArray(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getName() == temp)
         return i;
   }
   return 0;
}

// Check if (country, continent, currency or language) is in the array
bool checkIfOptionInArray(Country countries[SIZE], string option, string temp, int len) {
   bool answer=false;
   for (int i=0; i<len; i++) {
      if (option=="Name" && countries[i].getName()==temp)
         answer = true;
      if (option=="Continent" && countries[i].getContinent()==temp)
         answer = true;
      if (option=="Currency" && countries[i].getCurrency()==temp)
         answer = true;
      if (option=="Language" && countries[i].getLanguage()==temp)
         answer = true;
   }
   return answer;
}

// Get the set of indices of the (continent, currency or language) attribute in the vector
int getIndicesOfOptionInArray(Country countries[SIZE], int setIndex[SIZE], string option, string temp, int len) {
   int lenIndices=0;
   for (int i=0; i<len; i++) {
      if (option=="Continent" && countries[i].getContinent()==temp) {
         setIndex[lenIndices] = i;
         lenIndices++;
      }
      if (option=="Currency" && countries[i].getCurrency()==temp) {
         setIndex[lenIndices] = i;
         lenIndices++;
      }
      if (option=="Language" && countries[i].getLanguage()==temp) {
         setIndex[lenIndices] = i;
         lenIndices++;
      }
   }
   return lenIndices;
}
#endif
