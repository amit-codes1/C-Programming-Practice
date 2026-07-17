#include <stdio.h>

/*
Take 10 integers in an array.
Find the larger of the first two elements.
Count how many of the remaining elements are greater than that number.
*/

int main()
{

    int arr[10];

    printf("Enter 10 elements: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int larger;

    if (arr[0] > arr[1])
    {
        larger = arr[0];
    }

    else if (arr[1] > arr[0])
    {
        larger = arr[1];
    }

    int count = 0;

    for (int i = 2; i < 10; i++)
    {
        if (arr[i] > larger)
            count++;

        else
            count == 0;
    }

    printf("The remaining elements that are greater than %d is %d", larger, count);

    return 0;
}