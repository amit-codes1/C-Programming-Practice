#include <stdio.h>
#include <string.h>
/*
Create a structure Product containing:
Product Name
Product ID
Price
Quantity

Store details of 5 products.

Calculate and display:

Total value of each product

Also display the product with the highest total value.
*/

struct Product
{
    char Name[100];
    char id[10];
    float price;
    int quantity;
};

int main()
{

    struct Product p[5];

    for (int i = 0; i < 5; i++)
    {
        printf("---- Enter Product details ----\n");

        printf("Enter Product Name: ");
        fgets(p[i].Name, sizeof(p[i].Name), stdin);
        p[i].Name[strcspn(p[i].Name, "\n")] = '\0';

        printf("Enter Product Id: ");
        fgets(p[i].id, sizeof(p[i].id), stdin);
        p[i].id[strcspn(p[i].id, "\n")] = '\0';

        printf("Enter Price: ");
        scanf("%f", &p[i].price);

        printf("Enter Quantity: ");
        scanf("%d", &p[i].quantity);

        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("---- Total Value ----\n");

        printf("Product Name: %s \n", p[i].Name);
        printf("Total Value: %.2f \n", p[i].price * p[i].quantity);
    }

    float highest = 0;
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        if ((p[i].price * p[i].quantity) > highest)
        {
            highest = p[i].price * p[i].quantity;
            index = i;
        }
    }

    printf("---- Product with the Highest Total Value ----\n");

    printf("Product Name: %s \n", p[index].Name);
    printf("Product Id: %s \n", p[index].id);
    printf("Product Price: %.2f \n", p[index].price);
    printf("Product Quantity: %d \n", p[index].quantity);

    return 0;
}