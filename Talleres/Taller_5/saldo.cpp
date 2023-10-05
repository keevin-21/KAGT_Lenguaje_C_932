#include <stdio.h>
#include <stdlib.h>

void saldos(int cantidad);

int main()
{
    extern int saldo;
    int cantidad;

    printf("SALDO ACTUAL: %d\n", saldo);
    printf("INGRESA LO QUE QUIERAS AGREGAR A SALDO: ");
    scanf("%d", &cantidad);
    saldos(cantidad);
}