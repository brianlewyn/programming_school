#ifndef FuncsToVerifyData_H
#define FuncsToVerifyData_H
#include <iostream>
#include "Country.h"
using namespace std;

// Funcs to verify that the data is correct
int lenStr(string);
void trim(string&);
bool checkAsInt(string);
void requestInt(string, int&);
bool checkAsStr(string);
void requestStr(string, string&);
string formatNumber(int);

// Length of a string
int lenStr(string temp) {
   int len;
   for (len=0; temp[len]!='\0'; len++){}
   return len;
}

// Removes all leading and trailing blank space from the string.
void trim(string &temp) {
   string newStr="";
   int start=0, end=0, len=lenStr(temp);

   // Sentence Start
   for (int i=0; i<len; i++) {
      if (temp[i]!=' ') {
         start = i;
         break;
      }
   }

   // Sentence End
   for (int i=len-1; i>=0; i--) {
      if (temp[i]!=' ') {
         end = i;
         break;
      }
   }

   // Build Sentence
   for (int i=start; i<=end; i++) {
      newStr += temp[i];
   }
   temp = newStr;
}

// Check that the answer is an integer
bool checkAsInt(string temp) {
   bool answer=true;
   int len=lenStr(temp);

   if (len!=0) {
      for (int i=0; i<len; i++) {
         if (!(48<=temp[i] && temp[i]<=57)) {
            answer = false;
         }
      }
      return answer;
   }

   return false;
}

// Prompt until user responds with an integer
void requestInt(string message, int &answer) {
   string temp;
   bool flag;

   do {
      flag = false;
      cout<<message;
      getline(cin, temp);
      trim(temp);

      if (!checkAsInt(temp)) {
         cout<<"\n[!] Debe ser un número entero\n";
         flag = true;
      }
   } while(flag);

   answer = stoi(temp);
}

// Check that the answer is an string using letters of the alphabet
bool checkAsStr(string temp) {
   bool abc, answer=true;
   int l, len=lenStr(temp);

   if (len!=0) {
      for (int i=0; i<len; i++) {
         l = int(temp[i]);
         abc = l==32; // Blankspace ASCII
         abc = abc || (65<=l && l<=90);   // Uppercase alphabet ASCII
         abc = abc || (97<=l && l<=122);  // Lowercase alphabet ASCII
         abc = abc || l==-61; // NO ASCII
         abc = abc || l==-127 || l==-95; // Áá
         abc = abc || l==-119 || l==-87; // Éé
         abc = abc || l==-115 || l==-83; // Íí
         abc = abc || l==-109 || l==-77; // Óó
         abc = abc || l==-102 || l==-70; // Úú
         abc = abc || l==-111 || l==-79; // Ññ

         if (!abc) {
            answer = false;
         }
      }
      return answer;
   }
   return false;
}

// Prompt until user responds with a name using letters of the alphabet
void requestStr(string message, string &answer) {
   string temp;
   bool flag;

   do {
      flag = false;
      cout<<message;
      getline(cin, temp);
      trim(temp);

      if (!checkAsStr(temp)) {
         cout<<"\n[!] Solo se admiten nombres usando el alfabeto\n";
         flag = true;
      }
   } while(flag);

   answer = temp;
}

// Format a number with commas
string formatNumber(int number) {
   int len, cont=0;
   string reverse, temp=to_string(number);

   // Length
   for (len=0; temp[len]!='\0'; len++){}

   // Reverse number
   for (int i=len; i>=0; i--) {
      reverse += temp[i];
   }

   // Reverse number with format
   temp = "";
   for (int i=0; i<=len; i++) {
      if (i%3==0 && i!=0) {
         temp += reverse[i];
         if (i!=0 && i!=len) {
            temp += ",";
         }
         cont++;
      } else {
         temp += reverse[i];
      }
   }

   // Again, reverse number with format
   reverse = "";
   for (int i=len+cont; i>=0; i--) {
      reverse += temp[i];
   }

   return reverse;
}
#endif
