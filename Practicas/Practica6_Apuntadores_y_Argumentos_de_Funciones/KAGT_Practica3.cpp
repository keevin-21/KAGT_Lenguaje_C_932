#include <stdio.h>
#include <string.h>

void concatenarCadenas(const char *cadena1, const char *cadena2, char *cadenaDestino, int tamanoDestino);

int main()
{
    char cadena1[100];
    char cadena2[100];
    char cadenaDestino[100];

    printf("Ingrese la primera cadena: ");
    gets(cadena1);
    printf("Ingrese la segunda cadena: ");
    gets(cadena2);

    concatenarCadenas(cadena1, cadena2, cadenaDestino, sizeof(cadenaDestino));

    printf("Cadena de destino después de la concatenación: %s", cadenaDestino);

    return 0;
}

void concatenarCadenas(const char *cadena1, const char *cadena2, char *cadenaDestino, int tamanoDestino)
{
    strncpy(cadenaDestino, cadena1, tamanoDestino - 1);
    strncat(cadenaDestino, cadena2, tamanoDestino - strlen(cadenaDestino) - 1);
}
