#include <stdio.h>

/*
Create two integer pointers ptr1 and ptr2.
Assign them different memory addresses.
Find the difference between them using subtraction.
*/

int main()
{

    int num = 10, num_1 = 15;

    int *ptr = &num;
    int *ptr_1 = &num_1;

    printf("The address of first pointer is: %p\n", (void *)ptr);
    printf("The address of second pointer is: %p\n", (void *)ptr_1);

    int diff = ptr - ptr_1;

    printf("The difference between the two pinters are :%p", diff);

    return 0;
}