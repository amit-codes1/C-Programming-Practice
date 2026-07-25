#include <stdio.h>
#include <stdlib.h>
/*
Write a program that:

Dynamically creates an array using malloc().
Stores n integers.
Finds and prints the largest element.
Frees the memory.
*/
int main()
{

    int n;

    printf("Enter number of Integers to be stored: ");
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

    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest Number entered by User is : %d", largest);

    free(arr);

    arr = NULL;

    return 0;
}