// tableMultOfNum.psc 		Brayan Mejía Mora		19 Oct 2022

Algoritmo tableMultOfNum
	Definir i, num, answer Como Entero
	Definir flag Como Logico
	
	Escribir "Programa que lee un número y te pide los valores de su tabla de múltiplicar"
	Escribir "del 1 al 10. Nota: Si introduces un valor incorrecto, te volverá a pregunar"
	Escribir "hasta que esté correcto"
	Escribir ""
	
	Escribir "Ingresa un número: "
	Leer num
	Escribir ""
	
	flag <- Verdadero
	
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Repetir
			Escribir num, " x ", i, " = "
			Leer answer
			
			Si answer <> num*i Entonces
				Escribir "El valor es incorrecto, vuelve a ingresarlo"
				flag <- Falso
			FinSi
		Hasta Que (flag)
		
		flag <- Verdadero
	Fin Para
FinAlgoritmo
