#ifndef _FuncsToVerifyData_H_
#define _FuncsToVerifyData_H_

#include <iostream>
#include "Country.h"
using namespace std;

// Funcs to verify that the data is correct
int lenStr(string temp);
bool checkAsNumber(string temp);
int intRequest(string ask);

// Length of a string
int lenStr(string temp) {
   int len;
   for (len=0; temp[len]!='\0'; len++);
   return len;
}

// Check that the answer is a number
bool checkAsNumber(string temp) {
   bool answer=false;
   for (int i=0; i<lenStr(temp); i++) {
      if (48<=temp[i] && temp[i]<=57) {
         answer = true;
      }
   }
   return answer;
}

// Prompt until user responds with an integer
int intRequest(string prompt) {
   int answer;
   string temp;
   do {
      cout<<prompt;
      getline(cin, temp);

      if (checkAsNumber(temp)) {
         answer = stoi(temp);
      } else {
         cout<<"\n[!] Debe ser número\n";
      }
   } while(!checkAsNumber(temp));
   return answer;
}
#endif