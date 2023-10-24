#include <stdio.h>

void copiarArreglo(int *origen, int *destino, int tamano);

int main()
{
    int tamano;
    int arregloOrigen[tamano];
    int arregloDestino[tamano];

    printf("Ingrese el tamaño de los arreglos: ");
    scanf("%d", &tamano);

    printf("Ingrese los elementos del arreglo de origen:\n");
    for (int i = 0; i < tamano; i++)
    {
        scanf("%d", &arregloOrigen[i]);
    }

    copiarArreglo(arregloOrigen, arregloDestino, tamano);

    printf("Arreglo de destino después de la copia:\n");
    for (int i = 0; i < tamano; i++)
    {
        printf("%d ", arregloDestino[i]);
    }

    return 0;
}

void copiarArreglo(int *origen, int *destino, int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        *(destino + i) = *(origen + i);
    }
}
