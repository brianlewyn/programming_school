#ifndef FuncsToVerifyData_H
#define FuncsToVerifyData_H
#include <iostream>
#include "Country.h"
using namespace std;

// Funcs to verify that the data is correct
int lenStr(string);
bool checkAsNumber(string);
int intRequest(string);

// Length of a string
int lenStr(string temp) {
   int len;
   for (len=0; temp[len]!='\0'; len++){}
   return len;
}

// Check that the answer is a number
bool checkAsNumber(string temp) {
   bool answer=true;
   for (int i=0; i<lenStr(temp); i++) {
      if (!(48<=temp[i] && temp[i]<=57)) {
         answer = false;
      }
   }
   return answer;
}

// Prompt until user responds with an integer
int intRequest(string message) {
   int answer;
   string temp;
   do {
      cout<<message;
      getline(cin, temp);

      if (checkAsNumber(temp)) {
         answer = stoi(temp);
      } else {
         cout<<"\n[!] Debe ser un número entero\n";
      }
   } while(!checkAsNumber(temp));
   return answer;
}
#endif
