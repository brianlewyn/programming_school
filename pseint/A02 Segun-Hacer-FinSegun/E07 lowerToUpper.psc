// Brayan Mejía Mora

// Escribe un programa que pida al usuario una calificación y muestre por pantalla la calificación final.
// Entrada: Una calificación.
// Salida: Un mensaje sobre el tipo de calificación.

Algoritmo typeCalification
	Definir calf como Entero
	
	Escribir "Programa que lee una calificación y dice que tipo calificación es"
	Escribir "Introduce una calificación: "
	Leer calf
	
	Segun calf Hacer
		9, 10:
			Escribir "Sobresaliente"
		7, 8:
			Escribir "Notable"
		6:
			Escribir "Aprobado"
		De Otro Modo:
			Escribir "Suspenso"
	FinSegun
FinAlgoritmo
