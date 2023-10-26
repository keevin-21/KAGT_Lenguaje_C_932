#include <stdio.h>
#include <string.h>

char *reversedString(char string[]);

int main()
{
    char string[100];

    printf("Introduce tu cadena:\n");
    fgets(string, sizeof(string), stdin);
    reversedString(string);
    printf("\nNueva cadena: %s", string);
}

char *reversedString(char string[])
{
    int length = strlen(string);
    char temp;

    for (int i = 0; i < length / 2; i++)
    {
        temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }

    return string;
}