#include <stdio.h>

int isEven(int);

int isEven(int x)
{
    if (x % 2 == 0)
    {
        printf("Entered number is even.\n");
        return 1;
    }

    else
    {
        printf("Entered number is odd.");
        return 0;
    }
}

int main()
{

    int x;

    printf("Enter number to check: ");
    scanf("%d", &x);

    int result = isEven(x);

    return 0;
}