// Brayan Mej�a Mora
// Escribe un programa que imprima las tablas de multiplicar del 1 al 10. Usa dos ciclos para (for) anidados.
// Entrada: --
// Salida: Mostrar la tabla de multiplicar del 1 al 10.

Algoritmo tableTheOneForTen
	Definir i, j Como Entero
	
	Escribir "Programa que imprime la tabla de multiplicar"
	
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Para j<-1 Hasta 10 Con Paso 1 Hacer
			Escribir i, "x", j, " = ", i*j
		Fin Para
		Escribir ""
	Fin Para
FinAlgoritmo
