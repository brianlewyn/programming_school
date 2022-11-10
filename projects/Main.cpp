// By Brayan Mejía Mora
#include <iostream>
#include <stdlib.h>
#include "Funcs&Methods.h"
using namespace std;

int main() {
   Country countries[SIZE]={};
   int digitMenu, digitSubMenu, len, tempInt, index, lenVIndex, setIndex[SIZE]={}; 
   char answear;
   string tempStr;

   // Instantiating & Save instances in vector objects
   countries[0] = Country("México", "Ciudad De México", "América", "Español", "Pesos", 126014024);
   countries[1] = Country("Japan", "Tokyo", "Asia", "Japones", "Yen", 127368088);
   sortCountryByAlphabet(countries);
   clear();

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
      clear();

      // Check how many countries are there?
      len = lenV(countries);

      // Add Country
      if (digitMenu==1) {
         if (len<SIZE) {
            cout<<"\n# Alta de país";
            cout<<"\nNombre del país: ";
            cin.ignore(); getline(cin, tempStr);

            if (!checkIfCountryIsInV(countries, tempStr, len)) {
               countries[len].getAttributes(tempStr);
               sortCountryByAlphabet(countries);
            } else {
               clear();
               cout<<"\n[!] El nombre ingresado ya está includo en el registro\n";
            }
         } else {
            cout<<"\n[!] Se han registrado "<<SIZE<<" países, ya no es posible seguir con está opción\n";
         }
      }

      // Again, count how many countries there are in case there are new ones.
      len = lenV(countries);

      if (len!=0) {
         // Edit Country
         if (digitMenu==2) {
            cout<<"\n# Modificación de alguna característica del país";
            cout<<"\nIngrese el nombre del país: ";
            cin.ignore(); getline(cin, tempStr);

            if (checkIfCountryIsInV(countries, tempStr, len)) {
               index = getIndexCountryIsInV(countries, tempStr, len);

               do {
                  clear();
                  // Secondary menu
                  cout<<"SubMenú ["<<tempStr<<"]:\n";
                  cout<<"1. Capital\n";
                  cout<<"2. Continente\n";
                  cout<<"3. Idioma\n";
                  cout<<"4. Moneda\n";
                  cout<<"5. Población\n";
                  cout<<"6. Salir\n";

                  cout<<"\nDigite el número de opción: ";
                  cin>>digitSubMenu;

                  if (digitSubMenu>0 && digitSubMenu<6) {
                     switch (digitSubMenu){
                     case 1:
                        cout<<"Ingrese el nuevo nombre de la capital: ";
                        cin.ignore(); getline(cin, tempStr);
                        countries[index].setCapital(tempStr);
                        cout<<"Se ha modificado la capital\n";
                        break;
                     case 2:
                        cout<<"Ingrese el nuevo nombre del continente: ";
                        cin.ignore(); getline(cin, tempStr);
                        countries[index].setContinent(tempStr);
                        cout<<"Se ha modificado el continente\n";
                        break;
                     case 3:
                        cout<<"Ingrese el nuevo nombre del idioma: ";
                        cin.ignore(); getline(cin, tempStr);
                        countries[index].setLanguage(tempStr);
                        cout<<"Se ha modificado el idioma\n";
                        break;
                     case 4:
                        cout<<"Ingrese el nuevo tipo de moneda: ";
                        cin.ignore(); getline(cin, tempStr);
                        countries[index].setCurrency(tempStr);
                        cout<<"Se ha modificado la moneda\n";
                        break;
                     default:
                        cout<<"Ingrese el nuevo total de la población: ";
                        cin>>tempInt;
                        countries[index].setPopulation(tempInt);
                        cout<<"Se ha modificado la población\n";
                        break;
                     }
                  } else {
                     cout<<"[!] Número fuera del rango, vuelva a intentarlo\n";
                  }
               } while (!(digitSubMenu==6));
               clear();

            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n";
            }
         }

         // Remove Country
         if (digitMenu==3) {
            cout<<"\n# Eliminación de país";
            cout<<"\nIngrese el nombre del país: ";
            cin.ignore(); getline(cin, tempStr);

            if (checkIfCountryIsInV(countries, tempStr, len)) {
               index = getIndexCountryIsInV(countries, tempStr, len);
               countries[index].resetData();
               removeCountryIsInV(countries, len);
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n";
            }
         }

         // Specific Country
         if (digitMenu==4) {
            cout<<"\n# Consulta específica de algún país";
            cout<<"\nIngrese el nombre del país: ";
            cin.ignore(); getline(cin, tempStr);

            if (checkIfCountryIsInV(countries, tempStr, len)) {
               index = getIndexCountryIsInV(countries, tempStr, len);
               countries[index].showCountryData();
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n";
            }
         }

         // Countries of the same continent
         if (digitMenu==5) {
            cout<<"\n# Consulta de los países de algún continente";
            cout<<"\nIngrese el nombre del continente: ";
            cin.ignore(); getline(cin, tempStr);

            if (checkIfContinentIsInV(countries, tempStr, len)) {
               lenVIndex = getSetIndexContinentIsInV(countries, setIndex, tempStr, len);
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
            cin.ignore(); getline(cin, tempStr);

            if (checkIfCurrencyIsInV(countries, tempStr, len)) {
               lenVIndex = getSetIndexCurrencyIsInV(countries, setIndex, tempStr, len);
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
            cin.ignore(); getline(cin, tempStr);

            if (checkIfLanguageIsInV(countries, tempStr, len)) {
               lenVIndex = getSetIndexLanguageIsInV(countries, setIndex, tempStr, len);
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

      if (digitMenu<0 || digitMenu>8) {
         clear();
         cout<<"[!] Número fuera del rango, vuelva a intentarlo\n";
      }
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
