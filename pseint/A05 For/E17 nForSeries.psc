// Brayan Mej�a Mora

// Escribe un programa que solicite al usuario un valor no negativo n (si introduce un valor negativo le volveremos 
// a pedir el numero hasta que introduzca uno positivo (usa do...while para esta validaci�n), y visualice la siguiente salida:
// Nota: Es un ciclo for dentro de otro ciclo for.
// Suponiendo que n vale 6.

// 123456
// 12345
// 1234
// 123
// 12
// 1

// Entrada: un n�mero no negativo
// Salida: del valor ingresado, obtener una serie de numeros

Algoritmo nForSeries
	Definir num, i, j Como Entero
	
	Escribir "Programa que muestra una serie de n�meros a partir de un n�mero le�do desde teclado"
	
	Repetir
		Escribir "Introduce un n�mero positivo: "
		Leer num
	Hasta Que num>=0
	
	Para i<-num Hasta 1 Con Paso -1 Hacer
		Para j<-1 Hasta i Con Paso 1 Hacer
			Escribir j Sin Saltar
		Fin Para
		Escribir ""
	Fin Para
FinAlgoritmo









