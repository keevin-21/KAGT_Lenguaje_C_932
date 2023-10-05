#include <stdio.h>

static int contador = 0;

void incrementarYMostrarContador() {
    contador++;
    printf("El valor del contador es: %d\n", contador);
}

int main() {

    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();
    incrementarYMostrarContador();

    return 0;
}
