#include <stdio.h>

int main() {
    register int temp = 10;
    int valor = 20;

    printf("Valor de 'temp' (registro): %d\n", temp);
    printf("Valor de 'valor' (automática): %d\n", valor);

    {
        int valor = 30; // Otra variable 'valor' en un ámbito interno
        printf("Valor de 'valor' en ámbito interno: %d\n", valor);
    }

    // 'temp' sigue siendo accesible aquí
    printf("Valor de 'temp' después del ámbito interno: %d\n", temp);

    return 0;
}
