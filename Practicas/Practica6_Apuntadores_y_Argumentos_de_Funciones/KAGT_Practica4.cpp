#include <stdio.h>

int compararCadenas(char *cadena1, char *cadena2);

int main()
{
    char cadena1[100];
    char cadena2[100];
    int resultado;

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    resultado = compararCadenas(cadena1, cadena2);

    if (resultado) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}

int compararCadenas(char *cadena1, char *cadena2)
{
    while (*cadena1 != '\0' && *cadena2 != '\0') {
        if (*cadena1 != *cadena2) {
            return 0;
        }
        cadena1++;
        cadena2++;
    }

    return (*cadena1 == '\0' && *cadena2 == '\0');
}

