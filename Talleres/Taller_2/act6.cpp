#include <stdio.h>

int main()
{
    int decimalNumber, numofBits = 0, temp;

    printf("Escribe un numero decimal: ");
    scanf("%i", &decimalNumber);

    if (decimalNumber < 0)
    {
        printf("Por favor, ingresa un número positivo.\n");
        return 1;
    }

    temp = decimalNumber;

    while (temp > 0)
    {
        temp = temp / 2;
        numofBits++;
    }

    int bits[numofBits], index = 0, i;

    temp = decimalNumber;
    
    while (temp > 0)
    {
        bits[index] = temp % 2;
        temp = temp / 2;
        index++;
    }

    printf("Numero en binario: ");

    for (i = index - 1; i >= 0; i--)
    {
        printf("%i", bits[i]);
    }
    printf("\n\n");

    printf("Complemento del numero en binario: ");

    for (i = 0; i < index; i++)
    {
        printf("%i", bits[i]);
    }
    
    printf("\n");

    decimalNumber <<= 2;

    printf("Numero decimal << 2 left-shifted: %i\n", decimalNumber);

    return 0;
}
