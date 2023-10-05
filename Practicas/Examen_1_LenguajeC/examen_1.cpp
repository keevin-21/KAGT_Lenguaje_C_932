#include <stdio.h>
#include <string.h>
#include <ctype.h>

void perfectNumbers(int size);

int main()
{
    int size;
    char response[2];

    do
    {
        printf("Rango de numeros perfectos: ");
        scanf("%i", &size);
        perfectNumbers(size);
        printf("\nDesea realizar otra operacion? (y/n): ");
        scanf("%s", response);
        for (int i = 0; response[i]; i++)
        {
            response[i] = tolower(response[i]);
        }
    } while (strcmp(response, "y") == 0);
    printf("\n¡Gracias por usar este programa!");
    return 0;
}

void perfectNumbers(int size)
{
    printf("Numeros perfectos: ");
    for (int i = 1; i <= size; i++)
    {
        int sumatory = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sumatory += j;
            }
        }

        if (i == sumatory)
        {
            printf("%i", i);

            if (i < size)
            {
                printf(", ");
            }
        }
    }
}
