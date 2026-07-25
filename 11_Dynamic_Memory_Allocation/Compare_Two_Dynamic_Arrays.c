#include <stdio.h>
#include <stdlib.h>
/*
Write a program that:

Asks the user for the size n.
Dynamically creates two arrays of size n.
Takes input for both arrays.
Checks whether both arrays contain exactly the same elements in the same order.

Prints:
Arrays are equal.

or

Arrays are not equal.
Free both arrays.
*/

int main()
{

    int n;

    printf("Enter Number of Integers to be stored in the array: ");
    scanf("%d", &n);

    int *arr;
    int *arr_1;

    arr = (int *)malloc(n * sizeof(int));
    arr_1 = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    if (arr_1 == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    printf("---- Enter Integers for First Array ---- \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    printf("---- Enter Integers for Second Array ---- \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &arr_1[i]);
    }

    int compare = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr_1[i])
        {
            compare = 1;
        }
        else
            compare = 0;
    }

    printf("\n");

    if (compare == 1)
    {
        printf("Both Arrays are Equal.");
    }

    else if (compare == 0)
    {
        printf("Arrays are not Equal !!");
    }

    free(arr);
    free(arr_1);

    arr = NULL;
    arr_1 = NULL;

    return 0;
}