Algoritmo geometricFigures
	Definir answer Como Entero
	Definir b, l, h, r, a, n, perimeter, area Como Real
	Escribir "Programa calcula el �rea y per�metro de figuras geom�tricas regulares"
	
	Repetir
		Escribir ""
		Escribir "MENU: "
		Escribir "1. C�rculo"
		Escribir "2. Triangulo Equilatero"
		Escribir "3. Rect�ngulo"
		Escribir "4. Cuadrado"
		Escribir "5. Figuras regulares con mas de 5 lados"
		Escribir "6. Salir"
		Escribir ""
		
		Escribir "Digite el n�mero de opci�n: "
		Leer answer
		
		Si answer > 0 y answer <= 6 Entonces
			Segun answer Hacer
				1:
					Escribir "# C�rculo"
					Escribir "Digite el valor del radio: "
					Leer ratio
					
					perimeter <- 2 * 3.1416 * r
					area <- 3.1416 * r * r
					
					Escribir ""
					Escribir "El �rea es: ", area
					Escribir "El per�metro es: ", perimeter
				2:
					Escribir "# Tri�ngulo Equilatero"
					Escribir "Digite el valor de la base: "
					Leer b
					Escribir "Digite el valor de la altura: "
					Leer h
					
					perimeter <- 3 * b
					area <- b * h / 2
					
					Escribir ""
					Escribir "El �rea es: ", area
					Escribir "El per�metro es: ", perimeter
				3:
					Escribir "# Rect�ngulo"
					Escribir "Digite el valor de la base: "
					Leer b
					Escribir "Digite el valor de la altura: "
					Leer h
					
					perimeter <- 2 * b + 2 * h
					area <- b * h
					
					Escribir ""
					Escribir "El �rea es: ", area
					Escribir "El per�metro es: ", perimeter
				4:
					Escribir "# Cuadrado"
					Escribir "Digite el valor de uno de los lados: "
					Leer l
					
					perimeter <- 4 * l
					area <- l * l
					
					Escribir ""
					Escribir "El �rea es: ", area
					Escribir "El per�metro es: ", perimeter
				5:
					Escribir "# Figuras regulares con mas de 5 lados"
					Escribir "Digite el n�mero de lados: "
					Leer n
					Escribir "Digite el valor del apotema: "
					Leer a
					Escribir "Digite el valor de uno de los lados: "
					Leer l
					
					perimeter <- n * l
					area <- perimeter * a / 2
					
					Escribir ""
					Escribir "El �rea es: ", area
					Escribir "El per�metro es: ", perimeter
				De Otro Modo:
					Escribir "Saliendo del programa"
			Fin Segun
		FinSi
		
		Si answer < 0 o answer > 6 Entonces
			Escribir "El valor esta fuera del rango, vuelva a intentarlo"
		FinSi
	Hasta Que answer = 6
FinAlgoritmo
