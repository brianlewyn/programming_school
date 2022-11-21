#include <iostream>
#include "FuncsForMain.h"
using namespace std;

int main() {
   Country countries[SIZE];
   string message, tempStr, tempStr2;
   int i, tempInt, digitMenu, digitSubMenu;
   int indexCountry, lenCounstries, lenIndices, indices[SIZE]={};

   clear();
   do {
      showMainMenu();

      message = "Digite el número de opción: ";
      requestInt(message, digitMenu);
      clear();

      // Check how many countries are there?
      lenCounstries = lenArray(countries);

      // Add Country
      if (digitMenu==1) {
         if (lenCounstries<SIZE) {
            cout<<"# Alta de país\n";
            message = "Nombre del país: ";
            requestStr(message, tempStr);

            if (!checkIfOptionInArray(countries, NAME, tempStr, lenCounstries)) {
               countries[lenCounstries].getData(tempStr);
               sortCountriesByAlphabet(countries, lenCounstries+1);
               clear();
               cout<<"[+] El país se ha dado de alta en el registro\n\n";
            } else {
               clear();
               cout<<"[!] El nombre ya está includo en el registro\n\n";
            }
         } else {
            cout<<"[!] Se han registrado "<<SIZE<<" países, ya no es posible continuar con está opción\n\n";
         }
      }

      // Again, count how many countries there are in case there are new ones.
      lenCounstries = lenArray(countries);

      if (lenCounstries!=0) {

         // Edit Country
         if (digitMenu==2) {
            cout<<"# Modificación de alguna característica del país\n";
            message = "Ingrese el nombre del país: ";
            requestStr(message, tempStr);
            clear();

            if (checkIfOptionInArray(countries, NAME, tempStr, lenCounstries)) {
               indexCountry = getIndexOfCountryInArray(countries, tempStr, lenCounstries);

               do {
                  showSubMenu(tempStr);

                  message = "Digite el número de opción: ";
                  requestInt(message, digitSubMenu);
                  clear();

                  switch (digitSubMenu){
                  case 1:
                     message = "Ingrese el nuevo nombre de la capital:\n";
                     requestStr(message, tempStr2);
                     countries[indexCountry].setCapital(tempStr2);
                     clear();
                     cout<<"[+] Se ha modificado la capital\n\n";
                     break;
                  case 2:
                     message = "Ingrese el nuevo nombre del continente:\n";
                     requestStr(message, tempStr2);
                     countries[indexCountry].setContinent(tempStr2);
                     clear();
                     cout<<"[+] Se ha modificado el continente\n\n";
                     break;
                  case 3:
                     message = "Ingrese el nuevo nombre del idioma:\n";
                     requestStr(message, tempStr2);
                     countries[indexCountry].setLanguage(tempStr2);
                     clear();
                     message = "[+] Se ha modificado el idioma\n\n";
                     break;
                  case 4:
                     message = "Ingrese el nuevo nombre del tipo de moneda:\n";
                     requestStr(message, tempStr2);
                     countries[indexCountry].setCurrency(tempStr2);
                     clear();
                     cout<<"[+] Se ha modificado la moneda\n\n";
                     break;
                  case 5:
                     message = "Ingrese el nuevo número de población:\n";
                     requestInt(message, tempInt);
                     countries[indexCountry].setPopulation(tempInt);
                     clear();
                     cout<<"[+] Se ha modificado la población\n\n";
                     break;
                  default:
                     cout<<"[!] Número fuera del rango, vuelva a intentarlo\n\n";
                     break;
                  }
               } while (digitSubMenu!=6);
               clear();

            } else {
               cout<<"[!] El nombre no está en el registro\n\n";
            }
         }

         // Remove Country
         if (digitMenu==3) {
            cout<<"# Eliminación de país\n";
            message = "Ingrese el nombre del país: ";
            requestStr(message, tempStr);
            clear();

            if (checkIfOptionInArray(countries, NAME, tempStr, lenCounstries)) {
               indexCountry = getIndexOfCountryInArray(countries, tempStr, lenCounstries);
               countries[indexCountry].resetData();
               removeCountryInArray(countries, lenCounstries);
               cout<<"[+] País eliminado del registro\n\n";
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n\n";
            }
         }

         // Specific Country
         if (digitMenu==4) {
            cout<<"# Consulta específica de algún país\n";
            message = "Ingrese el nombre del país: ";
            requestStr(message, tempStr);
            clear();

            if (checkIfOptionInArray(countries, NAME, tempStr, lenCounstries)) {
               indexCountry = getIndexOfCountryInArray(countries, tempStr, lenCounstries);
               countries[indexCountry].showData();
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n\n";
            }
         }

         // Countries of the same continent
         if (digitMenu==5) {
            cout<<"# Consulta de los países de algún continente\n";
            message = "Ingrese el nombre del continente: ";
            requestStr(message, tempStr);
            clear();

            if (checkIfOptionInArray(countries, CONTINENT, tempStr, lenCounstries)) {
               lenIndices = getIndicesOfOptionInArray(countries, indices, CONTINENT, tempStr, lenCounstries);
               for (i=0; i<lenIndices; i++) {
                  countries[indices[i]].showData();
               }
            } else {
               cout<<"[!] El nombre ingresado, no está en el registro\n\n";
            }
         }

         // Countries with the same type of currency
         if (digitMenu==6) {
            cout<<"# Consulta de los países de algún tipo de moneda\n";
            message = "Ingrese el tipo de moneda: ";
            requestStr(message, tempStr);
            clear();

            if (checkIfOptionInArray(countries, CURRENCY, tempStr, lenCounstries)) {
               lenIndices = getIndicesOfOptionInArray(countries, indices, CURRENCY, tempStr, lenCounstries);
               for (i=0; i<lenIndices; i++) {
                  countries[indices[i]].showData();
               }
            } else {
               cout<<"[!] El tipo ingresado, no está en el registro\n\n";
            }
         }

         // Countries with the same type of lenguage
         if (digitMenu==7) {
            cout<<"# Consulta de los países de algún tipo de idioma\n";
            message = "Ingrese el tipo de idioma: ";
            requestStr(message, tempStr);
            clear();

            if (checkIfOptionInArray(countries, LANGUAGE, tempStr, lenCounstries)) {
               lenIndices = getIndicesOfOptionInArray(countries, indices, LANGUAGE, tempStr, lenCounstries);
               for (i=0; i<lenIndices; i++) {
                  countries[indices[i]].showData();
               }
            } else {
               cout<<"[!] El tipo ingresado, no está en el registro\n\n";
            }
         }

         // Show all objects were saved
         if (digitMenu==8) {
            cout<<"# Mostrar todos los registros\n\n";
            for (i=0; i<lenCounstries; i++) {
               countries[i].showData();
            }
         }
      } else {
         cout<<"[!] No hay registros\n\n";
      }

      if (digitMenu<1 || 9<digitMenu) {
         clear();
         cout<<"[!] Número fuera del rango, vuelva a intentarlo\n\n";
      }
   } while (digitMenu!=9);

   clear();
   return 0;
}
