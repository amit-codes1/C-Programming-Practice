#include <stdio.h>
#include <string.h>
/*
Create a structure Book containing:

Book Name
Author Name
Price

Store details of n books.
n->No.of books entered by user.

Find and display:

The most expensive book.
Its complete details (Book Name, Author Name, Price).
*/

struct Book
{
    char name[50];
    char author[50];
    float price;
};

int main()
{

    int n;

    printf("Enter the number of books to store details: ");
    scanf("%d", &n);
    getchar();

    struct Book b[n];

    for (int i = 0; i < n; i++)
    {
        printf("---- Enter Book Details ----\n");

        printf("Book Name: ");
        fgets(b[i].name, sizeof(b[i].name), stdin);
        b[i].name[strcspn(b[i].name, "\n")] = '\0';

        printf("Author Name: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn(b[i].author, "\n")] = '\0';

        printf("Book Price: ");
        scanf("%f", &b[i].price);

        getchar();
    }

    float expensive = 0;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (b[i].price > expensive)
        {
            expensive = b[i].price;
            index = i;
        }
    }

    printf("---- Details of the most expensive Book ----\n");

    printf("\t   Book Name: %s \n", b[index].name);
    printf("\t   Author Name: %s \n", b[index].author);
    printf("\t   Book Price %.2f \n", b[index].price);

    return 0;
}