#ifndef _FuncsForMain_H_
#define _FuncsForMain_H_

#include <cstdlib>
#include "Methods.h"

const int SIZE = 50;

// Other funcs
void clear();

// Funcs for an array of objects
int lenArray(Country countries[SIZE]);
void sortCountryByAlphabet(Country countries[SIZE]);
void removeCountryInArray(Country countries[SIZE], int len);
int getIndexOfCountryInArray(Country countries[SIZE], string temp, int len);

// Funcs for attributes [array of objects]
bool checkIfOptionInArray(Country countries[SIZE], string option, string temp, int len);
int getIndicesOfOptionInArray(Country countries[SIZE], int setIndex[SIZE], string option, string temp, int len);

// Screen cleaning method
void clear() {
   system("clear || cls");
}

// Get the length of a vector
int lenArray(Country countries[SIZE]) {
   int cont=0;
   for (int i=0; i<SIZE; i++) {
      if (!(countries[i].getName()=="\0"))
         cont++;
   }
   return cont;
}

// Sort countries by alphabet in a vector
void sortCountryByAlphabet(Country countries[SIZE]) {
   Country temp;
   for (int i=0; i<SIZE; i++) {
      for (int j=0; j<SIZE; j++) {
         if (countries[i].getName() != "\0" && countries[j].getName() != "\0") {
            if (countries[i].getName() < countries[j].getName()) {
               temp = countries[j];
               countries[j] = countries[i];
               countries[i] = temp;
            }
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
      if (countries[i].getName() != "\0") {
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
   for (int i=0; i<len; i++) {
      if (option=="Country" && countries[i].getName()==temp)
         return true;
      if (option=="Continent" && countries[i].getContinent() ==temp)
         return true;
      if (option=="Currency" && countries[i].getCurrency()==temp)
         return true;
      if (option=="Language" && countries[i].getLanguage()==temp)
         return true;
   }
   return false;
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