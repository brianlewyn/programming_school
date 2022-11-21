#ifndef Country_H
#define Country_H
#include <iostream>
using namespace std;

class Country {
   private:
      string name, capital, continent, language, currency;
      int population;

   public:
      // Default
      Country();

      // Constructor
      Country(string, string, string, string, string, int);

      // Methods for data
      void getData(string);
      void showData();
      void resetData();

      // Set methods
      void setCapital(string);
      void setContinent(string);
      void setLanguage(string);
      void setCurrency(string);
      void setPopulation(int);

      // Get methods
      string getName();
      string getCapital();
      string getContinent();
      string getLanguage();
      string getCurrency();
      int getPopulation();
};
#endif
