// Brayan Mejía Mora

// Realizar un algoritmo que lea números desde teclado, deberás preguntar al usuario si desea continuar introduciendo números, hasta que el usuario responda no, terminará el ciclo. Debes visualizar el número menor introducido por el usuario.
// Nota: sólo debes mostrar el valor mínimo del total de la lista, no cada vez que entra al ciclo.

// Entrada: un numero y si se desea continuar
// Salida: el número menor de los números ingresados

Algoritmo numLessThen
	Definir value, temp, cont Como Entero
	Definir answer Como Caracter
	Definir continue Como Logico
	
	Escribir "Programa que muestra el valor mínimo de los valores ingresados por el usuario"
	
	cont <- 0
	continue <- Falso
	
	Repetir
		Escribir "Ingrese un número: "
		Leer value
		
		Si cont <> 0 Entonces
			Si value < temp Entonces
				temp = value
			FinSi
		SiNo
			temp = value
		FinSi
		
		Escribir "Desea ingresar otro número (s/n): "
		Leer answer
		
		Si answer = 'n' Entonces
			continue <- Verdadero
		FinSi
		
		cont <- count + 1
	Hasta Que continue
	
	Escribir temp
FinAlgoritmo
