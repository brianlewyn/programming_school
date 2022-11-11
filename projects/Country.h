// By brianlewyn
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
      void getAttributes(string);
      void showCountryData();
      void resetData();

      // set methods
      void setCapital(string);
      void setContinent(string);
      void setLanguage(string);
      void setCurrency(string);
      void setPopulation(int);

      // get methods
      string getName();
      string getCapital();
      string getContinent();
      string getLanguage();
      string getCurrency();
      int getPopulation();
};
