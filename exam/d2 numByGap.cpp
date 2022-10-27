#include <iostream>
using namespace std;

float calQuotient(int a, int b);
float calResidue(int a, int b);
void viewMultByGap(float quotient, float residue);

int main() {
   int a, b;
   float quotient, residue;

   cout<<"Programa que calcula en cociente y el residuo de dos números, luego los multiplica y lo muestra por espacios\n\n";

   cout<<"Digite el valor de a: "; cin>>a;
   cout<<"Digite el valor de b: "; cin>>b;

   quotient = calQuotient(a, b);
   residue = calResidue(a, b);

   if (quotient!=0 || residue!=0) {
      viewMultByGap(quotient, residue);
   } else {
      cout<<"Error";
   }

   cout<<endl<<endl;
   return 0;
}

float calQuotient(int a, int b) {
   float quotient=0;
   if (b != 0) {
      quotient = a/b; 
   }
   return quotient;
}

float calResidue(int a, int b) {
   float redidue=0;
   if (b != 0) {
      redidue = a%b; 
   }
   return redidue;
}

void viewMultByGap(float quotient, float residue) {
   int mult = quotient * residue;
   int num, unit=1, n=0;

	num = mult;
	while (num>0) {
		num /= 10;
		unit *= 10;
	}
	unit /= 10;

	num = mult;
	while (num>0) {
		n = num/unit; 
		cout<<n<<" ";
		num -= n*unit;
		unit /= 10;
	}

   return; 
}
