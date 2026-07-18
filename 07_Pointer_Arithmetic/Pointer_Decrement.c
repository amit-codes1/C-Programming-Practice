#include <stdio.h>

/*
Create an integer variable num.
Store its address in a pointer ptr.
Print the address of num.
Decrease the pointer using ptr--.
Print the updated address.
*/

int main()
{

    int num[] = {25,30,35};

    int *ptr = &num[1];

    printf("The address before decrement is: %p \n", (void*)ptr);

    ptr--;

    printf("The address after decrement is: %p \n", (void*)ptr);

    return 0;
}