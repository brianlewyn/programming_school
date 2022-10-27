// Brayan Mejía Mora

// Planteamiento: Realizar un algoritmo que solicite el ingreso de dos números y de un operador ( + , - , * , /). El algoritmo debe calcular el resultado de la operación seleccionada.
// Entrada: Dos números reales y operador carácter.
// Salida: Un número real

Algoritmo calculateByOperator
	Definir n1,n2 Como Real
	Definir sign Como Caracter

	Escribir "Programa que lee dos números y un operador, para hacer una operación"
	Escribir "Introduce un número: "
	Leer n1
	Escribir "Introduce otro número: "
	Leer n2
	Escribir "Introduce un operador (+, -, *. /): "
	Leer sign
	
   Segun sign  Hacer
		'+':
			Escribir "Suma: ", n1+n2
		'-':
			Escribir "Resta: ", n1-n2
		'*':
			Escribir "Multiplicación: ", n1*n2
		De Otro Modo:
			Escribir "División: ", n1/n2
	FinSegun
FinAlgoritmo
