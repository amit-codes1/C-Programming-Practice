#include <stdio.h>
#include <stdlib.h>
/*
Write a program that:

Dynamically creates an array of size n.
Takes n integers.
Asks the user for the position of the element to delete.
Prints the updated array.
Frees the memory.
*/

int main()
{

    int n;

    printf("Enter number of integers to be stored in the Array: ");
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

    int index;

    printf("Enter the position of the element to delete from the Array: ");
    scanf("%d", &index);

    for (int i = index; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Array after removing the Element: \n");

    for (int i = 0; i < n - 1; i++)
    {
        printf("\t %d", arr[i]);
    }

    free(arr);

    arr = NULL;

    return 0;
}