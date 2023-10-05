//saldo.cpp

#include <stdio.h>
#include <stdlib.h>

int saldo = 1000;

void saldos(int cantidad)
{
    saldo+= cantidad;
    printf("VALOR DE SALDO ACTUAL: %d\n ", saldo);
    system("PAUSE");
}