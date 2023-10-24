#include <stdio.h>

int calcularSuma(int *arreglo, int tamano);

int main()
{
    int tamano;
    int arreglo[tamano];
    int suma;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    suma = calcularSuma(arreglo, tamano);

    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}

int calcularSuma(int *arreglo, int tamano)
{
    int suma = 0;

    for (int i = 0; i < tamano; i++) {
        printf("Ingrese el valor para el elemento %d: ", i + 1);
        scanf("%d", arreglo + i);
        suma += *(arreglo + i);
    }

    return suma;
}
