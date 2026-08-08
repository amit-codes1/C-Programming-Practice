#include <stdio.h>
#include <string.h>
/*
Create a structure Book containing:

Title
Author
Price

Create:

a typedef for the structure
another typedef for a pointer to the structure

Allocate one structure variable (no dynamic memory needed), access its members using the pointer typedef, and print the details.
*/

typedef struct
{
    char title[20];
    char author[30];
    float price;
} Book;

typedef Book *bookptr;

int main()
{
    Book b[2];

    bookptr ptr = b;

    for (int i = 0; i < 2; i++)
    {
        printf("---- Enter Details ----\n");

        printf("Enter Book Name: ");
        fgets(ptr->title, sizeof(ptr->title), stdin);
        ptr->title[strcspn(ptr->title, "\n")] = '\0';

        printf("Enter Author Name: ");
        fgets(ptr->author, sizeof(ptr->author), stdin);
        ptr->author[strcspn(ptr->author, "\n")] = '\0';

        printf("Enter Price: ");
        scanf("%f", &ptr->price);
        getchar();

        ptr++;
    }

    ptr = b;

    for (int i = 0; i < 2; i++)
    {
        printf("---- Book Details ---- \n\n");

        printf("Title: %s\n\n", ptr->title);

        printf("Author Name: %s\n\n", ptr->author);

        printf("Price: %.2f\n\n", ptr->price);

        ptr++;
    }

    return 0;
}