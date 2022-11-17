// By brianlewyn
#include <iostream>
#include <stdlib.h>
#include "Funcs.h"
using namespace std;

int main() {
   Country countries[SIZE];
   string tempStr, tempStr2;
   int tempInt, index, lenIndices, indices[SIZE]={}; 
   int len, digitMenu, digitSubMenu;

   clear();
   do {
      // Main menu
      cout<<"Menú [Países]:\n";
      cout<<"1. Alta de país\n";
      cout<<"2. Modificación de alguna característica del país\n";
      cout<<"3. Eliminación de país\n";
      cout<<"4. Consulta específica de algún país\n";
      cout<<"5. Consulta de los países de algún continente\n";
      cout<<"6. Consulta de los países de algún tipo de moneda\n";
      cout<<"7. Consulta de los países de algún tipo de idioma\n";
      cout<<"8. Mostrar todos los registros\n";
      cout<<"9. Salir\n\n";

      digitMenu = intRequest("Digite el número de opción: ");
      clear();

      // Check how many countries are there?
      len = lenArray(countries);

      // Add Country
      if (digitMenu==1) {
         if (len<SIZE) {
            cout<<"# Alta de país";
            cout<<"\nNombre del país: ";
            getline(cin, tempStr);

            if (!checkIfOptionInArray(countries, "Country", tempStr, len)) {
               countries[len].getAttributes(tempStr);
               sortCountryByAlphabet(countries);
               clear();
               cout<<"[!] El país, se ha dado de alta en el registro\n\n";
            } else {
               clear();
               cout<<"[!] El nombre ya está includo en el registro\n\n";
            }
         } else {
            cout<<"[!] Se han registrado "<<SIZE<<" países, ya no es posible continuar con está opción\n\n";
         }
      }

      // Again, count how many countries there are in case there are new ones.
      len = lenArray(countries);

      if (len!=0) {

         // Edit Country
         if (digitMenu==2) {
            cout<<"# Modificación de alguna característica del país\n";
            cout<<"Ingrese el nombre del país: ";
            getline(cin, tempStr); clear();

            if (checkIfOptionInArray(countries, "Country", tempStr, len)) {
               index = getIndexOfCountryInArray(countries, tempStr, len);

               do {
                  // Secondary menu
                  cout<<"SubMenú ["<<tempStr<<"]:\n";
                  cout<<"1. Capital\n";
                  cout<<"2. Continente\n";
                  cout<<"3. Idioma\n";
                  cout<<"4. Moneda\n";
                  cout<<"5. Población\n";
                  cout<<"6. Salir\n\n";

                  digitSubMenu = intRequest("Digite el número de opción: ");
                  clear();

                  if (digitSubMenu>0 && digitSubMenu<6) {
                     switch (digitSubMenu){
                     case 1:
                        cout<<"Ingrese el nuevo nombre de la capital:\n";
                        getline(cin, tempStr2);
                        countries[index].setCapital(tempStr2);
                        clear();
                        cout<<"Se ha modificado la capital\n\n";
                        break;
                     case 2:
                        cout<<"Ingrese el nuevo nombre del continente:\n";
                        getline(cin, tempStr2);
                        countries[index].setContinent(tempStr2);
                        clear();
                        cout<<"Se ha modificado el continente\n\n";
                        break;
                     case 3:
                        cout<<"Ingrese el nuevo nombre del idioma:\n";
                        getline(cin, tempStr2);
                        countries[index].setLanguage(tempStr2);
                        clear();
                        cout<<"Se ha modificado el idioma\n\n";
                        break;
                     case 4:
                        cout<<"Ingrese el nuevo tipo de moneda:\n";
                        getline(cin, tempStr2);
                        countries[index].setCurrency(tempStr2);
                        clear();
                        cout<<"Se ha modificado la moneda\n\n";
                        break;
                     default:
                        tempInt = intRequest("Ingrese el nuevo total de la población:\n");
                        countries[index].setPopulation(tempInt);
                        clear();
                        cout<<"Se ha modificado la población\n\n";
                        break;
                     }
                  } else {
                     cout<<"[!] Número fuera del rango, vuelva a intentarlo\n\n";
                  }
               } while (!(digitSubMenu==6));
               clear();

            } else {
               cout<<"[!] El nombre no está en el registro\n\n";
            }
         }

         // Remove Country
         if (digitMenu==3) {
            cout<<"# Eliminación de país\n";
            cout<<"Ingrese el nombre del país: ";
            getline(cin, tempStr); clear();

            if (checkIfOptionInArray(countries, "Country", tempStr, len)) {
               index = getIndexOfCountryInArray(countries, tempStr, len);
               countries[index].resetData();
               removeCountryInArray(countries, len);
               cout<<"País eliminado del registro\n\n";
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n\n";
            }
         }

         // Specific Country
         if (digitMenu==4) {
            cout<<"# Consulta específica de algún país\n";
            cout<<"Ingrese el nombre del país: ";
            getline(cin, tempStr); clear();

            if (checkIfOptionInArray(countries, "Country", tempStr, len)) {
               index = getIndexOfCountryInArray(countries, tempStr, len);
               countries[index].showCountryData();
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n\n";
            }
         }

         // Countries of the same continent
         if (digitMenu==5) {
            cout<<"# Consulta de los países de algún continente\n";
            cout<<"Ingrese el nombre del continente: ";
            getline(cin, tempStr); clear();

            if (checkIfOptionInArray(countries, "Continent", tempStr, len)) {
               lenIndices = getIndicesOfOptionInArray(countries, indices, "Continent", tempStr, len);
               for (int i=0; i<lenIndices; i++) {
                  countries[indices[i]].showCountryData();
               }
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n\n";
            }
         }

         // Countries with the same type of currency
         if (digitMenu==6) {
            cout<<"# Consulta de los países de algún tipo de moneda\n";
            cout<<"Ingrese el tipo de moneda: ";
            getline(cin, tempStr); clear();

            if (checkIfOptionInArray(countries, "Currency", tempStr, len)) {
               lenIndices = getIndicesOfOptionInArray(countries, indices, "Currency", tempStr, len);
               for (int i=0; i<lenIndices; i++) {
                  countries[indices[i]].showCountryData();
               }
            } else {
               cout<<"[!] El tipo ingresado, no está en el registro\n\n";
            }
         }

         // Countries with the same type of lenguage
         if (digitMenu==7) {
            cout<<"# Consulta de los países de algún tipo de idioma\n";
            cout<<"Ingrese el tipo de idioma: ";
            getline(cin, tempStr); clear();

            if (checkIfOptionInArray(countries, "Language", tempStr, len)) {
               lenIndices = getIndicesOfOptionInArray(countries, indices, "Language", tempStr, len);
               for (int i=0; i<lenIndices; i++) {
                  countries[indices[i]].showCountryData();
               }
            } else {
               cout<<"[!] El tipo ingresado, no está en el registro\n\n";
            }
         }

         // Show all objects were saved
         if (digitMenu==8) {
            cout<<"# Mostrar todos los registros\n\n";
            for (int i=0; i<SIZE; i++) {
               if (countries[i].getName() != "\0") {
                  countries[i].showCountryData();
               }
            }
         }
      } else {
         cout<<"[!] No hay registros\n\n";
      }

      if (digitMenu<0 || digitMenu>9) {
         clear();
         cout<<"[!] Número fuera del rango, vuelva a intentarlo\n\n";
      }
   } while (!(digitMenu==9));

   clear();
   return 0;
}
