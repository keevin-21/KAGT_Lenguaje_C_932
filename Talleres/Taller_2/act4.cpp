#include <stdio.h>

int main() {

    int a = 5;
    int b = 3;
    int c = 7;
    float resultado;

    resultado = (a * b + c) / (float)(b - a);

    printf("El resultado de la expresión es: %.2f\n", resultado);

    return 0;
}
