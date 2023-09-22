#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void calculateFactorial();
int calculateFactorialR(int number);

int main()
{
    int option;

    printf("MENU: \n");
    printf("\t1.- Factorial Sin Recursion\n\t2.- Factorial Recursivo\n");
    printf("Selecciona una opcion: ");
    scanf("%i", &option);
    
    switch (option)
    {
    case 1:
        calculateFactorial();
        break;
    case 2:
        int number, result;
        printf("Enter a number to calculate its factorial: ");
        scanf("%i", &number);
        result = calculateFactorialR(number);
        printf("The factorial of %i is %i.\n", number, result);
        break;
    default:
        printf("Invalid option selected.\n");
        break;
    }

    return 0;
}

void calculateFactorial()
{
    int number, result = 1;
    char response[99];

    do {
        printf("Enter a number to calculate its factorial: ");
        scanf("%i", &number);

        if (number < 0)
        {
            printf("Factorial is not defined for negative numbers.\n");
        }
        else
        {
            for (int i = 1; i <= number; i++)
            {
                result *= i;
            }
            printf("The factorial of %i is %i.\n", number, result);
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf("%s", response);

        for (int i = 0; response[i]; i++)
        {
            response[i] = tolower(response[i]);
        }

        system("cls");
        result = 1;
    } while (strcmp(response, "y") == 0);

    printf("Thank you for using this program.\n");
}

int calculateFactorialR(int number)
{
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return -1;
    }
    if (number == 0)
    {
        return 1;
    }
    else
    {
        return number * calculateFactorialR(number - 1);
    }
}
