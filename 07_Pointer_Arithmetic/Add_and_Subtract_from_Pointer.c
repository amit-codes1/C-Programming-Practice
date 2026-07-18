#include <stdio.h>

/*
Create an integer variable.
Store its address in a pointer.
Print:
Address stored in ptr
Address after ptr + 1
Address after ptr + 2
Address after ptr - 1
*/

int main()
{

    int num = 50;

    int *ptr = &num;

    printf("Address stored in pointer: %p \n", (void*)ptr);

    ptr = ptr + 1;
    printf("Address of pointer after adding 1 element: %p \n", (void*)ptr);

    ptr = ptr + 2;
    printf("Address of pointer after adding 2 element: %p \n", (void*)ptr);

    ptr = ptr - 1;
    printf("Address of pointer after subtracting 1 element: %p \n", (void*)ptr);

    return 0;
}