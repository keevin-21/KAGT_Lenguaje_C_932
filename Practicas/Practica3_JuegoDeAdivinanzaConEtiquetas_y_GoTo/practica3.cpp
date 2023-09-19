/*
KAGT_PRACTICA03.cpp
Kevin Alejandro Gonzalez Torres
14 de Septiembre del 2023
- Crear un juego de adivinanza de números utilizando etiquetas
y la instrucción"goto" para controlar el flujo del juego -
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void guessingGame();

int main()
{
    char response[1];

    do
    {
        guessingGame();
        printf("¿Desea jugar de nuevo? (y/n): \n");
        scanf("%s", response);

        for (int i = 0; response[i]; i++)
        {
            response[i] = tolower(response[i]);
        }
    } while (strcmp(response, "y") == 0);

    printf("¡Gracias por jugar y usar este programa!");
}

void guessingGame()
{
    int random_num, correct_num;
    srand(time(NULL));
    random_num = rand() % 101 + 1;
    
    printf("Numero aleatorio generado\n¡Trata de adivinar el numero!\n\n");
    int i = 0;
    while (correct_num != random_num)
    {
        printf("Numero: ");
        scanf("%i", &correct_num);

        if (correct_num > random_num)
        {
            printf("¡Mas bajo!\n");
        }
        else if (correct_num < random_num)
        {
            printf("¡Mas alto!\n");
        }
        else
        {
            printf("¡Numero correcto, el numero era: %i\n", random_num);
            printf("El numero de intentos fue: %i\n", i);
        }
        i++;
    }
}