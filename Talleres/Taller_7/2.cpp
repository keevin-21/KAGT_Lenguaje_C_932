#include <stdio.h>

int main()
{
    char *nombres[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        char nombre[100];
        printf("Ingrese el nombre %d: ", i + 1);
        gets(nombre);
        nombres[i] = nombre;
    }

    for (i = 0; i < 3; i++)
    {
        printf("Nombre %i: %s\n", i + 1, nombres[i]);
    }

    return 0;
}
