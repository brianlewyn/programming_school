Algoritmo cat
	Definir row, col, changes, player1, player2 Como Entero
	Definir position, champion, answer Como Caracter
	Definir players Como Logico
	Dimension position(3, 3)
	
	Repetir
		// Reinicar y mostrar el tablero
		changes <- 0
		fillAllWithBlanks(position)
		printPosition(position)
		
		// Elegir al jugador al azar
		Escribir "" 
		si 1+Azar(2) <> 1 Entonces
			Escribir "Jugador 1 empieza"
			players <- Verdadero
		SiNo
			Escribir "Jugador 2 empieza"
			players <- Falso
		FinSi
		Escribir ""
		
		// Iniciar el juego
		Repetir
			// Elegir quien va a juagar y pedir que anote
			Si players Entonces
				Si changes <> 0 Entonces
					Escribir "Jugador 1"
					Escribir ""
				FinSi
				
				fillBlanksPlayer(position, 'X')
				players <- Falso
			SiNo
				Si changes <> 0 Entonces
					Escribir "Jugador 2"
					Escribir ""
				FinSi
				
				fillBlanksPlayer(position, 'O')
				players <- Verdadero
			FinSi
			
			// Contar los turnos
			changes <- changes + 1
			
			// Mostrar las nuevas anotaciones
			printPosition(position)
			
			// Comprar si alguien ya gano
			champion <- checkIfThereIsAChampion(position)
			
		Hasta Que (changes=9 o champion='X' o champion='O')
		
		// Decidir el ganador
		Segun champion Hacer
			'X':
				Escribir "El jugador 1 ha ganado"
			'O':
				Escribir "El jugador 2 ha ganado"
			De Otro Modo:
				Escribir "Empate"
		FinSegun
		
		// Preguntar para continuar
		Escribir "Desea seguir jugando (s/n):"
		Leer answer
	Hasta Que (no(answer='s' o answer='S'))
	
	Escribir ""
	Escribir "Fin del juego"
FinAlgoritmo

Funcion fillAllWithBlanks(position)
	Definir i, j Como Entero
    Para i<-1 Hasta 3 Con Paso 1 Hacer
		Para j<-1 Hasta 3 Con Paso 1 Hacer
            position[i,j] <- ' '
        FinPara
    FinPara
FinFuncion

Funcion printPosition(position)
	Definir i, j Como Entero
    
	// Limpiar la Pantalla
	Borrar Pantalla
    
	// Imprimir la guia horizontal
    Escribir "      | 1 | 2 | 3 |"
	
	// Imprimir la guia vertical y el espacio de juego
	Escribir "___"
    Para i<-1 Hasta 3 Con Paso 1 Hacer
		
		// Imprimir las guias y reglas horizontales interiores
		Si i<>1 Entonces
            Escribir "---   -------------"
        FinSi
        
		// Imprimir la guia vertical
        Escribir Sin Saltar " ", i, "     "
		
		// Imprimir el valor y las reglas verticales
		Para j<-1 Hasta 3 Con Paso 1 Hacer
			Escribir Sin Saltar " ", position[i,j]
			Si j<>3 Entonces
				Escribir Sin Saltar " |"
			FinSi
        FinPara
		Escribir ""
    FinPara
	Escribir "---"
FinFuncion

Funcion n <- readPosition(textRowCol)
    Repetir
        Escribir Sin Saltar "Seleccione el número de ", textRowCol, ":";
        Leer n
        
		Si n<1 o n>3 Entonces
            Escribir "Número no válido";
        FinSi
    Hasta Que (n=1 o n=2 o n=3)
FinFuncion

Funcion fillBlanksPlayer(position, symbol)
	Definir row, col Como Entero
	Repetir
		row <- readPosition("fila")
		col <- readPosition("columna")
		Si position[row,col] <> ' ' Entonces
			Escribir "La casilla seleccionada ya está ocupada"
			Escribir ""
		FinSi
	Hasta Que (position[row, col] = ' ')
	position[row,col] <- symbol
FinFuncion

Funcion n <- xyz(position, s)
	Definir i, j Como Entero
	
	// Horizontal y Vertical
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Si position[i,1]=s y position[i,2]=s y position[i,3]=s Entonces
			n <- 3
		FinSi
		
		Si position[1,i]=s y position[2,i]=s y position[3,i]=s Entonces
			n <- 3
		FinSi
	Fin Para
	
	// Diagonal
	Si position[1,1]=s y position[2,2]=s y position[3,3]=s Entonces
		n <- 3
	FinSi
	Si position[3,1]=s y position[2,2]=s y position[1,3]=s Entonces
		n <- 3
	FinSi
FinFuncion

Funcion champion <- checkIfThereIsAChampion(position)
	Si xyz(position, 'X') = 3 Entonces
		champion <- 'X'
	FinSi
	
	Si xyz(position, 'O') = 3 Entonces
		champion <- 'O'
	FinSi
FinFuncion
	