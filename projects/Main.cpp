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
         AddCountry(countries, lenCounstries);

         // One was added. Again, check how many countries are there?
         lenCounstries = lenArray(countries);

      } else if (lenCounstries!=0) {
         switch (digit) {
         case 2:
            EditCountry(countries, lenCounstries);
            break;
         case 3:
            RemoveCountry(countries, lenCounstries);
            break;
         case 4:
            SpecificCountry(countries, lenCounstries);
            break;
         case 5:
            // Countries of the same continent
            CountriesSameContinent(countries, lenCounstries);
            break;
         case 6:
            // Countries with the same type of lenguage
            CountriesSameLenguage(countries, lenCounstries);
            break;
         case 7:
            // Countries with the same type of currency
            CountriesSameCurrency(countries, lenCounstries);
            break;
         case 8:
            // Show all objects were saved
            ShowAllCountries(countries, lenCounstries);
            break;
         case 9:
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
   } while (digit!=9);

   clear();
   return 0;
}
