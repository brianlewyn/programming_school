#ifndef Components_H
#define Components_H
#include "Functions.h"

// Funcs Prototype (components)
void AddCountry(Country, int);
void EditCountry(Country, int);
void RemoveCountry(Country, int);
void SpecificCountry(Country, int);
void CountriesSameContinent(Country, int);
void CountriesSameLenguage(Country, int);
void CountriesSameCurrency(Country, int);
void ShowAllCountriesSaved(Country, int);

void AddCountry(Country countries[SIZE], int len) {
   string message, name;
   if (len<SIZE) {
      cout<<"# Alta de país\n";
      message = "Nombre del país: ";
      requestStr(message, name);

      if (!checkIfTempInArray(countries, NAME, name, len)) {
         countries[len].getData(name);
         sortCountriesByAlphabet(countries, len+1);
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

void EditCountry(Country countries[SIZE], int len) {
   string message, name, temp;
   int indexCountry, indexContinent;
   short digit;
   long population;

   cout<<"# Modificación de alguna característica del país\n";
   message = "Ingrese el nombre del país: ";
   requestStr(message, name);
   clear();

   if (checkIfTempInArray(countries, NAME, name, len)) {
      indexCountry = getIndexOfCountryInArray(countries, name, len);

      do {
         showSubMenu(name);
         message = "Digite el número de opción: ";
         requestInt(message, digit);
         clear();

         switch (digit){
         case 1:
            message = "Ingrese el nuevo nombre de la capital:\n";
            requestStr(message, temp);
            countries[indexCountry].setCapital(temp);
            clear();
            cout<<"[+] Se ha modificado la capital\n\n";
            break;
         case 2:
            showContinents();
            message = "Digite el número de opción: ";
            requestIndexContinet(message, indexContinent);
            countries[indexCountry].setContinent(CONTINENTS[indexContinent]);
            clear();
            cout<<"[+] Se ha modificado el continente\n\n";
            break;
         case 3:
            message = "Ingrese el nuevo nombre del idioma:\n";
            requestStr(message, temp);
            countries[indexCountry].setLanguage(temp);
            clear();
            message = "[+] Se ha modificado el idioma\n\n";
            break;
         case 4:
            message = "Ingrese el nuevo nombre del tipo de moneda:\n";
            requestStr(message, temp);
            countries[indexCountry].setCurrency(temp);
            clear();
            cout<<"[+] Se ha modificado la moneda\n\n";
            break;
         case 5:
            message = "Ingrese el nuevo número de población:\n";
            requestInt(message, population);
            countries[indexCountry].setPopulation(population);
            clear();
            cout<<"[+] Se ha modificado la población\n\n";
            break;
         case 6:
            // Get out of the loop
            break;
         default:
            cout<<"[!] Número fuera del rango, vuelva a intentarlo\n\n";
            break;
         }
      } while (digit!=6);
      clear();

   } else {
      cout<<"[!] El nombre no está en el registro\n\n";
   }
}

void RemoveCountry(Country countries[SIZE], int len) {
   string message, name;
   int indexCountry;

   cout<<"# Eliminación de país\n";
   message = "Ingrese el nombre del país: ";
   requestStr(message, name);
   clear();

   if (checkIfTempInArray(countries, NAME, name, len)) {
      indexCountry = getIndexOfCountryInArray(countries, name, len);
      countries[indexCountry].resetData();
      removeCountryInArray(countries, len);
      cout<<"[+] País eliminado del registro\n\n";
   } else {
      cout<<"[!] El nombre ingresado, no está en el registro\n\n";
   }
}

void SpecificCountry(Country countries[SIZE], int len) {
   string message, name;
   int indexCountry;

   cout<<"# Consulta específica de algún país\n";
   message = "Ingrese el nombre del país: ";
   requestStr(message, name);
   clear();

   if (checkIfTempInArray(countries, NAME, name, len)) {
      indexCountry = getIndexOfCountryInArray(countries, name, len);
      countries[indexCountry].showData();
   } else {
      cout<<"[!] El nombre ingresado, no está en el registro\n\n";
   }
}

// Countries of the same continent
void CountriesSameContinent(Country countries[SIZE], int len) {
   string message;
   int index;

   cout<<"# Consulta de los países de algún continente\n";
   showContinents();
   message = "Ingrese el nombre del continente: ";
   requestIndexContinet(message, index);
   clear();

   if (checkIfTempInArray(countries, CONTINENT, CONTINENTS[index], len)) {
      showAllCoincidenceInArray(countries, CONTINENT, CONTINENTS[index], len);
   } else {
      cout<<"[!] No hay países registrados para tal continente\n\n";
   }
}

// Countries with the same type of lenguage
void CountriesSameLenguage(Country countries[SIZE], int len) {
   string message, lenguage;

   cout<<"# Consulta de los países de algún tipo de idioma\n";
   message = "Ingrese el tipo de idioma: ";
   requestStr(message, lenguage);
   clear();

   if (checkIfTempInArray(countries, LANGUAGE, lenguage, len)) {
      showAllCoincidenceInArray(countries, LANGUAGE, lenguage, len);
   } else {
      cout<<"[!] El tipo ingresado, no está en el registro\n\n";
   }
}

// Countries with the same type of currency
void CountriesSameCurrency(Country countries[SIZE], int len) {
   string message, currency;

   cout<<"# Consulta de los países de algún tipo de moneda\n";
   message = "Ingrese el tipo de moneda: ";
   requestStr(message, currency);
   clear();

   if (checkIfTempInArray(countries, CURRENCY, currency, len)) {
      showAllCoincidenceInArray(countries, CURRENCY, currency, len);
   } else {
      cout<<"[!] El tipo ingresado, no está en el registro\n\n";
   }
}

// Show all objects were saved
void ShowAllCountriesSaved(Country countries[SIZE], int len) {
   cout<<"# Mostrar todos los registros\n\n";
   for (int i=0; i<len; i++) {
      countries[i].showData();
   }
}

#endif
