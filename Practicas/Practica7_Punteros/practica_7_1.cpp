#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiplication(int num1, int num2);
float divide(int num1, int num2);

int main(int argc, char *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (argc != 3)
    {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 0;
    }

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtract: %d\n", subtract(num1, num2));
    printf("Multiply: %d\n", multiplication(num1, num2));
    printf("Divide: %.2f\n", divide(num1, num2));

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

float divide(int num1, int num2)
{
    if (num2 != 0)
    {
        return (float)num1 / num2;
    }
    else
    {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }
}
