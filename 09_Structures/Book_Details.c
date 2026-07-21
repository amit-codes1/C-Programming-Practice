#include <stdio.h>
#include <string.h>
/*
Create a structure Book containing:
Book Name
Author Name
Price
*/

struct Book_Details
{
    char book[50];
    char author[50];
    float price;
};

int main()
{

    struct Book_Details b[3];

    for (int i = 0; i < 3; i++)
    {
        printf("---- Enter Details ---- \n");

        printf("Book Name: ");
        fgets(b[i].book, sizeof(b[i].book), stdin);
        b[i].book[strcspn(b[i].book, "\n")] = '\0';

        printf("Author Name: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn(b[i].author, "\n")] = '\0';

        printf("Price: ");
        scanf("%f", &b[i].price);

        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("---- Book Details ---- \n");

        printf("Book Name: %s \n", b[i].book);
        printf("Author Name: %s \n", b[i].author);
        printf("Book Price: %.2f \n", b[i].price);
    }
    return 0;
}