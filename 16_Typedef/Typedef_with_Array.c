#include <stdio.h>
/*
Create a typedef for an array of 10 integers.

Store 10 numbers.
Find and print the largest number.
*/

typedef int array[10];

int main()
{

    array arr;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number:  ");
        scanf("%d", &arr[i]);
    }

    int largest = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest Value in the Array is: %d", largest);

    return 0;
}