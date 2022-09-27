// Brayan Mejía Mora

// Escribe un algoritmo que lea dos números enteros desde teclado y realice la suma solo si son positivos, en caso de que los números no sean positivos mostrar un mensaje de error al usuario.
// Entrada: Dos números enteros.
// Salida: Un número o mensaje de error.

Algoritmo sumTwoNums
	Definir a, b, res como Entero
	
   Escribir "Programa que lee dos números positivos y devuelve la suma"
	Escribir "Introduce un número: "
	Leer a
	Escribir "Introduce otro número: "
	Leer b
	
   Si a>0 y b>0 Entonces
		res <- a+b
		Escribir "El resultado es: ", res
	SiNo
		Escribir "Error"
	FinSi
FinAlgoritmo
