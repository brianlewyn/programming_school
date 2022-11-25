#ifndef Functions_H
#define Functions_H
#include "Methods.h"
#include <cstdlib>

// Object Array Size
const int SIZE = 50;

// Option Type to use as Func
const short NAME = 1;
const short CONTINENT = 2;
const short CURRENCY = 3;
const short LANGUAGE = 4;
const bool ADD = true;
const bool DELETE = false;

// Funcs Prototype
// Funcs to clear screen, show menus & continue an action
void clear();
void showMenu();
void showSubMenu(string);
bool continueAction();
bool continueAction(int, bool);

// Func to have a better order
void changeSentece(Country, int);
void revertChangeSentece(Country, int);
void sortCountriesByAlphabet(Country, int);

// Funcs for Array Objects
int lenArray(Country);
void removeCountryInArray(Country, int);
int getIndexOfCountryInArray(Country, string, int);

// Funcs for specific data from Array Objects
bool checkIfTempInArray(Country, short, string, int);
void showAllCoincidenceInArray(Country, short, string, int);

// Screen cleaning func
void clear() {
   system("clear || cls");
}

// Show main menu
void showMenu() {
   cout<<"Menú [Países]:\n";
   cout<<"1. Alta de país\n";
   cout<<"2. Modificación de alguna característica del país\n";
   cout<<"3. Eliminación de país\n";
   cout<<"4. Consulta específica de algún país\n";
   cout<<"5. Consulta de los países de algún continente\n";
   cout<<"6. Consulta de los países de algún tipo de idioma\n";
   cout<<"7. Consulta de los países de algún tipo de moneda\n";
   cout<<"8. Mostrar todos los registros\n";
   cout<<"9. Limpiar pantalla\n";
   cout<<"10. Salir\n\n";
}

// Show sub menu
void showSubMenu(string name) {
   cout<<"SubMenú ["<<name<<"]:\n";
   cout<<"1. Capital\n";
   cout<<"2. Continente\n";
   cout<<"3. Idioma\n";
   cout<<"4. Moneda\n";
   cout<<"5. Población\n";
   cout<<"6. Salir\n\n";
}

// The func continue (general)
bool continueAction() {
   string temp;
   bool flag, answer;

   do {
      flag=false;
      cout<<"[#] Deseas continuar con la misma opción (s/n)? ";
      getline(cin, temp);
      trim(temp);

      if (lenStr(temp)==1 && (temp=="s" || temp=="n" || temp=="S" || temp=="N")) {
         flag = false;
         if (temp=="s" || temp=="S")
            answer = true;
         if (temp=="n" || temp=="N")
            answer = false;
      } else {
         cout<<"\n[!] Solo se admite una letra: s/n o S/N\n";
         flag = true;
      }
   } while (flag);

   clear();
   return answer;
}

// The func continue (to AddCountry && DeleteCountry)
bool continueAction(int len, bool option) {
   string temp, msg="";
   bool flag, answer;

   do {
      flag=false;
      cout<<"[#] Deseas continuar con la misma opción (s/n)? ";
      getline(cin, temp);
      trim(temp);

      if (lenStr(temp)==1 && (temp=="s" || temp=="n" || temp=="S" || temp=="N")) {
         flag = false;
         if (temp=="s" || temp=="S") {
            if (0<len && len<SIZE){
               answer = true;
            } else {
               answer = false;
               if (len==SIZE && option==ADD)
                  msg = "[!] Se han registrado "+to_string(SIZE)+" países, ya no es posible continuar con está opción\n\n";
               if (len==0 && option==DELETE)
                  msg = "[!] No hay registros\n\n";
            }
         }
         if (temp=="n" || temp=="N")
            answer = false;
      } else {
         cout<<"\n[!] Solo se admite una letra: s/n o S/N\n";
         flag = true;
      }
   } while (flag);

   clear();
   cout<<msg;
   return answer;
}

// Change sentences that have 
// the first letter ñ or a stressed vowel
void changeSentece(Country countries[SIZE], int len) {
   string temp;

   for (int i=0; i<len; i++) {
      temp = countries[i].getName();

      if (temp[0] == SPECIAL[0]) {
         if (temp[1] == SPECIAL[1]) {
            countries[i].setName("A" + temp);
         }
         if (temp[1] == SPECIAL[2]) {
            countries[i].setName("E" + temp);
         }
         if (temp[1] == SPECIAL[3]) {
            countries[i].setName("I" + temp);
         }
         if (temp[1] == SPECIAL[4]) {
            countries[i].setName("O" + temp);
         }
         if (temp[1] == SPECIAL[5]) {
            countries[i].setName("U" + temp);
         }
         if (temp[1] == SPECIAL[6]) {
            countries[i].setName("N" + temp);
         }
      }
   }
}

// Revert change sentences that have
// the second letter ñ or a stressed vowel
void revertChangeSentece(Country countries[SIZE], int len) {
   string temp;
   bool flag;

   for (int i=0; i<len; i++) {
      temp = countries[i].getName();
      flag = true;

      // Check if there is a sentence
      // with a vowel or n in the first letter
      flag = temp[0] == VOWEL[0];
      for (int j=1; j<=5; j++) {
         flag = flag || temp[0] == VOWEL[j];
      }

      // Delete it if there is a sentence
      // with a stressed vowel or ñ in the second letter
      for (int j=1; j<=6; j++) {
         if (flag && temp[1] == SPECIAL[0] && temp[2] == SPECIAL[j]) {
            temp[0] = ' ';
            trim(temp);
            countries[i].setName(temp);
         }
      }
   }
}

// Sort countries by alphabet in Array Objects
void sortCountriesByAlphabet(Country countries[SIZE], int len) {
   Country temp;
   changeSentece(countries, len);
   for (int i=0; i<len; i++) {
      for (int j=0; j<len; j++) {
         if (countries[i].getName() < countries[j].getName()) {
            temp = countries[j];
            countries[j] = countries[i];
            countries[i] = temp;
         }
      }
   }
   revertChangeSentece(countries, len);
}

// Get the length of Array Objects
int lenArray(Country countries[SIZE]) {
   int cont=0;
   for (int i=0; i<SIZE; i++) {
      if (countries[i].getName() != "")
         cont++;
   }
   return cont;
}

// Remove a country from Array Objects
void removeCountryInArray(Country countries[SIZE], int len) {
   Country aux[len];
   int i, cont=0;

   // Save all countries in the aux array except it was removed
   for (i=0; i<len; i++) {
      if (countries[i].getName() != "") {
         aux[cont] = countries[i];
         cont++;
      }
   }

   // Empty the aux array into the countries array, and the last one, delete it
   for (i=0; i<len; i++) {
      countries[i] = aux[i];
   }
}

// Get the index of the continent attribute in Array Objects
int getIndexOfCountryInArray(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getName() == temp)
         return i;
   }
   return 0;
}

// Check if temp (country, continent, currency or language) is in the array
bool checkIfTempInArray(Country countries[SIZE], short option, string temp, int len) {
   bool answer=false;
   for (int i=0; i<len; i++) {
      if (option==NAME && countries[i].getName()==temp)
         answer = true;
      if (option==CONTINENT && countries[i].getContinent()==temp)
         answer = true;
      if (option==CURRENCY && countries[i].getCurrency()==temp)
         answer = true;
      if (option==LANGUAGE && countries[i].getLanguage()==temp)
         answer = true;
   }
   return answer;
}

// Get indices of the (continent, currency or language) attribute in the vector
void showAllCoincidenceInArray(Country countries[SIZE], short option, string temp, int len) {
   for (int i=0; i<len; i++) {
      if (option==CONTINENT && countries[i].getContinent()==temp)
         countries[i].showData();
      if (option==CURRENCY && countries[i].getCurrency()==temp)
         countries[i].showData();
      if (option==LANGUAGE && countries[i].getLanguage()==temp)
         countries[i].showData();
   }
}

#endif
