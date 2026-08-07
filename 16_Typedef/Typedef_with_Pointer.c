#include <stdio.h>
/*
Create a typedef named IntPtr for a pointer to int.

Declare an integer.
Create a pointer using IntPtr.
Print:
Value of the integer
Address of the integer
Value using the pointer
*/

typedef int *Intptr;

int main()
{

    int a = 0;
    int b = 0;

    printf("Enter Number: ");
    scanf("%d", &a);

    printf("Enter another Number: ");
    scanf("%d", &b);

    Intptr ptr = &a, ptr1 = &b;

    printf("---- First Integer Deatils ---- \n \n");

    printf("Value of the the First Integer: %d \n \n", a);

    printf("Address of %d: %p \n \n", a, ptr);

    printf("Value Stored in the first Pointer: %d \n \n", *ptr);

    printf("---- Second Integer Deatils ---- \n \n");

    printf("Value of the the Second Integer: %d \n \n", b);

    printf("Address of %d: %p \n \n", b, ptr1);

    printf("Value Stored in the first Pointer: %d \n \n", *ptr1);

    return 0;
}