#include <stdio.h>

/*
Create an integer variable num and store any value.
Create a pointer ptr pointing to num.
Print the value of num using *ptr.
Increment the pointer using ptr++.
Print the new address stored in ptr.
*/

int main()
{

    int num[] = {20,30,40};

    int *ptr = num;
    printf("The value of num is %d \n", *ptr);
    printf("The address of pointer before increment: %p \n", (void*)ptr);

    ptr++;
    printf("The address of pointer after increment: %p \n", (void*)ptr);

    return 0;
}