#include <stdio.h>

void sumarAElementos(int *arreglo, int tamano, int valorASumar);

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);
    int valorASumar = 10;

    printf("Arreglo original: ");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    sumarAElementos(arreglo, tamano, valorASumar);

    printf("\nArreglo modificado: ");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}

void sumarAElementos(int *arreglo, int tamano, int valorASumar)
{
    for (int i = 0; i < tamano; i++) {
        *(arreglo + i) += valorASumar;
    }
}
