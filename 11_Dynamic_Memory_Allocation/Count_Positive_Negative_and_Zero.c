#include <stdio.h>
#include <stdlib.h>
/*
Write a program that:

Dynamically allocates memory for n integers.
Takes input from the user.
Counts how many numbers are:
Positive
Negative
Zero
Prints the counts.
Frees the memory.
*/

int main()
{

    int n;

    printf("Enter Number of Integers to be stored: ");
    scanf("%d", &n);

    int *arr;

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!!");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Integer: ");
        scanf("%d", &arr[i]);
    }

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        if (arr[i] < 0)
        {
            negative++;
        }
        if (arr[i] == 0)
        {
            zero++;
        }
    }

    printf("Total Number of Positive Integers are: %d \n", positive);
    printf("Total Number of Negative Integers are: %d \n", negative);
    printf("Total Number of Zero Integers are: %d \n", zero);

    free(arr);

    arr = NULL;

    return 0;
}