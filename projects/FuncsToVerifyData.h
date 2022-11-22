#ifndef FuncsToVerifyData_H
#define FuncsToVerifyData_H
#include "Country.h"
#include <iostream>
using namespace std;

// Array Continents
const string CONTINENTS[6] = {
   "América", 
   "Europa", 
   "Asia", 
   "África", 
   "Oceanía", 
   "La Antártida"
};

// Funcs Prototype
// Funcs to show continents
void showContinents();

// Funcs to verify that the data is correct
int lenStr(string);
void trim(string&);
bool checkAsInt(string);
bool checkAsStr(string);
void requestInt(string, short &);
void requestInt(string, long &);
void requestStr(string, string &);
void requestIndexContinet(string, int &);

// Func to format a number with commas
string formatNumber (long);

// Show continents
void showContinents() {
   cout<<"Contientes:";
   cout<<"\n1. "<<CONTINENTS[0];
   cout<<"\n2. "<<CONTINENTS[1];
   cout<<"\n3. "<<CONTINENTS[2];
   cout<<"\n4. "<<CONTINENTS[3];
   cout<<"\n5. "<<CONTINENTS[4];
   cout<<"\n6. "<<CONTINENTS[5];
   cout<<endl<<endl;
}

// Length of a string
int lenStr(string temp) {
   int len;
   for (len=0; temp[len]!='\0'; len++){}
   return len;
}

// Removes all leading and trailing blank space from the string.
void trim(string &temp) {
   string newStr="";
   int i, start=0, end=0, len=lenStr(temp);

   // Sentence Start
   for (i=0; i<len; i++) {
      if (temp[i]!=' ') {
         start = i;
         break;
      }
   }

   // Sentence End
   for (i=len-1; i>=0; i--) {
      if (temp[i]!=' ') {
         end = i;
         break;
      }
   }

   // Build Sentence
   for (i=start; i<=end; i++) {
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
         if (temp[i]<48 || 57<temp[i])
            answer = false;
      }
      return answer;
   }

   return false;
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

         if (!abc)
            answer = false;
      }
      return answer;
   }
   return false;
}

// Prompt until user responds with a one-digit integer
void requestInt(string message, short &answer) {
   string temp;
   bool flag;

   do {
      cout<<message;
      getline(cin, temp);
      trim(temp);

      flag = false;
      if (!checkAsInt(temp)){
         cout<<"\n[!] Debe ser un entero positivo\n";
         flag = true;
      }
   } while(flag);

   answer = stoi(temp);
}

// Prompt until user responds with an integer
void requestInt(string message, long &answer) {
   string temp;
   bool flag, cond1, cond2;

   do {
      cout<<message;
      getline(cin, temp);
      trim(temp);

      flag = false;
      cond1 = checkAsInt(temp);
      cond2 = 18<lenStr(temp);

      if (!cond1 || cond2) {
         flag = true;
         cout<<endl;

         if (!cond1)
            cout<<"[!] Debe ser un entero positivo\n";
         if (cond2)
            cout<<"[!] El número máximo es de 18 digitos\n";
      }
   } while(flag);

   answer = stol(temp);
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

// Prompt until user responds with an index of the continents in the array
void requestIndexContinet(string message, int &index) {
   string temp;
   bool flag, cond1, cond2;

   do {
      cout<<message;
      getline(cin, temp);
      trim(temp);

      flag = false;
      cond1 = checkAsInt(temp);
      cond2 = lenStr(temp)<9;

      if (!cond1) {
         flag=true;
         cout<<"\n[!] Debe ser un entero positivo\n";
      }
      if (cond1 && cond2) {
         if (stoi(temp) < 0 || 6 < stoi(temp)) {
            cout<<"\n[!] Número fuera del rango\n";
            flag = true;
         }
      }
   } while(flag);

   index = stoi(temp) - 1;
}

// Format a number with commas
string formatNumber(long number) {
   string reverse="", temp=to_string(number);
   int i, cont=0, len=lenStr(temp);

   // Reverse number
   for (i=len-1; i>=0; i--) {
      reverse += temp[i];
   }

   // Reverse number with format
   temp = "";
   for (i=0; i<len; i++) {
      if (i!=0 && (i+1)%3==0) {
         temp += reverse[i];

         if (i!=len-1)
            temp += ',';
         cont++;
      } else {
         temp += reverse[i];
      }
   }

   // Again, reverse number with format
   reverse = "";
   for (i=len+cont; i>=0; i--) {
      reverse += temp[i];
   }

   return reverse;
}

#endif
