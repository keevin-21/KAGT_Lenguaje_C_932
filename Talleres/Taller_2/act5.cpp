#include <stdio.h>

int main() {
    int año;

    printf("Ingresa un año: ");
    scanf("%d", &año);

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        printf("%d es un año bisiesto.\n", año);
    } else {
        printf("%d no es un año bisiesto.\n", año);
    }

    return 0;
}
