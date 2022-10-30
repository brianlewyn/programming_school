// By Brayan Mejía Mora

#include <iostream>
#include "Country.h"
using namespace std;

const int SIZE = 50;

int lenV(Country countries[SIZE]);
void sortCountryByAlphabet(Country countries[SIZE]);
void removeCountryIsInV(Country countries[SIZE], int index, int len);

bool checkIfCountryIsInV(Country countries[SIZE], string name, int len);
int getIndexCountryIsInV(Country countries[SIZE], string name, int len);

bool checkIfContinentIsInV(Country countries[SIZE], string name, int len);
int getSetIndexContinentIsInV(Country countries[SIZE], int set[SIZE], string temp, int len);

bool checkIfCurrencyIsInV(Country countries[SIZE], string temp, int len);
int getSetIndexCurrencyIsInV(Country countries[SIZE], int setIndex[SIZE], string temp, int len);

bool checkIfLanguageIsInV(Country countries[SIZE], string temp, int len);
int getSetIndexLanguageIsInV(Country countries[SIZE], int setIndex[SIZE], string temp, int len);


int main() {
   Country countries[SIZE]={};
   int digitMenu, digitSubMenu, index=0, lenVIndex=0, setIndex[SIZE]={}, len;
   char answear;
   string temp;

   // Instantiating some countries
   Country Mexico("México", "Ciudad_De_México", "América", "Español", "pesos", 15000);
   Country Cuba("Cuba", "Ciudad_De_Cuba", "América", "aleman", "pesos", 15000);
   Country Japan("Japan", "Ciudad_De_Japan", "Asia", "japan", "pesos", 15000);

   // Save instances in vector objects
   countries[0] = Mexico;
   countries[1] = Cuba;
   countries[2] = Japan;
   sortCountryByAlphabet(countries);

   do {
      // Main menu
      cout<<"\nMenú [Países]:\n";
      cout<<"1. Alta de país\n";
      cout<<"2. Modificación de alguna característica del país\n";
      cout<<"3. Eliminación de país\n";
      cout<<"4. Consulta específica de algún país\n";
      cout<<"5. Consulta de los países de algún continente\n";
      cout<<"6. Consulta de los países de algún tipo de moneda\n";
      cout<<"7. Consulta de los países de algún tipo de idioma\n";
      cout<<"8. Salir\n";

      cout<<"\nDigite el número de opción: ";
      cin>>digitMenu;

      len = lenV(countries);

      // Add Country
      if (digitMenu==1 && len<SIZE) {
         cout<<"\n# Alta de país";
         cout<<"\nNombre del país: "; cin>>temp;

         if (!checkIfCountryIsInV(countries, temp, len)) {
            countries[len].getCountryData(temp);
            sortCountryByAlphabet(countries);
         } else {
            cout<<"\n[!] El nombre ingresado ya está includo en el registro\n";
         }
      }

      len = lenV(countries);
      if (len!=0) {
         // Edit Country
         if (digitMenu==2) {
            cout<<"\n# Modificación de alguna característica del país";
            cout<<"\nIngrese el nombre del país: ";
            cin>>temp;

            if (checkIfCountryIsInV(countries, temp, len)) {
               index = getIndexCountryIsInV(countries, temp, len);

               do {
                  // Secondary menu
                  cout<<"\nSubMenú ["<<temp<<"]:\n";
                  cout<<"1. Capital\n";
                  cout<<"2. Continente\n";
                  cout<<"3. Idioma\n";
                  cout<<"4. Población\n";
                  cout<<"5. Moneda\n";
                  cout<<"6. Salir \n";

                  cout<<"\nDigite el número de opción: ";
                  cin>>digitSubMenu;

                  if (digitSubMenu>0 && digitSubMenu<6) {
                     switch (digitSubMenu){
                     case 1:
                        countries[index].setCapital();
                        break;
                     case 2:
                        countries[index].setContinent();
                        break;
                     case 3:
                        countries[index].setLanguage();
                        break;
                     case 4:
                        countries[index].setPopulation();
                        break;
                     default:
                        countries[index].setCurrency();
                        break;
                     }
                  }

                  if (!(digitSubMenu>0 && digitSubMenu<=6))
                     cout<<"\n[!] Número fuera del rango, vuelva a intentarlo";
               } while (!(digitSubMenu==6));
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n";
            }
         }

         // Remove Country
         if (digitMenu==3) {
            cout<<"\n# Eliminación de país";
            cout<<"\nIngrese el nombre del país: ";
            cin>>temp;

            if (checkIfCountryIsInV(countries, temp, len)) {
               index = getIndexCountryIsInV(countries, temp, len);
               countries[index].resetData();
               removeCountryIsInV(countries, index, len);
               cout<<"País eliminado del registro";
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro";
            }
         }

         // Specific Country
         if (digitMenu==4) {
            cout<<"\n# Consulta específica de algún país";
            cout<<"\nIngrese el nombre del país: ";
            cin>>temp;

            if (checkIfCountryIsInV(countries, temp, len)) {
               index = getIndexCountryIsInV(countries, temp, len);
               countries[index].showCountryData();
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro";
            }
         }

         // Countries of the same continent
         if (digitMenu==5) {
            cout<<"\n# Consulta de los países de algún continente";
            cout<<"\nIngrese el nombre del continente: ";
            cin>>temp;

            if (checkIfContinentIsInV(countries, temp, len)) {
               lenVIndex = getSetIndexContinentIsInV(countries, setIndex, temp, len);
               for (int i=0; i<lenVIndex; i++) {
                  countries[setIndex[i]].showCountryData();
               }
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n";
            }
         }

         // Countries with the same type of currency
         if (digitMenu==6) {
            cout<<"\n# Consulta de los países de algún tipo de moneda";
            cout<<"\nIngrese el tipo de moneda: ";
            cin>>temp;

            if (checkIfCurrencyIsInV(countries, temp, len)) {
               lenVIndex = getSetIndexCurrencyIsInV(countries, setIndex, temp, len);
               for (int i=0; i<lenVIndex; i++) {
                  countries[setIndex[i]].showCountryData();
               }
            } else {
               cout<<"[!] El tipo ingresado, no está en el registro\n";
            }
         }

         // Countries with the same type of lenguage
         if (digitMenu==7) {
            cout<<"\n# Consulta de los países de algún tipo de idioma";
            cout<<"\nIngrese el tipo de idioma: ";
            cin>>temp;

            if (checkIfLanguageIsInV(countries, temp, len)) {
               lenVIndex = getSetIndexLanguageIsInV(countries, setIndex, temp, len);
               for (int i=0; i<lenVIndex; i++) {
                  countries[setIndex[i]].showCountryData();
               }
            } else {
               cout<<"[!] El tipo ingresado, no está en el registro\n";
            }
         }
      } else {
         cout<<"\n[!] No hay registros\n";
      }

      if (!(digitMenu>0 && digitMenu<=8))
         cout<<"[!] Número fuera del rango, vuelva a intentarlo\n";
   } while (!(digitMenu==8));


   // Check that all objects were saved
   cout<<"Deseas ver todos los registros (s/n): ";
   cin>>answear;

   if (answear=='s' || answear=='S') {
      for (int i=0; i<SIZE; i++) {
         if (countries[i].getName() != "\0") {
            countries[i].showCountryData();
         }
      }
   }

   return 0;
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

// Sort countries by alphabet in a vector
void sortCountryByAlphabet(Country countries[SIZE]) {
   Country temp, aux[SIZE];
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
void removeCountryIsInV(Country countries[SIZE], int index, int len) {
   Country aux[len];
   int cont=0;

   for (int i=0; i<len; i++) {
      if (countries[i].getName() != "\0") {
         aux[cont] = countries[i];
         cont++;
      }
   }

   for (int i=0; i<=len; i++) {
      if (i<len) {
         countries[i] = aux[i];
      } else {
         countries[i].resetData();
      }
   }
}

// Check if country is in the vector
bool checkIfCountryIsInV(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getName() == temp)
         return true;
   }
   return false;
}

// Get the index of the continent attribute in the vector
int getIndexCountryIsInV(Country countries[SIZE], string temp, int len) {
   for (int i=0; i<len; i++) {
      if (countries[i].getName() == temp)
         return i;
   }
   return 0;
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
   setIndex[SIZE] = {};
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
   setIndex[SIZE] = {};
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
   setIndex[SIZE] = {};
   int lenVIndex=0;
   for (int i=0; i<len; i++) {
      if (countries[i].getLanguage() == temp) {
         setIndex[lenVIndex] = i;
         lenVIndex++;
      }
   }
   return lenVIndex;
}