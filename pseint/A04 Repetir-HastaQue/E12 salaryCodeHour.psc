// Brayan Mejía Mora

// Se deberá calcular el pago de los trabajadores de una empresa. Por cada trabajador se ingresará el código y el número de horas trabajadas, la hora es pagada a $250.00. Si trabajo 40 horas o menos, se le descontará el 8% de impuesto en caso contrario se le descontará el 12%. El proceso se terminará hasta leer el código 0.

// Entrada: código y número de horas
// Salida: Salario con impuesto agregado

Algoritmo salaryCodeHour
	Definir code, nHour, payPerHour, amount Como Entero
	
	Escribir "Programa que calcula el pago de los trabajadores ingresando el código y el número de horas trabajas"
	
	payPerHour <- 250
	Repetir
		Escribir "Ingresa el código: "
		Leer code
		
		Si code <> 0 Entonces
			Escribir "Ingresa el número de horas trabajadas: "
			Leer nHour
			
			amount <- nHour * payPerHour
			
			Si nHour <= 40 Entonces
				amount <- amount - (amount*0.08)
				Escribir "El pago es $", amount
			SiNo
				amount <- amount - (amount*0.12)
				Escribir "El pago es $", amount
			FinSi
		FinSi
	Hasta Que code = 0
FinAlgoritmo
