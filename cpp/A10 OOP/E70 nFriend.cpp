/*
Se quiere desarrollar un programa que determine si dos números son amigos.
Dos números enteros positivos se consideran amigos si la suma de los divisores
de uno es igual al otro número y viceversa. Por ejemplo, los números 220 y 284
son amigos. Los divisores del número 220 son: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55
y 110, y suman 284. Los divisores de 284 son: 1, 2, 4, 71 y 142, que suman 220.
Dylan Said Juan Ventura  12/11/2022 NFriend.cpp */

#include <iostream>
using namespace std;

class NFriend {
private:
  int n1, n2;

public:
  NFriend();
  void setN1(int);
  void setN2(int);
  int getN1();
  int getN2();
  void showData();
};

NFriend::NFriend() {
  this->n1 = 0;
  this->n2 = 0;
}

void NFriend::setN1(int _n1) { this->n1 = _n1; }
void NFriend::setN2(int _n2) { this->n2 = _n2; }

int NFriend::getN1() { return n1; }
int NFriend::getN2() { return n2; }

void NFriend::showData() {
  int sum = 0;
  cout << n1 << ": [ ";
  for (int i = 1; i <= n1 / 2; i++) {
    if (n1 % i == 0) {
      cout << i << " ";
      sum += i;
    }
  }
  cout << "] = " << sum << endl;

  sum = 0;
  cout << n2 << ": [ ";
  for (int i = 1; i <= n2 / 2; i++) {
    if (n2 % i == 0) {
      cout << i << " ";
      sum += i;
    }
  }
  cout << "] = " << sum << endl;
}

bool ifFriends(int num1, int num2);

// int main() {
//   NFriend case1;
//   int temp;

//   cout << "Programa que determina si dos numeros son amigos. ";
//   cout << "Lo serán si la suma de los divisores de uno de los ";
//   cout << "numeros es igual al otro número, y viceversa. \n\n";

//   cout << "Ingresa el primer numero:\n";
//   cin >> temp;
//   case1.setN1(temp);

//   cout << "Ingresa el segundo numero:\n";
//   cin >> temp;
//   case1.setN2(temp);

//   if (ifFriends(case1.getN1(), case1.getN2())) {
//     cout << "\nLos numeros si son amigos\n";
//     case1.showData();
//   } else {
//     cout << "\nLos numeros no son amigos\n";
//     case1.showData();
//   }

//   return 0;
// }

bool ifFriends(int num1, int num2) {
  bool answer;

  int sum = 0;
  for (int i = 1; i <= num1 / 2; i++) {
    if (num1 % i == 0) {
      sum += i;
    }
  }
  answer = num2 == sum;

  sum = 0;
  for (int i = 1; i <= num2 / 2; i++) {
    if (num2 % i == 0) {
      sum += i;
    }
  }
  answer = answer && num1 == sum;

  return answer;
}