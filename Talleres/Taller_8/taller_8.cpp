#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 100
#define COLS 15

int requestNumber();
void fillMatrix(int matrix[][COLS], int rows, int cols);

void printMatrixMethod1(int matrix[][COLS], int rows, int cols);
void printMatrixMethod2(int *ptr, int rows, int cols);
void printMatrixMethod3(int (*matrix)[COLS], int rows, int cols);
void printMatrixMethod4(int **ptr, int rows, int cols);
void printMatrixMethod5(int *q[], int rows, int cols);

void linearSearchMethod1(int matrix[][COLS], int rows, int cols, int num);
void linearSearchMethod2(int *ptr, int rows, int cols, int num);
void linearSearchMethod3(int (*matrix)[COLS], int rows, int cols, int num);
void linearSearchMethod4(int **ptr, int rows, int cols, int num);
void linearSearchMethod5(int *q[], int rows, int cols, int num);

int main()
{
    srand(time(NULL));
    clock_t start, end;
    double timeMethod1 = 0, timeMethod2 = 0, timeMethod3 = 0, timeMethod4 = 0, timeMethod5 = 0;

    int op, num, i, k, n;
    int b[ROWS][COLS];
    int *q[ROWS];

    for (i = 0; i < ROWS; i++)
    {
        q[i] = b[i];
    }

    fillMatrix(b, ROWS, COLS);

    printf("Enter the number of times you want to iterate the searches: ");
    scanf("%d", &n);

    int searchNumbers[n];

    for (i = 0; i < n; i++)
    {
        searchNumbers[i] = rand() % 1000;
    }

    for (k = 0; k < n; k++)
    {
        num = searchNumbers[k];

        printf("Iteration %d\n", k + 1);

        printf("Method 1\n");
        start = clock();
        printMatrixMethod1(b, ROWS, COLS);
        linearSearchMethod1(b, ROWS, COLS, num);
        end = clock();
        timeMethod1 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Method 2\n");
        start = clock();
        printMatrixMethod2(&b[0][0], ROWS, COLS);
        linearSearchMethod2(&b[0][0], ROWS, COLS, num);
        end = clock();
        timeMethod2 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Method 3\n");
        start = clock();
        printMatrixMethod3(b, ROWS, COLS);
        linearSearchMethod3(b, ROWS, COLS, num);
        end = clock();
        timeMethod3 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Method 4\n");
        start = clock();
        printMatrixMethod4(q, ROWS, COLS);
        linearSearchMethod4(q, ROWS, COLS, num);
        end = clock();
        timeMethod4 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Method 5\n");
        start = clock();
        printMatrixMethod5(q, ROWS, COLS);
        linearSearchMethod5(q, ROWS, COLS, num);
        end = clock();
        timeMethod5 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("\n");
    }

    printf("Total time for Method 1: %f seconds\n", timeMethod1);
    printf("Total time for Method 2: %f seconds\n", timeMethod2);
    printf("Total time for Method 3: %f seconds\n", timeMethod3);
    printf("Total time for Method 4: %f seconds\n", timeMethod4);
    printf("Total time for Method 5: %f seconds\n", timeMethod5);

    return 0;
}

void fillMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 1000;
        }
    }
}

int requestNumber()
{
    int num;
    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    return num;
}

void printMatrixMethod1(int matrix[][COLS], int rows, int cols)
{
    int i, j;
    printf("The matrix is: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printMatrixMethod2(int *ptr, int rows, int cols)
{
    int i, j;
    printf("The matrix is: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", *(ptr + i * cols + j));
        }
        printf("\n");
    }
    printf("\n");
}

void printMatrixMethod3(int (*matrix)[COLS], int rows, int cols)
{
    int i, j;
    printf("The matrix is: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printMatrixMethod4(int **ptr, int rows, int cols)
{
    int i, j;
    printf("The matrix is: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printMatrixMethod5(int *q[], int rows, int cols)
{
    int i, j;
    printf("The matrix is: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void linearSearchMethod1(int matrix[][COLS], int rows, int cols, int num)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] == num)
            {
                printf("Number %d found at position [%d][%d]\n", num, i, j);
                return;
            }
        }
    }
    printf("Number %d not found\n", num);
}

void linearSearchMethod2(int *ptr, int rows, int cols, int num)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (*(ptr + i * cols + j) == num)
            {
                printf("Number %d found at position [%d][%d]\n", num, i, j);
                return;
            }
        }
    }
    printf("Number %d not found\n", num);
}

void linearSearchMethod3(int (*matrix)[COLS], int rows, int cols, int num)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] == num)
            {
                printf("Number %d found at position [%d][%d]\n", num, i, j);
                return;
            }
        }
    }
    printf("Number %d not found\n", num);
}

void linearSearchMethod4(int **ptr, int rows, int cols, int num)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (ptr[i][j] == num)
            {
                printf("Number %d found at position [%d][%d]\n", num, i, j);
                return;
            }
        }
    }
    printf("Number %d not found\n", num);
}

void linearSearchMethod5(int *q[], int rows, int cols, int num)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (q[i][j] == num)
            {
                printf("Number %d found at position [%d][%d]\n", num, i, j);
                return;
            }
        }
    }
    printf("Number %d not found\n", num);
}
