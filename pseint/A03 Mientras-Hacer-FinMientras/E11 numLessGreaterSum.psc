// Brayan Mejía Mora

// Escribe un programa que le pida al usuario dos enteros, debemos comprobar que el primer número sea menor que el segundo, sino se cumple esta condici�n los volveremos a pedir hasta que se cumpla. Una vez introducidos correctamente mostraremos la suma de todos los enteros comprendidos entre ambos números incluidos ellos. Por ejemplo para los números 3 y 7, la suma seria 25. SUGERENCIA: son dos ciclos los que debes usar, uno para verificar que el primer número sea mayor al segundo y otro para hacer la suma.

// Entrada: dos números donde el primero es siempre el menor
// Salida: la suma entre los limites de los números ingresados

Algoritmo numLessGreaterSum
	Definir less, greater, diff, sum Como Entero
	
	Escribir "Programa que lee dos números enteros, donde el primero debe ser siempre el menor. Luego, muestra la suma entre los limites de los números ingresados"
	
	Escribir "Ingresa el número: "
	Leer less
	Escribir "Ingresa otro número: "
	Leer greater
	
	Mientras less > greater Hacer
		Escribir "Vuelve a escribir los números..."
		Escribir "Ingresa el número: "
		Leer less
		Escribir "Ingresa otro número: "
		Leer greater
	FinMientras
	
	sum <- 0
	Mientras less <= greater Hacer
		sum <- sum + less
		less <- less + 1
	FinMientras
	
	Escribir sum
FinAlgoritmo
