Algoritmo geometricFigures
	Definir answer Como Entero
	Definir b, l, h, r, a, n, perimeter, area Como Real
	Escribir "Programa que calcula el área y perímetro de figuras geométricas regulares"
	
	Repetir
		Escribir ""
		Escribir "MENU: "
		Escribir "1. Círculo"
		Escribir "2. Triángulo Equilatero"
		Escribir "3. Rectángulo"
		Escribir "4. Cuadrado"
		Escribir "5. Figuras regulares con más de 5 lados"
		Escribir "6. Salir"
		Escribir ""
		
		Escribir "Digite el número de opción: "
		Leer answer
		
		Si answer > 0 y answer < 6 Entonces
			Segun answer Hacer
				1:
					Escribir "# Círculo"
					Escribir "Digite el valor del radio: "
					Leer r
					
					perimeter <- 2 * 3.1416 * r
					area <- 3.1416 * r * r
				2:
					Escribir "# Triángulo Equilatero"
					Escribir "Digite el valor de la base: "
					Leer b
					Escribir "Digite el valor de la altura: "
					Leer h
					
					perimeter <- 3 * b
					area <- b * h / 2
				3:
					Escribir "# Rectángulo"
					Escribir "Digite el valor de la base: "
					Leer b
					Escribir "Digite el valor de la altura: "
					Leer h
					
					perimeter <- 2 * b + 2 * h
					area <- b * h
				4:
					Escribir "# Cuadrado"
					Escribir "Digite el valor de uno de los lados: "
					Leer l
					
					perimeter <- 4 * l
					area <- l * l
				De Otro Modo:
					Escribir "# Figuras regulares con más de 5 lados"
					Escribir "Digite el número de lados: "
					Leer n
					Escribir "Digite el valor del apotema: "
					Leer a
					Escribir "Digite el valor de uno de los lados: "
					Leer l
					
					perimeter <- n * l
					area <- perimeter * a / 2
			Fin Segun
			
			Escribir ""
			Escribir "El área es: ", area
			Escribir "El perímetro es: ", perimeter
		FinSi
		
		Si answer < 0 o answer > 6 Entonces
			Escribir "El valor está fuera del rango, vuelva a intentarlo"
		FinSi
	Hasta Que answer = 6
FinAlgoritmo
