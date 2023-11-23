#include "junior.h"
#define MAX_REGISTERS 100

typedef struct _product
{
    int code;
    char name[50];
    float price;
    int stock;
} Tproduct;

int msges();
void menu();
void addProduct(Tproduct products[], int *count);
void removeProduct(Tproduct products[], int *count);
void showInventory(Tproduct products[], int count);
void totalValue(Tproduct products[], int count);

int main()
{
    srand(time(NULL));
    menu();

    return 0;
}

int msges()
{
    int option;

    printf("MENU");
    printf("\n\t1.- Add product");
    printf("\n\t2.- Remove product");
    printf("\n\t3.- Show inventory");
    printf("\n\t4.- Total inventory value");
    printf("\n\t5.- Salir\n\n");
    printf("Select an option: ");
    option = validate(1, 5);
    return option;
}

void menu()
{
    int option;
    Tproduct products[MAX_REGISTERS];
    int count = 0;

    do
    {
        option = msges();
        switch (option)
        {
        case 1:
            addProduct(products, &count);
            break;
        case 2:
            removeProduct(products, &count);
            break;
        case 3:
            showInventory(products, count);
            break;
        case 4:
            totalValue(products, count);
            break;
        case 5:
            printf("Thanks for use our program!\n");
            break;
        default:
            printf("Invalid option\n");
            break;
        }
        system("PAUSE");
    } while (option != 5);
}

/*
   Function: addProduct
   Description: Add a product to the inventory
   Input: products[] - Array of products
          *count - Pointer to the number of products
   Output: void
*/
void addProduct(Tproduct products[], int *count)
{
    int code;
    char name[50];
    float price;
    int stock;

    code = randomNumber(1, 1000);
    printf("Product code generated: %i\n", code);
    printf("Enter the product name: ");
    validateString(name, 50);
    printf("Enter the product price: ");
    price = validate(1, 10000);
    printf("Enter the product stock: ");
    stock = validate(1, 100);

    products[*count].code = code;
    strcpy(products[*count].name, name);
    products[*count].price = price;
    products[*count].stock = stock;

    *count += 1;

    printf("Product added successfully\n");
}

/*
    Function: removeProduct
    Description: Remove a product from the inventory
    Input: products[] - Array of products
           *count - Pointer to the number of products
    Output: void
*/
void removeProduct(Tproduct products[], int *count)
{
    int code, remove;
    int i;
    int found = 0;

    printf("Enter the product code: ");
    code = validate(1, 1000);

    printf("Enter the number of products to remove: ");
    remove = validate(1, 100);

    for (i = 0; i < *count; i++)
    {
        if (products[i].code == code)
        {
            found = 1;
        }
    }
    if (products[*count - 1].stock < remove)
    {
        found = 0;
        printf("Not enough stock\n");
    }

    if (found)
    {
        for (i = found; i < *count; i++)
        {
            products[i] = products[i + 1];
        }

        products[*count - 1].stock -= remove;

        if (products[*count].stock == 0)
        {
            *count -= 1;
        }
        printf("Product removed successfully\n");
    }
    else
    {
        printf("Product not found\n");
    }
}

/*
    Function: showInventory
    Description: Show the inventory
    Input: products[] - Array of products
           count - Number of products
    Output: void
*/
void showInventory(Tproduct products[], int count)
{
    int i;

    printf("CODE\tNAME\tPRICE\tSTOCK\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t%.2f\t%d\n", products[i].code, products[i].name, products[i].price, products[i].stock);
    }
}

/*
    Function: totalValue
    Description: Calculate the total value of the inventory
    Input: products[] - Array of products
           count - Number of products
    Output: void
*/
void totalValue(Tproduct products[], int count)
{
    int i;
    float total = 0;

    for (i = 0; i < count; i++)
    {
        total += products[i].price * products[i].stock;
    }

    printf("Total value of the inventory: %.2f\n", total);
}

// Path: Practica8_Estructuras\junior.h