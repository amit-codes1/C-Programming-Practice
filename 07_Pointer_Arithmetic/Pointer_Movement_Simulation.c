#include <stdio.h>

/*
Create an integer pointer ptr.
Store the address of an integer variable.
Perform these operations:
Move pointer forward by 3 positions.
Move pointer backward by 2 positions.
Print the final address.
*/

int main()
{

    int num[] = {100,200,300,400,500};

    int *ptr = num;
    printf("The address of pointer before: %p \n", (void *)ptr);

    // Operations Performed:

    ptr = ptr + 3;
    ptr = ptr - 2;

    printf("The final address is %p", (void *)ptr);

    return 0;
}