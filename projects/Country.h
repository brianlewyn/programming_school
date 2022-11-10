#include <iostream>
using namespace std;

class Country {
   private:
      string name, capital, continent, language, currency;
      int population;

   public:
      // Default
      Country() {}

      // Constructor
      Country(string, string, string, string, string, int);

      // Destroyer
      ~Country() {} // countries[index].~Country();

      // another methods
      void getAttributes(string nameCountry);
      void showCountryData();
      void resetData();

      // set methods
      void setCapital(string nameCapital);
      void setContinent(string nameCapital);
      void setLanguage(string nameCapital);
      void setCurrency(string nameCapital);
      void setPopulation(int numPopulation);

      // get methods
      string getName();
      string getCapital();
      string getContinent();
      string getLanguage();
      string getCurrency();
      int getPopulation();
};
