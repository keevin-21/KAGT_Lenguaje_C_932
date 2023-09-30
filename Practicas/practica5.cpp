/*
Kevin Alejandro Gonzalez Torres - 372354

Creado el: 25 de Septiembre del 2023 / Modificado el 25 de Septiembre del 2023

Practica 5:
    1. Fibonacci without recursion
    2. Fibonacci with recursion
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generateLoteryNumber();

int main()
{

    return 0;   
}

void menu()
{
    int option;
    printf("MENU:");
    printf("\n\t1.- Lotery\n\t2.- Car Race\n");
    printf("Select an option: ");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        
        break;
    case 2:

        break;
    default:
        break;
    }
}

void generateLoteryNumber()
{
    int random_num;
    srand(time(NULL));
    random_num = rand() % 101 + 1;
}

void loteryGame()
{
    static int winnerNumber = generateLoteryNumber();
}