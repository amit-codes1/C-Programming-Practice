#include <stdio.h>

/*
Write a program to:

Input an integer from the user.
Create a pointer to it.
Increase the value by 10 using the pointer only.
Print the updated value.
*/

int main()
{

    int num, num_1 = 10;

    printf("Enter number: ");
    scanf("%d", &num);

    int *ptr = &num;
    int *ptr_1 = &num_1;

    int value = *ptr + *ptr_1;

    printf("The updated value is:%d ", value);

    return 0;
}