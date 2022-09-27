// Brayan Mejía Mora

// Planteamiento: Escribe un programa que pida el año actual y un año cualquiera y muestre un mensaje diciendo cuántos años faltan para llegar a ese año (si es posterior al actual), cuántos han transcurrido desde ese año (si es anterior), o si ese año es el actual.
// Entrada: El año actual y un año cualquiera como enteros.
// Salida: Años de diferencia o si es el actual

Algoritmo yearsDifference
	Definir current, any, res como Entero
	
	Escribir "Programa que lee el año actual y un año cualquiera y muestra la diferencia de los que faltan o sobran o si es el año actual"
	Escribir "Introduce el año actual: "
	Leer current
	Escribir "Introduce un año cualquiera: "
	Leer any
	
	res <- current-any
	
	Si res=0 Entonces
		Escribir "El año cualquiera es el mismo que el actual"
	SiNo 
		Si res>0 Entonces
			Escribir "Años anteriores al año actual son ", res
		SiNo
			Escribir "Años posteriores al año actual son ", res*(-1)
		Fin si
	FinSi
FinAlgoritmo
