#include <stdio.h>

int main() {
    int numero;

    printf("Ingresa un número: ");
    scanf("%d", &numero);

    if (numero > 0 && numero % 2 == 0) {
        printf("El número es positivo y par.\n");
    } else {
        printf("El número no es positivo y par al mismo tiempo.\n");
    }

    return 0;
}
