#include <stdio.h>

int main(){
    int limite, resultado=0, i;
    printf("Ingrese un numero entero positivo: ");
    scanf("%i", &limite);
    for (i = 1; i <= limite; i++){
        resultado+=i;
    }
    printf("La suma de los primeros %i numeros es: %i\n", limite, resultado);
    return 0;
}