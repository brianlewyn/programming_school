// Brayan Mej?a Mora
// Modifique el programa anterior de tal forma que imprima un cuadrado hueco. Por ejemplo, si su tama?o es 5, debe imprimir:
// *****
// *   *
// *   *
// *   *
// *****
// Entrada: un n?mero
// Salida: Imprimir el contorno del área de un cuadrado como asteriscos

Algoritmo borderSquare
	Definir l Como Entero
	
	Escribir "Programa que imprime el contorno del area de un cuadrado en forma de astericos a partir de un n?mero le?do desde teclado"
	
	Repetir
		Escribir "Introduce un lado entre 1 y 20: "
		Leer l
	Hasta Que l>=1 y l<=20
	
	Para i<-1 Hasta l Con Paso 1 Hacer
		Para j<-1 Hasta l Con Paso 1 Hacer
			Si i=1 o i=l Entonces
				Escribir "*" Sin Saltar
			SiNo
				Si j=1 o j=l Entonces
					Escribir "*" Sin Saltar
				SiNo
					Escribir " " Sin Saltar
				FinSi
			FinSi
		Fin Para
		
		Escribir ""
	Fin Para
FinAlgoritmo
