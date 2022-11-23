#include "Components.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
   setlocale(LC_ALL, "Spanish");
   SetConsoleCP(1252);  // Input: Spanish 
   SetConsoleOutputCP(1252); // Output: Spanish

   Country countries[SZ];
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
            CountriesSameContinent(countries, lenCounstries);
            break;
         case 6:
            CountriesSameLenguage(countries, lenCounstries);
            break;
         case 7:
            CountriesSameCurrency(countries, lenCounstries);
            break;
         case 8:
            ShowAllCountriesSaved(countries, lenCounstries);
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
