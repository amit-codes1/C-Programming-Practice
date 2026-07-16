#include <stdio.h>

/*
Declare an integer variable num = 25.
Create a pointer to num.

Print:
Value of num
Address of num
Value stored in the pointer
*/

int main()
{

    int num = 25;

    int *ptr = &num;

    printf("The value of num is %d \n", num);
    printf("Address of %d is %p \n", num, &num);
    printf("Value stored in pointer is %d \n", *ptr);

    return 0;
}