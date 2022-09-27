// Brayan Mejía Mora
// Escribe un programa que lea el lado de un cuadrado y a continuación lo imprima en forma de asteriscos. Su programa 
// deberá funcionar para cuadrados de entre 1 y 20 (validar este rango). Por ejemplo, si tu programa lee un tamaño de 4, debe imprimir:
// ****
// ****
// ****
// ****
// Entrada: un número
// Salida: Imprimir el área de un cuadrado como asteriscos

Algoritmo fillSquare
	Definir l Como Entero
	
	Escribir "Programa que imprime el area de un cuadrado en forma de astericos a partir de un número leído desde teclado"
	
	Repetir
		Escribir "Introduce un lado entre 1 y 20: "
		Leer l
	Hasta Que l>=1 y l<=20
	
	Para i<-1 Hasta l Con Paso 1 Hacer
		Para j<-1 Hasta l Con Paso 1 Hacer
			Escribir "*" Sin Saltar
		Fin Para
		Escribir ""
	Fin Para
FinAlgoritmo
