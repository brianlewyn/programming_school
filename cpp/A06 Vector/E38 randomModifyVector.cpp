/* Brayan Mejía Mora

En el archivo aleatorios.cpp que les estoy adjuntando, se encuentra un programa donde se genera un vector con 50 números aleatorios, ese archivo lo modificarás de la siguiente manera:
    1. Deberás mostrar el contenido del vector 
    2. Luego leerás un número desde teclado
    3. Posteriormente deberás buscar el número en el vector, de modo que el algoritmo imprima los siguientes mensajes según el resultado:
'Número encontrado en la posición' poner en qué posición se encuentra, si hay más de uno deberás hacerlo por cada ocurrencia del número, o bien,
'Número no existe en la lista' si el número no se encuentra.

Entrada: un número entero
Salida: encontrar todas las posiciones de uno número o decir que no existe en la lista 
*/

#include <iostream>
using namespace std;

int main() {
    int num, cont=0, numRandom, vectorRandom[50]={};

    cout<<"Programa lee un número desde teclado y luego comprueba si existe entre los 50 números generados aleatoriamente, si es así imprimir la posiciones o decir que no existe en la lista\n";

    // construir el vector de números aleatorios
    srand(time(NULL));
    for (int i=0; i<50; i++) {
        numRandom = 1+rand()%(100);
        vectorRandom[i] = numRandom;
    }

    // imprimir el vector de números aleatorios
    cout<<"Los 50 números aleatorios son: ";
    for (int i=0; i<50; i++) {
        cout<<"Vector ["<<i<<"]: "<<vectorRandom[i]<<endl;
    }

    // verificar la existencia del número leído
    cout<<"\n\nIntroduce un número a encontrar: "; cin>>num;
    for (int i=0; i<50; i++) {
        if (num == vectorRandom[i]) {
            cout<<"Número encontrado en la posición: "<<i<<endl;
            cont++;
        }
    }

    if (cont == 0) {
        cout<<"Número no existe en la lista\n\n";
    }

    return 0;
}