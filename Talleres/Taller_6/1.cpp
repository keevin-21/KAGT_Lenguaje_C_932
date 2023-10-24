#include <stdio.h>

int main() {
    int x = 2023;
    int *ptr;

    ptr = &x;

    printf("Valor de x: %d\n", x);
    printf("Valor apuntado por ptr: %d\n", *ptr);

    return 0;
}
