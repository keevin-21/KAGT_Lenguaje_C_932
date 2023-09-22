/*
Kevin Alejandro Gonzalez Torres - 372354

Creado el: 20 de Septiembre del 2023 / Modificado el 21 de Septiembre del 2023

Practica 4:
    1. Fibonacci without recursion
    2. Fibonacci with recursion
    3. Pascal's triangle
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void fibonacciWithoutRecursion(int number);
int fibonacciWithRecursion(int number);
void pascalTriangle();

int main()
{
    int option, number, result;
    char response[2];

    // Display a menu to the user
    printf("MENU:\n");
    printf("\t1.- Fibonacci without recursion\n\t2.- Fibonacci with recursion\n\t3.- Pascal's triangle\n");
    printf("Select an option: ");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        do
        {
            printf("Enter a number to calculate its Fibonacci sequence: ");
            scanf("%i", &number);
            fibonacciWithoutRecursion(number);
            printf("Want to perform another operation? (y/n): \n");
            scanf("%s", response);

            // Convert the user's response to lowercase for case-insensitive comparison
            for (int i = 0; response[i]; i++)
            {
                response[i] = tolower(response[i]);
            }
        } while (strcmp(response, "y") == 0);

        printf("Thanks for using this program.");
        break;

    case 2:
        do
        {
            printf("Enter a number to calculate its Fibonacci sequence: ");
            scanf("%i", &number);
            result = fibonacciWithRecursion(number);
            printf("The %i-th Fibonacci number is: %i\n", number, result);
            printf("Want to perform another operation? (y/n): \n");
            scanf("%s", response);

            // Convert the user's response to lowercase for case-insensitive comparison
            for (int i = 0; response[i]; i++)
            {
                response[i] = tolower(response[i]);
            }
        } while (strcmp(response, "y") == 0);
        break;

    case 3:
        do
        {
            pascalTriangle();
            printf("Want to perform another operation? (y/n): \n");
            scanf("%s", response);

            // Convert the user's response to lowercase for case-insensitive comparison
            for (int i = 0; response[i]; i++)
            {
                response[i] = tolower(response[i]);
            }
        } while (strcmp(response, "y") == 0);
        break;

    default:
        break;
    }
}

// Function to calculate the Fibonacci sequence without recursion
void fibonacciWithoutRecursion(int number)
{
    int n1 = -1, n2 = 1, aux = n1 + n2;

    // Calculate and print the Fibonacci sequence
    for (int i = 0; i < number; i++)
    {
        aux = n1 + n2;
        n1 = n2;
        n2 = aux;
        printf("%i\n", aux);
    }
}

// Function to calculate the Fibonacci sequence with recursion
int fibonacciWithRecursion(int number)
{
    if (number <= 1)
    {
        return number;
    }
    else
    {
        return fibonacciWithRecursion(number - 1) + fibonacciWithRecursion(number - 2);
    }
}

// Function to display Pascal's triangle
void pascalTriangle()
{
    int number;
    printf("Enter the number of lines in Pascal's triangle: ");
    scanf("%i", &number);

    for (int line = 1; line <= number; line++)
    {
        // Print leading spaces for formatting
        for (int space = 1; space <= number - line; space++)
            printf("  ");

        int coef = 1;
        for (int i = 1; i <= line; i++)
        {
            // Print coefficients with formatting
            printf("%4d", coef);
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }
}
