#include <stdio.h>

int main()
{
    char *nombres[3];

    nombres[0] = "Juan";
    nombres[1] = "María";
    nombres[2] = "Carlos";

    for (int i = 0; i < 3; i++) {
        printf("Nombre %i: %s\n", i + 1, nombres[i]);
    }

    return 0;
}
