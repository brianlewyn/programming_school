#include <iostream>
using namespace std;

int main() {
	int num, answer;
	bool flag=true;

	cout<<"Programa que lee un número y te pide los valores de su tabla de\n";
	cout<<"múltiplicar del 1 al 10. Nota: Si introduces un valor incorrecto,\n";
	cout<<"te volverá a pregunar hasta que esté correcto\n\n";

	cout<<"Ingresa un número: ";
	cin>>num;

	for (int i=1; i<=10; i++) {
		do {
			cout<<num<<" x "<<i<<" = ";
			cin>>answer;

			if (answer != num*i) {
				cout<<"\nEl valor es incorrecto, vuelve a ingresarlo\n";
				flag = false;
			} else {
            flag = true;
         }
		} while (!flag);
		flag = true;
	}
   return 0;
}