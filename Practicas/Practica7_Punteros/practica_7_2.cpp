#include <stdio.h>
#include <string.h>

#define NUM_FRUITS 5

int main()
{
    char *fruits[NUM_FRUITS] = {"manzana", "banana", "cereza", "uva", "naranja"};

    for (int i = 0; i < NUM_FRUITS - 1; i++)
    {
        for (int j = i + 1; j < NUM_FRUITS; j++)
        {
            if (strcmp(fruits[i], fruits[j]) > 0)
            {
                char *temp = fruits[i];
                fruits[i] = fruits[j];
                fruits[j] = temp;
            }
        }
    }
    
    printf("Fruits in alphabetical order:\n");
    for (int i = 0; i < NUM_FRUITS; i++)
    {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
