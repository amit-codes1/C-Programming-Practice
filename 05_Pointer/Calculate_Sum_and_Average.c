#include <stdio.h>

/*
A function that takes two integers and uses pointers to store:

Sum
Average
*/

int sum(int, int);
float avg(float, float);

int sum(int a, int b)
{
    int *ptr = &a;
    int *ptr_1 = &b;
    return *ptr + *ptr_1;
}

float avg(float a, float b)
{
    float *ptr_2 = &a;
    float *ptr_3 = &b;
    return (*ptr_2 + *ptr_3) / 2;
}

int main()
{

    int a, b;

    printf("Enter number a:");
    scanf("%d", &a);

    printf("Enter number b:");
    scanf("%d", &b);

    printf("Sum of %d and %d is %d \n", a, b, sum(a, b));
    printf("Average of %d and %d is %.2f \n", a, b, avg(a, b));
    return 0;
}