// code.psc 		Brayan Mej�a Mora		19 Oct 2022

Algoritmo discoverNumber
	Definir x, num, discoverNum como Entero
	
	Escribir "Programa que lee un n�mero desde teclado para crear un juego de advinar el"
	Escribir "n�mero, el programa te dir� si te acercas o no"
	Escribir ""
	
	Escribir "Digita un n�mero: "
	Leer num
	
	Segun x Hacer
		x<50:
			x <- num*16
		x<100:
			x <- num*num
		x<200:
			x <- num*4
		x<1000:
			x <- num/25
		De Otro Modo:
			x <- num/(num/4)
	Fin Segun
	
	Repetir
		Escribir ""
		Escribir "Adivina el n�mero: "
		Leer discoverNum
		
		Si discoverNum > x Entonces
			Escribir "Es un n�mero menor que ", discoverNum
		Fin Si
		
		Si discoverNum < x Entonces
			Escribir "Es un n�mero mayor que ", discoverNum 
		FinSi
	Hasta Que discoverNum = x
	
	Escribir ""
	Escribir "Haz hallado el n�mero"
FinAlgoritmo
