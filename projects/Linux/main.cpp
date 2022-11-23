#include "Components.h"
#include <iostream>
using namespace std;

int main() {
   Country countries[SIZE];
   string message;
   int lenCounstries;
   short digit;

   clear();
   do {
      showMenu();
      message = "Digite el número de opción: ";
      requestInt(message, digit);
      clear();

      // Check how many countries are there?
      lenCounstries = lenArray(countries);

      // Add Country
      if (digit==1) {
         do {
            AddCountry(countries, lenCounstries);

            // One was added. Again, check how many countries are there?
            lenCounstries = lenArray(countries);
         } while (continueAction(lenCounstries, ADD));

      } else if (lenCounstries!=0) {
         switch (digit) {
         case 2:
            do {
               EditCountry(countries, lenCounstries);
            } while (continueAction());
            break;
         case 3:
            do {
               DeleteCountry(countries, lenCounstries);

               // One was deleted. Again, check how many countries are there?
               lenCounstries = lenArray(countries);
            } while (continueAction(lenCounstries, DELETE));
            break;
         case 4:
            do {
               SpecificCountry(countries, lenCounstries);
            } while (continueAction());
            break;
         case 5:
            do {
               CountriesSameContinent(countries, lenCounstries);
            } while (continueAction());
            break;
         case 6:
            do {
               CountriesSameLenguage(countries, lenCounstries);
            } while (continueAction());
            break;
         case 7:
            do {
               CountriesSameCurrency(countries, lenCounstries);
            } while (continueAction());
            break;
         case 8:
            ShowAllCountriesSaved(countries, lenCounstries);
            break;
         case 9:
            clear();
            break;
         case 10:
            // Get out of the loop
            break;
         default:
            clear();
            cout<<"[!] Número fuera del rango, vuelva a intentarlo\n\n";
            break;
         }
      } else {
         cout<<"[!] No hay registros\n\n";
      }
   } while (digit!=10);

   clear();
   return 0;
}
