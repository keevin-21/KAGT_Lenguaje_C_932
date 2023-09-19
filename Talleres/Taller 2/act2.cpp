#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Ingresa la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f grados Celsius son equivalentes a %.2f grados Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
 