#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define PI 3.14159

int main()
{
    int option;
    float result;
    char response[1];
    //  Funciones de todas la opciones en el menu
    float basic_calculator();
    int random_number();
    float area_calculator();

    // Menu principal
    printf("PRACTICA 1\nConceptos generales\n\n");
    printf("Menu:\n");
    printf("1.- Calculadora para operaciones básicas\n");
    printf("2.- Juego - Adivina el numero\n");
    printf("3.- Calculadora de areas\n\n");
    
    printf("Selecciona una opcion: ");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        do{
            result = basic_calculator();
            printf("El resultado de tu operacion es: %f\n\n", result);
            //  Repetir operacion
            printf("¿Desea realizar otra operacion? (y/n): \n");
            scanf("%s", response);

            // Convertir la respuesta a minúsculas para comparar de manera insensible a mayúsculas
            for (int i = 0; response[i]; i++) {
            response[i] = tolower(response[i]);
            }
        } while (strcmp(response, "y") == 0);
        printf("¡Gracias por usar este programa!");
            break;
        
    case 2:
        do{    
            int random_number();
            printf("%i\n\n", random_number());
            printf("¿Desea jugar de nuevo? (y/n): \n");
            scanf("%s", response);

            for (int i = 0; response[i]; i++) {
            response[i] = tolower(response[i]);
            }
        } while (strcmp(response, "y") == 0);
        printf("¡Gracias por jugar y usar este programa!");
        break;

    case 3:
        do{
            result = area_calculator();
            printf("El area de tu figura es: %f\n\n", result);
            printf("¿Desea realizar otra operacion? (y/n): \n");
            scanf("%s", response);

            for (int i = 0; response[i]; i++) {
            response[i] = tolower(response[i]);
            }
        } while (strcmp(response, "y") == 0);
        printf("¡Gracias por usar este programa!");        
        break;

    default:
        printf("ERROR - ESTA NO ES UNA OPCION VALIDA");
        break;
    }
}

//  Funcion para la primera opcion en el main
float basic_calculator()
{
    int option;
    float num1, num2, result;

    printf("CALCULADORA DE OPERACIONES BASICAS\n\n");
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Division\n\n");

    printf("Selecciona tu operacion: ");
    scanf("%i", &option);

    printf("Digita tus 2 numeros\n");
    printf("Numero 1: ");
    scanf("%f", &num1);
    printf("Numero 2: ");
    scanf("%f", &num2);
    printf("\n\n");

    switch (option)
    {
    case 1:
        result = num1 + num2;
        break;

    case 2:
        result = num1 - num2;
        break;

    case 3:
        result = num1 * num2;
        break;

    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            // else para no poder dividir entre 0
            printf("ERROR - NO SE PUEDE DIVIDIR ENTRE CERO\n");
            system("PAUSE");
        }
        break;
    
    default:
        printf("ERROR - ESTA NO ES UNA OPCIÓN VALIDA");
        break;
    }
    return result;
}

//  Funcion para la segunda opcion en el main
int random_number()
{
    int random_num, correct_num;

    srand(time(NULL));
    random_num = rand() % 101 + 1;
        
    printf("Numero aleatorio generado\n¡Trata de adivinar el numero!\n\n");
        
    while (correct_num != random_num)
    {
        printf("Numero: ");
        scanf("%i", &correct_num);
            
        if (correct_num > random_num)
        {
            printf("¡Mas bajo!\n");
        }

        else if (correct_num < random_num)
        {
            printf("¡Mas alto!\n");
        }

        else
        {
            printf("¡Numero correcto, el numero era: %i", random_num);
        } 
    }
    return (random_num);
}

//  Funcion para la tercera opcion en el main
float area_calculator()
{
    int option;
    float result, base, altura, radio, lado;

    printf("CALCULADORA DE AREAS\n\n");
    printf("1.- Triangulo\n");
    printf("2.- Circulo\n");
    printf("3.- Rectangulo\n");
    printf("4.- Cubo\n");
    printf("5.- Cilindro\n\n");

    printf("Selecciona tu operacion: ");
    scanf("%i", &option);

    
    switch (option)
    {
    case 1:
        printf("Area de un triangulo\n");
        
        printf("\nBase: ");
        scanf("%f", &base);
        printf("\nAltura: ");
        scanf("%f", &altura);

        result = base * altura / 2;
        break;

    case 2:
        printf("Area de un circulo\n");

        printf("\nRadio: ");
        scanf("%f", &radio);

        result = PI * pow((radio), 2);
        break;

    case 3:
        printf("Area de un rectangulo\n");
        
        printf("\nBase: ");
        scanf("%f", &base);
        printf("\nAltura: ");
        scanf("%f", &altura);

        result = base * altura;
        break;

    case 4:
        printf("Area de un cubo\n");
        
        printf("Lado: ");
        scanf("%f", &lado);

        result = pow((6 * lado), 2);
        break;

    case 5:
        printf("Area de un cilindro\n");

        printf("Radio: ");
        scanf("%f", &radio);
        printf("Altura: ");
        scanf("%f", &altura);

        result = 2 * PI * radio * (radio + altura);
        break;

    default:
        printf("ERROR - ESTA ES UNA OPCION NO VALIDA");
        break;
    }        

    return result;
}