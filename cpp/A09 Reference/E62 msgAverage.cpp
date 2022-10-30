/* Brayan Mejía Mora

Desarrolle el código fuente de un programa que permita ingresar tres números reales leídos desde el programa principal. Hacer una función que reciba como parámetros los tres números leídos, deberá obtener su promedio y devolver “APROBADO”, si su promedio es mayor a 7, caso contrario devolverá “MEJORE LA NOTA”.
	• Poner en la prueba de escritorio los 2 casos (mayor a 7 y menor o igual a 7)

Entrada: 3 calificaciones
Salida:	mensaje de Aprobado o de que mejore la nota
*/

#include <iostream>
using namespace std;

string average(float n, float n2, float n3);

int main (){
	float n,n2,n3;

	cout<<"Programa que lee tres calificaciones y muestra Aprobado o que mejore la nota\n\n";

	cout<<"Ingrese su calificacion: "; cin>>n;
	cout<<"Ingrese su segunda calificacion: "; cin>>n2;
	cout<<"Ingrese su tercera calificacion: "; cin>>n3;

	cout<<average(n, n2, n3);

	cout<<endl<<endl;
	return 0;
}

string average(float n, float n2, float n3){
	if ((n+n2+n3)/3 > 7){
		return "APROBADO";
	}
	return "MEJORE LA NOTA";
}

/* Prueba de escritorio 1
Programa que lee tres calificaciones y muestra Aprobado o que mejore la nota

Ingrese su calificacion: 10
Ingrese su segunda calificacion: 8
Ingrese su tercera calificacion: 10
APROBADO
*/

/* Prueba de escritorio 2
Programa que lee tres calificaciones y muestra Aprobado o que mejore la nota

Ingrese su calificacion: 7
Ingrese su segunda calificacion: 7
Ingrese su tercera calificacion: 7
MEJORE LA NOTA
*/