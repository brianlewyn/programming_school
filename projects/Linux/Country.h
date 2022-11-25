#ifndef Country_H
#define Country_H
#include <iostream>
using namespace std;

class Country {
   private:
      string name, capital, continent, language, currency;
      long population;

   public:
      // Default
      Country();

      // Constructor
      Country(string, string, string, string, string, long);

      // Methods for data
      void getData(string);
      void showData();
      void resetData();

      // Set methods
      void setName(string);
      void setCapital(string);
      void setContinent(string);
      void setLanguage(string);
      void setCurrency(string);
      void setPopulation(long);

      // Get methods
      string getName();
      string getCapital();
      string getContinent();
      string getLanguage();
      string getCurrency();
      long getPopulation();
};

#endif
