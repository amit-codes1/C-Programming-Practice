#include <stdio.h>

/*
Take 10 integers in an array.
Check whether the array is in ascending order.
Print:
"Array is Sorted" or
"Array is not Sorted"
*/
int main()
{

    int arr[10];

    printf("Enter 10 integers: ");

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    int isSort = 1;

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSort = 0;
            break;
        }
    }

    if (isSort)
        printf("Array is Sorted");

    else
        printf("Array is not Sorted");

    return 0;
}