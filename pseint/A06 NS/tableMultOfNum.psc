Algoritmo tableMultOfNum
	Definir i, num, answer Como Entero
	Definir flag Como Logico
	
	Escribir "Programa que lee un n�mero y te pide los valores de su tabla de m�ltiplicar"
	Escribir "del 1 al 10. Nota: Si introduces un valor incorrecto, te volver� a pregunar"
	Escribir "hasta que est� correcto"
	Escribir ""
	
	Escribir "Ingresa un n�mero: "
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
			SiNo
				flag <- Verdadero
			FinSi
		Hasta Que (flag)
		
		flag <- Verdadero
	Fin Para
FinAlgoritmo
