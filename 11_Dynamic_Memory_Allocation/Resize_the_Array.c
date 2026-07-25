#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Write a program that:

Asks the user for an initial size n.
Allocates memory using malloc().
Takes n integers.
Asks how many more elements the user wants to add.
Uses realloc() to increase the array size.
Takes the new elements.
Prints the complete array.
Frees the memory.
*/

int main()
{

    int n;

    printf("Enter Number of Integers to be stored in the array: ");
    scanf("%d", &n);

    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Numbers: ");
        scanf("%d", &arr[i]);
    }

    char response[10];

    int m = 0;
    int total = n;

    printf("Do you want to add more elements to the Array?? Enter Yes/No: ");
    scanf("%s", response);

    char respose_1 = toupper(response);

    if (strcmp(response, respose_1) == 0)
    {
        printf("Enter extra number of Integers you want to store in the Array : ");
        scanf("%d", &m);

        int *temp;

        temp = realloc(arr, (n + m) * sizeof(int));

        if (temp == NULL)
        {
            printf("Memory Allocation Failed!! \n");
            free(arr);
            return 1;
        }

        arr = temp;
        total = n + m;

        printf("---- Adding More Elements ---- \n");

        for (int i = n; i < total; i++)
        {
            printf("Enter Number: ");
            scanf("%d", &arr[i]);
        }
    }

    printf("---- Complete Array after taking Elements from the User ---- \n");

    for (int i = 0; i < total; i++)
    {
        printf("\t %d", arr[i]);
    }

    free(arr);

    arr = NULL;

    return 0;
}