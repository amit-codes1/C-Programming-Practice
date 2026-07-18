#include <stdio.h>

/*
Create an integer array of 10 elements.
Create an integer pointer ptr and store the address of the first element of the array.
Print all array elements using only pointer arithmetic.
*/

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = &arr[0];

    printf("All elements in the array is: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", *(ptr + i));
    }

    return 0;
}