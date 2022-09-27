// Brayan Mej�a Mora

// Realizar un algoritmo que ingrese una vocal miníscula y lo muestre en may�scula.
// Entrada: Una vocal en miniscula.
// Salida: Una vocal en mayúscula.

Algoritmo lowerToUpper
	Definir letter como caracter
	
	Escribir "Programa que lee una vocal miníscula y lo muestra en mayúsculas"
	Escribir "Introduce una vocal miníscula: "
	Leer letter
	
	Segun letter Hacer
		'a':
			Escribir "Vocal en mayúscula: A"
		'e':
			Escribir "Vocal en mayúscula: E"
		'i':
			Escribir "Vocal en mayúscula: I"
		'o':
			Escribir "Vocal en mayúscula: O"
		'u':
			Escribir "Vocal en mayúscula: U"
		De otro modo:
			Escribir "No es una vocal miníscula, vuleve a intentarlo"
	FinSegun
FinAlgoritmo
