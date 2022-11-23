#ifndef Functions_H
#define Functions_H
#include "Methods.h"
#include <cstdlib>

// Object Array Size
const int SZ = 50;

// Option Type to use as Func
const short NAME = 1;
const short CONTINENT = 2;
const short CURRENCY2 = 3;
const short LANGUAGE = 4;
const bool ADD = true;
const bool DELETE = false;

// Funcs Prototype
// Funcs to clear screen and show menus & continue an action
void clear();
void showMenu();
void showSubMenu(string);
bool continueAction();
bool continueAction(int, bool);

// Funcs for Array Objects
int lenArray(Country);
void sortCountriesByAlphabet(Country, int);
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
      cout<<"[#] Deseas continuar con está opción (s/n)? ";
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
      cout<<"[#] Deseas continuar con está opción (s/n)? ";
      getline(cin, temp);
      trim(temp);

      if (lenStr(temp)==1 && (temp=="s" || temp=="n" || temp=="S" || temp=="N")) {
         flag = false;
         if (temp=="s" || temp=="S") {
            if (0<len && len<SZ){
               answer = true;
            } else {
               answer = false;
               if (len==SZ && option==ADD)
                  msg = "[!] Se han registrado "+to_string(SZ)+" países, ya no es posible continuar con está opción\n\n";
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

// Get the length of Array Objects
int lenArray(Country countries[SZ]) {
   int cont=0;
   for (int i=0; i<SZ; i++) {
      if (countries[i].getName() != "")
         cont++;
   }
   return cont;
}

// Sort countries by alphabet in Array Objects
void sortCountriesByAlphabet(Country countries[SZ], int len) {
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

// Remove a country from Array Objects
void removeCountryInArray(Country countries[SZ], int len) {
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
int getIndexOfCountryInArray(Country countries[SZ], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getName() == temp)
         return i;
   }
   return 0;
}

// Check if temp (country, continent, currency or language) is in the array
bool checkIfTempInArray(Country countries[SZ], short option, string temp, int len) {
   bool answer=false;
   for (int i=0; i<len; i++) {
      if (option==NAME && countries[i].getName()==temp)
         answer = true;
      if (option==CONTINENT && countries[i].getContinent()==temp)
         answer = true;
      if (option==CURRENCY2 && countries[i].getCurrency()==temp)
         answer = true;
      if (option==LANGUAGE && countries[i].getLanguage()==temp)
         answer = true;
   }
   return answer;
}

// Get indices of the (continent, currency or language) attribute in the vector
void showAllCoincidenceInArray(Country countries[SZ], short option, string temp, int len) {
   for (int i=0; i<len; i++) {
      if (option==CONTINENT && countries[i].getContinent()==temp)
         countries[i].showData();
      if (option==CURRENCY2 && countries[i].getCurrency()==temp)
         countries[i].showData();
      if (option==LANGUAGE && countries[i].getLanguage()==temp)
         countries[i].showData();
   }
}

#endif
