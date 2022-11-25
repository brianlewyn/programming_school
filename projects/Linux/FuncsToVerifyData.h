#ifndef FuncsToVerifyData_H
#define FuncsToVerifyData_H
#include "Country.h"
#include <iostream>
#include <cctype>
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

// NO ASCII for Linux: vowels with accent & ñ
const int SPECIAL[13] = {
   -61, // NO ASCII?
   -127, -119, -115, -109, -102, -111, // ÁÉÍÓÚÑ
   -95, -87, -83, -77, -70, -79 // áéíóúñ
};

// ASCII: vowels & n
const int VOWEL[12] = {
   65, 69, 73, 79, 85, 78, // AEIOUN
   97, 101, 105, 111, 117, 110 // aeioun
};

// Accented capital vowels & ñ
const string ACCENT[6] = {
   "Á", "É", "Í", "Ó", "Ú", "Ñ"
};

// Funcs Prototype
// Funcs to show continents
void showContinents();

// Funcs to verify that the data is correct
int lenStr(string);
void trim(string&);
void toFirstCapitalLetter(string&);
bool checkAsNum(string);
bool checkAsStr(string);
void request(string, short &);
void request(string, long &);
void request(string, string &);
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

// Capitalize the first letter of a sentence
void toFirstCapitalLetter(string &temp) {
   string aux = temp;

   if (97<=temp[0] && temp[0]<=122) {
      aux[0] = toupper(aux[0]);

   } else if (temp[0] == SPECIAL[0]) {
      for (int i=7; i<=12; i++) {
         if (temp[1] == SPECIAL[i]) {
            aux[0] = ' ';
            aux[1] = ' ';
            trim(aux);
            aux = ACCENT[i-7] + aux;
         }
      }
   }

   temp = aux;
}

// Check that the answer is an integer
bool checkAsNum(string temp) {
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

         // ASCII
         abc = l==32; // Blankspace
         abc = abc || (65<=l && l<=90);  // Uppercase alphabet
         abc = abc || (97<=l && l<=122); // Lowercase alphabet

         // NO ASCII for Linux
         // Vowel with accents & ñ
         for (int j=0; j<=12; j++) {
            abc = abc || l==SPECIAL[j];
         }

         if (!abc)
            answer = false;
      }
      return answer;
   }
   return false;
}

// Prompt until user responds with one or two digit integer
void request(string message, short &answer) {
   string temp;
   bool flag, cond1, cond2;

   do {
      cout<<message;
      getline(cin, temp);
      trim(temp);

      flag = false;
      cond1 = checkAsNum(temp);
      cond2 = lenStr(temp)<=2;

      if (!cond1) {
         cout<<"\n[!] Debe ser un entero positivo\n";
         flag = true;

      } else if (!cond2) {
         cout<<"\n[!] Número fuera del rango\n";
         flag = true;

      } else if (cond1 && cond2) {
         if (stoi(temp)==0 || 10<stoi(temp)) {
            cout<<"\n[!] Número fuera del rango\n";
            flag = true;
         }
      }
   } while(flag);

   answer = stoi(temp);
}

// Prompt until user responds with an integer
void request(string message, long &answer) {
   string temp;
   bool flag, cond1, cond2;

   do {
      cout<<message;
      getline(cin, temp);
      trim(temp);

      flag = false;
      cond1 = checkAsNum(temp);
      cond2 = lenStr(temp)<=18;

      if (!cond1) {
         cout<<"\n[!] Debe ser un entero positivo\n";
         flag = true;

      } else if (!cond2) {
         cout<<"\n[!] El número máximo es de 18 digitos\n";
         flag = true;
      }
   } while(flag);

   answer = stol(temp);
}

// Prompt until user responds with a name using letters of the alphabet
void request(string message, string &answer) {
   string temp;
   int length;
   bool flag, cond1, cond2;

   do {
      cout<<message;
      getline(cin, temp);
      trim(temp);

      flag = false;
      length = lenStr(temp);
      cond1 = checkAsStr(temp);
      cond2 = length<=60;

      if (!cond1 || (length==1 && temp==" ")) {
         cout<<"\n[!] Solo se admiten nombres usando el alfabeto\n";
         flag = true;

      } else if (!cond2) {
         cout<<"\n[!] Solo se admiten como máximo 60 caracters\n";
         flag = true;
      }
   } while(flag);

   // temp[0] = toupper(temp[0]);
   toFirstCapitalLetter(temp);
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
      cond1 = checkAsNum(temp);
      cond2 = lenStr(temp)<9;

      if (!cond1) {
         cout<<"\n[!] Debe ser un entero positivo\n";
         flag=true;
      } else if (!cond2) {
         cout<<"\n[!] Número fuera del rango\n";
         flag = true;
      } else if (cond1 && cond2) {
         if (stoi(temp)==0 || 6<stoi(temp)) {
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

         if (i!=len-1) {
            temp += ',';
            cont++;
         }
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
