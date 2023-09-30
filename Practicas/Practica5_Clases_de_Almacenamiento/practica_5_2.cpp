/*
Kevin Alejandro Gonzalez Torres - 372354

Creado el: 27 de Septiembre del 2023 / Modificado el 29 de Septiembre del 2023

Practica 5 - 1:
    - Uso de variables de registro (register) en C para simular una
    carrera de coches.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define raceTrack 50

void startRace();

int main()
{
    startRace();
    return 0;
}

void startRace()
{
    register float r8, mustang, civic;

    srand(time(NULL));

    r8 = rand() % 101 + 100;
    mustang = rand() % 101 + 100;
    civic = rand() % 101 + 100;

    printf("Race track of %ikm\n", raceTrack);
    if (raceTrack / r8 < raceTrack / mustang && raceTrack / r8 < raceTrack / civic)
    {
        printf("Audi R8 wins - Time: %.2fs\n", raceTrack / r8 * 60);
        printf("Mustang's Time: %.2fs\n", raceTrack / mustang * 60);
        printf("Civic's Time: %.2fs\n", raceTrack / civic * 60);
    }
    else
    {
        if (raceTrack / mustang < raceTrack / r8 && raceTrack / mustang < raceTrack / civic)
        {
            printf("Mustang Wins - Time: %.2fs\n", raceTrack / mustang * 60);
            printf("R8's Time: %.2fs\n", raceTrack / r8 * 60);
            printf("Civic's Time: %.2fs\n", raceTrack / civic * 60);
        }
        else
        {
            printf("Civic Wins - Time: %.2fs\n", raceTrack / civic * 60);
            printf("Mustang's Time: %.2fs\n", raceTrack / mustang * 60);
            printf("R8's Time: %.2fs\n", raceTrack / r8 * 60);
        }
    }
    
}