#include <stdio.h>
#include <string.h>
/*
Create a structure named Product containing:

name — character array of size 30
category — character array of size 20
price — float
quantity — integer
Requirements:
Use typedef so you can write Product instead of struct Product.
Create another typedef named ProductPtr for a pointer to Product.

Create an array for 3 products:

Product products[3];
Create a ProductPtr pointer and use it to:
Take input for all 3 products.
Display all 3 products.
Access the structure members using the -> operator, not the . operator while using the pointer.
*/

typedef struct
{
    char name[30];
    char category[20];
    float price;
    int qty;
} Product;

typedef Product *Productptr;

int main()
{

    Product p[3];

    Productptr ptr = p;

    for (int i = 0; i < 3; i++)
    {
        printf("---- Enter Product Details ---- \n");

        printf("Enter Product Name: ");
        fgets(ptr->name, sizeof(ptr->name), stdin);
        ptr->name[strcspn(ptr->name, "\n")] = '\0';

        printf("Enter Category: ");
        fgets(ptr->category, sizeof(ptr->category), stdin);
        ptr->category[strcspn(ptr->category, "\n")] = '\0';

        printf("Enter Price: ");
        scanf("%f", &ptr->price);

        printf("Enter Quantity: ");
        scanf("%d", &ptr->qty);

        getchar();

        ptr++;
    }

    ptr = p;

    for (int i = 0; i < 3; i++)
    {
        printf("---- Product Detail ---- \n\n");

        printf("Product Name: %s \n\n", ptr->name);

        printf("Category: %s \n\n", ptr->category);

        printf("Price: %.3f \n\n", ptr->price);

        printf("Quantity: %d \n\n", ptr->qty);

        ptr++;
    }

    return 0;
}