#include <stdio.h>
#include <stdlib.h>
/*
Write a program that:

Dynamically allocates memory for n integers.
Takes input from the user.
Finds and prints the sum of all elements.
Frees the memory.
*/

int main()
{

    int n;

    printf("Enter Number of integers to be stored: ");
    scanf("%d", &n);

    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Integer: ");
        scanf("%d", &ptr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + ptr[i];
    }

    printf("Sum of all the integers entered by the user is : %d", sum);

    free(ptr);

    ptr = NULL;

    return 0;
}