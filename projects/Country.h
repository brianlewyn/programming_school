#include <iostream>
using namespace std;

class Country {
   private:
      string name, capital, continent, language, currency;
      int population;

   public:
      // Default
      Country() {}

      // Specific builder
      Country(string _name, string _capital, string _continent, string _language, string _currency, int _population) {
         name = _name;
         capital = _capital;
         continent = _continent;
         language = _language;
         currency = _currency;
         population = _population;
      }

      // Destroyer
      ~Country() {} // countries[index].~Country();

      // another methods
      void getCountryData(string nameCountry);
      void showCountryData();
      void resetData();

      // set methods
      void setCapital();
      void setContinent();
      void setLanguage();
      void setCurrency();
      void setPopulation();

      // get methods
      string getName();
      string getCapital();
      string getContinent();
      string getLanguage();
      string getCurrency();
      int getPopulation();
};
