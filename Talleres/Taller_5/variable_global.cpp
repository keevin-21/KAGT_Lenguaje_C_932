#include <stdio.h>

// Declaración de una variable global llamada 'pi'
float pi = 3.14159;

// Función que declara una variable local 'pi' con un valor diferente
void cambiarValorPi() {
    float pi = 3.14159265359; // Variable local con un valor diferente
    printf("Valor local de 'pi' dentro de la función: %.10f\n", pi);
}

int main() {
    printf("Valor global de 'pi': %.5lf\n", pi);

    // Llama a la función para cambiar el valor local de 'pi'
    cambiarValorPi();

    // Accede nuevamente a la variable global 'pi' desde 'main'
    printf("Valor global de 'pi' después de llamar a la función: %.5lf\n", pi);

    return 0;
}
