#include <stdio.h>

int greatest(int, int, int);

int greatest(int a, int b, int c)
{
    int *ptr = &a;
    int *ptr_1 = &b;
    int *ptr_2 = &c;

    if (*ptr > *ptr_1 && *ptr > *ptr_2)
        return *ptr;

    else if (*ptr_1 > *ptr && *ptr_1 > *ptr_2)
        return *ptr_1;

    else
        return *ptr_2;
}

int main()
{

    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a == b || a == c || b == c)
    {
        printf("Please enter distinct values.");
        return 0;
    }

    printf("The greatest of three numbers is : %d", greatest(a, b, c));

    return 0;
}