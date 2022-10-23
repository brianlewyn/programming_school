// code.psc 		Brayan Mejía Mora		19 Oct 2022

Algoritmo discoverNumber
	Definir x, num, cont, discoverNum como Entero
	
	Escribir "Programa que lee un número desde teclado para crear un juego de advinar el"
	Escribir "número, el programa te dirá si te acercas o no"
	Escribir ""
	
	Escribir "Digita un número: "
	Leer num
	
	Segun num Hacer
		50:
			x <- num*16
		100:
			x <- num*num
		200:
			x <- num*4
		1000:
			x <- num/25
		De Otro Modo:
			x <- num/(num/4)
	Fin Segun
	
	cont <- 0
	
	Repetir
		Escribir ""
		Escribir "Adivina el número: "
		Leer discoverNum
		
		Si discoverNum > x Entonces
			Escribir "Es un número menor que ", discoverNum
		Fin Si
		
		Si discoverNum < x Entonces
			Escribir "Es un número mayor que ", discoverNum 
		FinSi
		
		cont <- cont + 1
	Hasta Que discoverNum = x
	
	Escribir ""
	Escribir "Haz hallado el número en ", cont, " intentos"
FinAlgoritmo
