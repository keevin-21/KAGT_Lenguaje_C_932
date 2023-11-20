#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int *ptr = &matrix[0][0];
    int sum = 0;
    int max = *ptr;
    int row_max, col_max;

    for (int i = 0; i < ROWS * COLS; i++)
    {
        sum += *(ptr + i);
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            int current = *(ptr + i * COLS + j);
            if (current > max)
            {
                max = current;
                row_max = i;
                col_max = j;
            }
        }
    }

    printf("Sum of all elements: %d\n", sum);
    printf("Largest element: %d\n", max);
    printf("Position of the largest element: Row %d, Column %d\n", row_max + 1, col_max + 1);

    return 0;
}
