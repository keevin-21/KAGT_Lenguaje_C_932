#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arreglo[7];
    int *ptr = arreglo;
    int numerosGenerados = 0;

    srand(time(NULL));

    while (numerosGenerados < 7) {
        int numeroAleatorio = rand() % 50 + 1;
        int repetido = 0;

        for (int i = 0; i < numerosGenerados; i++) {
            if (arreglo[i] == numeroAleatorio) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            arreglo[numerosGenerados] = numeroAleatorio;
            numerosGenerados++;
        }
    }

    ptr = arreglo;

    for (int i = 0; i < 7; i++) {
        printf("Elemento %d: %d\n", i + 1, *ptr);
        ptr++;
    }

    return 0;
}
