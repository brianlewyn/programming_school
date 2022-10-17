/* Brayan Mejía Mora

Realiza un programa que cree dos matrices de tipo entero de 3 x 3, posteriormente vaya leyendo los números desde teclado, los números pares los deberás ir guardando en la matriz 1 y los números impares en la matriz 2.

Debes estar leyendo los números, en caso que el usuario introduzca sólo números pares y ya esté llena la matriz deberás enviar un mensaje “Matriz de números pares llena, favor de introducir números impares”. Lo mismo para los números impares.

Posteriormente deberás mostrar por pantalla las dos matrices, indicando las posiciones y el valor que ha sido almacenado.

Entrada: 9 números pares y 9 números impares 
Salida: matrices de números pares e impares
*/

#include <iostream>
using namespace std;

const int n=3;

int main () {
	int aux, contEven=0, contOdd=0, even[n][n], odd[n][n];  
	bool flagEven=true, flagOdd=true;

	cout<<"Programa que guarda números pares en una matriz e impares en otra\n\n"; 

	do{
      cout<<"Digite un número: "; cin>>aux; 

		// Almacenar el número en la matriz idonea
		if (aux%2==0) {
			if(contEven<3) {
				even[0][contEven] = aux;
			} else if(contEven>=3 && contEven<6) {
				even[1][contEven-3] = aux;
			} else if(contEven>=6 && contEven<9) {
				even[2][contEven-6] = aux;
			}
			contEven++;
		} else {
			if (contOdd<3) {
				odd[0][contOdd] = aux;
			} else if(contOdd>=3 && contOdd<6) {
				odd[1][contOdd-3] = aux;
			} else if(contOdd>=6 && contOdd<9) {
				odd[2][contOdd-6] = aux;
			}
			contOdd++;
		}

		// Comprobar si alguna de las matrices ya se lleno
		if (flagEven||flagOdd) {
			if (contEven>=9) {
				cout<<"la matriz de pares está llena" << endl;
				flagEven=false; 
			}
			if (contOdd>=9) {
				cout<<"la matriz de impares está llena" << endl;
				flagOdd=false; 
			}
		}
	} while(!(flagEven==false && flagOdd==false));

	// Mostrar las matrices pares
	cout<<"\nMatriz de números pares\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout<<"("<<i<<","<<j<<"): " <<even[i][j]<<" "; 
		}
		cout<<endl;
	}

	// Mostrar las matrices impares
	cout<<"\nMatriz de números impares\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout<<"("<<i<<","<<j<<"): " <<odd[i][j]<<" "; 
		}
		cout<<endl;
	}

	return 0;
}

/*
Programa que guarda números pares en una matriz e impares en otra

Digite un número: 2
Digite un número: 4
Digite un número: 6
// funciones1.cpp hecho por: Verónica Orozco
#include&lt;iostream&gt;
using namespace std;
int main (){
int i=1;
cout &lt;&lt; &quot; Ejemplo 1 &quot;;
while (i&lt;=20){
cout&lt;&lt;&quot;-&quot;;
i++;
}
cout&lt;&lt;endl&lt;&lt;endl;
i=1;
cout &lt;&lt; &quot; Ejemplo 2 &quot;;
while (i&lt;=20){
cout&lt;&lt;&quot;-&quot;;
i++;
}
cout&lt;&lt;endl&lt;&lt;endl;
i=1;
cout &lt;&lt; &quot; Ejemplo 3 &quot;;
while (i&lt;=20){
cout&lt;&lt;&quot;-&quot;;
i++;
}
return 0;
}Digite un número: 8
Digite un número: 10
Digite un número: 11
Digite un número: 12
Digite un número: 14
Digite un número: 16
Digite un número: 18
la matriz de pares está llena
Digite un número: 20
la matriz de pares está llena
Digite un número: 22
la matriz de pares está llena
Digite un número: 3
la matriz de pares está llena
Digite un número: 6
la matriz de pares está llena
Digite un número: 5
la matriz de pares está llena
Digite un número: 7
la matriz de pares está llena
Digite un número: 9
la matriz de pares está llena
Digite un número: 11
la matriz de pares está llena
Digite un número: 13
la matriz de pares está llena
Digite un número: 15
la matriz de pares está llena
Digite un número: 17
la matriz de pares está llena
la matriz de impares está llena

Matriz de números pares
(0,0): 2 (0,1): 4 (0,2): 6 
(1,0): 8 (1,1): 10 (1,2): 12 
(2,0): 14 (2,1): 16 (2,2): 18 

Matriz de números impares
(0,0): 11 (0,1): 3 (0,2): 5 
(1,0): 7 (1,1): 9 (1,2): 11 
(2,0): 13 (2,1): 15 (2,2): 17
*/
