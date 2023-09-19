#include <stdio.h>

int main() {
    int numero;

    printf("Ingresa un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es igual a cero.\n");
    }

    return 0;
}
