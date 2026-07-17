#include <stdio.h>

/*
Take 10 integers in an array.
Print the SECOND LARGEST element.
Assume all numbers are different.
*/

int main()
{

    int arr[10];

    printf("Enter 10 elements in array: ");

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest, second_largest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (int i = 2; i <= 9; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }

        else if (arr[i] > second_largest)
            second_largest = arr[i];
    }

    printf("The Second Largest number in the array is %d", second_largest);

    return 0;
}