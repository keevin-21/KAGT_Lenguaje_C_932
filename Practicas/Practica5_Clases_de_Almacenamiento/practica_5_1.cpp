/*
Kevin Alejandro Gonzalez Torres - 372354

Creado el: 27 de Septiembre del 2023 / Modificado el 29 de Septiembre del 2023

Practica 5 - 1:
    - Simulacion de un juego de lotería utilizando variables estáticas y
    automáticas en C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateLoteryNumber();

int main()
{
    int userNumber;
    static int winnerNumber;
    
    start:
    winnerNumber = generateLoteryNumber();
    printf("Choose your lotery number!\n");
    printf("NOTA: Only numbers between 1 and 100\n");
    printf("Number: ");
    scanf("%i", &userNumber);

    if (userNumber > 100 && userNumber < 1)
    {
        printf("Error - Incorrect Number");
        goto start;
    }
    
    if (userNumber == winnerNumber)
    {
        printf("CONGRATS - YOU HAVE THE WINNER NUMBER!");
    }
    else
    {
        printf("GOOD LUCK NEXT TIME ;(\n");
        printf("The winner number was: %i", generateLoteryNumber());
    }
    
    return 0;
}

/*
    Funcion:
        - Generar numero de loteria.
    Descripcion:
        - Esta funcion genera un numero aleatorio entre el 1 y 100,
        el cual retorna en la funcion principal.
    Parametros:
        - N/A.
    Retorno:
        - Numero aleatorio entre el 1 y 100.
*/
int generateLoteryNumber()
{
    srand(time(NULL));
    
    return(rand() % 100 + 1);
}