#include <stdio.h>

int encontrarMaximo(int arreglo[], int tamano);

int main()
{
    int tamano, maximo;
    int arreglo[tamano];
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    if (tamano <= 0) {
        printf("Error: Tamaño de arreglo no válido.\n");
        return 1;
    }

    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < tamano; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    maximo = encontrarMaximo(arreglo, tamano);

    if (maximo != -1) {
        printf("El elemento máximo en el arreglo es: %d\n", maximo);
    }

    return 0;
}

int encontrarMaximo(int arreglo[], int tamano)
{
    int maximo;

    if (tamano <= 0) {
        printf("Error: El arreglo está vacío o tiene un tamaño no válido.\n");
        return -1;
    }

    maximo = arreglo[0];

    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    return maximo;
}
