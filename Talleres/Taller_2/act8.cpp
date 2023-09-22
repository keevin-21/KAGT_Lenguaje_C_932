#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int compra;
    char membresia[99];
    
    do{
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);

    printf("¿Cuenta con membresia? (y/n): \n");
    scanf("%s", &membresia);

    // Convertir la respuesta a minúsculas para comparar de manera insensible a mayúsculas
    for (int i = 0; membresia[i]; i++) {
    membresia[i] = tolower(membresia[i]);
    }
    } while (strcmp(membresia, "y") == 0);
    printf("RESPUESTA NO VALIDA");

    precio_final1 = 
    precio_final2 =

        (compra >= 1000 && membresia == 0 ? "Su precio final es de:") ? "" : (cal >= 80 && cal < 90) ? "B" : 
        (cal >= 70 && cal < 80) ? "C" : 
        (cal >= 60 && cal < 70) ? "D" : 
        (cal >= 0 && cal < 60) ? "F" : "Invalid grade");
    
    return 0;
}

    

}