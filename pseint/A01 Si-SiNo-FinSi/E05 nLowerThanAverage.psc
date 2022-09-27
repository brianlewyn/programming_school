// Brayan Mejía Mora

// Planteamiento: Crea un programa que reciba como entrada cuatro números enteros y muestre por pantalla aquellos inferiores al valor medio de los cuatro números (se excluyen los valores iguales a la media).
// Entrada: Cuatro números enteros.
// Salida: Aquellos números inferiores a la media.

Algoritmo nLowerThanAverage
	Definir a, b, c, d como Entero
	
	Escribir "Programa que lee cuatro números y muestra todos aquellos inferiores al valor medio de los cuatro numeros"
	Escribir "Introduce el primer valor: "
	Leer a
	Escribir "Introduce el segundo valor: "
	Leer b
	Escribir "Introduce el tercer valor: "
	Leer c
	Escribir "Introduce el cuarto valor: "
	Leer d
	
	medio <- (a+b+c+d)/4
	
	Si a < medio Entonces
		Escribir "Inferior al valor medio de los 4 números: ", a
	FinSi
	Si b < medio Entonces
		Escribir "Inferior al valor medio de los 4 números: ", b
	FinSi
	Si c < medio Entonces
		Escribir "Inferior al valor medio de los 4 números: ", c
	FinSi
	Si d < medio Entonces
		Escribir "Inferior al valor medio de los 4 números: ", d
	FinSi
FinAlgoritmo
