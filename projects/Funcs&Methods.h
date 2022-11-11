// By brianlewyn
#include <cstdlib>
#include "Methods.h"

const int SIZE = 50;

// Other funcs
void clear();
int lenStr(string temp);

// Func to verify that the data is correct
bool verifyAsNumber(string answear);
void askAndAnswerWidtInt(string sentence, int &answear);

// Func for an array of objects
int lenV(Country countries[SIZE]);
void sortCountryByAlphabet(Country countries[SIZE]);
void removeCountryIsInV(Country countries[SIZE], int len);

bool checkIfCountryIsInV(Country countries[SIZE], string name, int len);
int getIndexCountryIsInV(Country countries[SIZE], string name, int len);

// Func for attributes [array of objects]
bool checkIfContinentIsInV(Country countries[SIZE], string name, int len);
int getSetIndexContinentIsInV(Country countries[SIZE], int set[SIZE], string temp, int len);

bool checkIfCurrencyIsInV(Country countries[SIZE], string temp, int len);
int getSetIndexCurrencyIsInV(Country countries[SIZE], int setIndex[SIZE], string temp, int len);

bool checkIfLanguageIsInV(Country countries[SIZE], string temp, int len);
int getSetIndexLanguageIsInV(Country countries[SIZE], int setIndex[SIZE], string temp, int len);

// Screen cleaning method
void clear() {
   system("clear || cls");
}

// Length of a string
int lenStr(string temp) {
   int len;
   for (len=0; temp[len]!='\0'; len++);
   return len;
}

// Check that the answer is a number
bool checkAsNumber(char answear) {
   if (48<=answear && answear<=57) {
      return true;
   }
   return false;
}

// Ask until the user answers with integer
void askAndAnswerWidtInt(string sentence, int &answear) {
   int len;
   string tempStr;

   do {
      cout<<sentence;
      getline(cin, tempStr);
      len = lenStr(tempStr);

      if (len==1 && checkAsNumber(tempStr[0])) {
         answear = stoi(tempStr);
      } else {
         cout<<"\n[!] Debe ser número de un digito\n";
      }
   } while(!(len==1 && checkAsNumber(tempStr[0])));
}

// Get the length of a vector
int lenV(Country countries[SIZE]) {
   int cont=0;
   for (int i=0; i<SIZE; i++) {
      if (!(countries[i].getName()=="\0"))
         cont++;
   }
   return cont;
}

// Check if country is in the vector
bool checkIfCountryIsInV(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getName() == temp)
         return true;
   }
   return false;
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

// Get the index of the continent attribute in the vector
int getIndexCountryIsInV(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getName() == temp)
         return i;
   }
   return 0;
}

// Remove a country from the vector
void removeCountryIsInV(Country countries[SIZE], int len) {
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

// Check if continent is in the vector
bool checkIfContinentIsInV(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getContinent() == temp)
         return true;
   }
   return false;
}

// Get the set of indices of the continent attribute in the vector
int getSetIndexContinentIsInV(Country countries[SIZE], int setIndex[SIZE], string temp, int len) {
   int lenVIndex=0;
   for (int i=0; i<len; i++) {
      if (countries[i].getContinent() == temp) {
         setIndex[lenVIndex] = i;
         lenVIndex++;
      }
   }
   return lenVIndex;
}

// Check if currency is in the vector
bool checkIfCurrencyIsInV(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getCurrency() == temp)
         return true;
   }
   return false;
}

// Get the set of indices of the currency attribute in the vector
int getSetIndexCurrencyIsInV(Country countries[SIZE], int setIndex[SIZE], string temp, int len) {
   int lenVIndex=0;
   for (int i=0; i<len; i++) {
      if (countries[i].getCurrency() == temp) {
         setIndex[lenVIndex] = i;
         lenVIndex++;
      }
   }
   return lenVIndex;
}

// Check if language is in the vector
bool checkIfLanguageIsInV(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getLanguage() == temp)
         return true;
   }
   return false;
}

// Get the set of indices of the language attribute in the vector
int getSetIndexLanguageIsInV(Country countries[SIZE], int setIndex[SIZE], string temp, int len) {
   int lenVIndex=0;
   for (int i=0; i<len; i++) {
      if (countries[i].getLanguage() == temp) {
         setIndex[lenVIndex] = i;
         lenVIndex++;
      }
   }
   return lenVIndex;
}