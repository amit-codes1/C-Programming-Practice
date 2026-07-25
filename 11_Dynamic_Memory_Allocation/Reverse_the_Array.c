#include <stdio.h>
#include <stdlib.h>
/*
Write a program that:

Dynamically allocates memory for an integer array.
Takes n integers as input.
Prints the array in reverse order.
Frees the memory.
*/
int main()
{

    int n;

    printf("Enter Number of Integers to be stored: ");
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
        printf("Enter Number: ");
        scanf("%d", &arr[i]);
    }

    printf("Array in Reverse: \n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("\t %d", arr[i]);
    }

    free(arr);

    arr = NULL;

    return 0;
}