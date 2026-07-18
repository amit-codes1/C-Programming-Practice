#include <stdio.h>

/*
Create two integer pointers.
Make both pointers point to different memory locations.
Calculate how many integer positions apart they are.
*/

int main()
{

    int num[] = {10, 20, 30, 1, 2, 3, 40, 4};

    int *ptr = &num[1];
    int *ptr_1 = &num[6];

    int diff = ptr_1 - ptr;

    printf("The integer position difference is: %d", diff);

    return 0;
}