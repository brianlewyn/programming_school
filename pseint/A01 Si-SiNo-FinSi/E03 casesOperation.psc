// Brayan Mejía Mora

// Leer dos números desde teclado y multiplicarlos si son iguales, restarlos si el primero es mayor que el segundo o sumarlos si el primero es menor que el segundo.
// Entrada: Dos números reales.
// Salida: Un número real.

Algoritmo casesOperation
	Definir a, b como Real
	
	Escribir "Programa que lee dos números y multiplica si son iguales, resta si el primero es mayor que el segundo o suma si el primero es menor que el segundo"
	Escribir "Introduce un número: "
	Leer a
	Escribir "Introduce otro número: "
	Leer b
	
	Si a = b Entonces
		Escribir "El resultado es ", (a*b)
	SiNo 
		Si a > b Entonces
			Escribir "El resultado es ", (a-b)
		SiNo
			Escribir "El resultado es ", (a+b)
		Fin si
	FinSi
FinAlgoritmo
