// Brayan Mejía Mora

// Escribe los primeros 200 elementos de la serie 7, 11, 15, 19, ?
// Entrada: --
// Salida: los primeros 200 números de la serie 7, 11, 15, ...

Algoritmo num200
	Definir n, cont Como Entero
	
	Escribir "Programa que imprime los primeros 200 elementos de la serie 7, 11, 15, 19, ,.."
	
	n <- 7
	cont <- 0
	
	Mientras cont <= 200 Hacer
		n <- n + 4
		Escribir n
		cont <- cont + 1
	Fin Mientras
FinAlgoritmo
