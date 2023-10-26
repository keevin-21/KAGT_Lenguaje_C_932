#include <stdio.h>
#include <string.h>

void intercambiarCadenas(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarPorPrimerCaracter(char **cadenas, int numCadenas)
{
    for (int i = 0; i < numCadenas - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < numCadenas; j++)
        {
            if (*cadenas[j] < *cadenas[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            intercambiarCadenas(&cadenas[i], &cadenas[minIndex]);
        }
    }
}

int main()
{
    char *cadenas[] = {"perro", "gato", "ratón", "elefante", "araña"};

    int numCadenas = sizeof(cadenas) / sizeof(cadenas[0]);

    ordenarPorPrimerCaracter(cadenas, numCadenas);

    for (int i = 0; i < numCadenas; i++)
    {
        printf("%s\n", cadenas[i]);
    }

    return 0;
}
