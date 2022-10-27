// code.psc 		Brayan Mej?a Mora		19 Oct 2022

Algoritmo discoverNumber
	Definir num, n, discoverNum como Entero
	Definir x Como Real
	
	Escribir "Programa que lee un n?mero desde teclado para crear un juego de advinar el"
	Escribir "n?mero, el programa te dir? si te acercas o no"
	Escribir ""
	
	Escribir "Digita un n?mero: "
	Leer num

	n <- 0
	x <- num
	Mientras x > 1 Hacer
		x <- x / 10
		n <- n + 1
	FinMientras
	x <- n * num
	
	n <- 0
	Repetir
		Escribir ""
		Escribir "Adivina el n?mero: "
		Leer discoverNum
		
		Si discoverNum > x Entonces
			Escribir "Es un n?mero menor que ", discoverNum
		Fin Si
		
		Si discoverNum < x Entonces
			Escribir "Es un n?mero mayor que ", discoverNum 
		FinSi
		
		n <- n + 1
	Hasta Que discoverNum = x
	
	Escribir ""
	Escribir "Haz hallado el n?mero en ", n, " intentos"
FinAlgoritmo
