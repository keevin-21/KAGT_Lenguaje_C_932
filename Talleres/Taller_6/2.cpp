#include <stdio.h>

void multiplicarPorDos(int *ptr);

int main() {
    int numero = 60;
    int *ptr = &numero;

    printf("Valor original: %d\n", *ptr);
    multiplicarPorDos(ptr);
    printf("Valor modificado: %d\n", *ptr);

    return 0;
}

void multiplicarPorDos(int *ptr)
{
    *ptr *= 2;
}
