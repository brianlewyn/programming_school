// Brayan Mejía Mora
// Realiza la prueba de escritorio del siguiente programa y muestra la salida del programa.

Algoritmo discover
	Definir row, col Como Entero
	row <- 5
	
	Mientras row>=1 Hacer
		col <- 1
		
		Mientras col<=5 Hacer
			Si row%2 = 0 Entonces
				Escribir "<" Sin Saltar
			SiNo
				Escribir ">" Sin Saltar
			FinSi
			
			col <- col + 1
		FinMientras
		
		row <- row - 1
		Escribir ""
	Fin Mientras
FinAlgoritmo
