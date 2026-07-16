#include <stdio.h>

int isPrime(int);

int isPrime(int num)
{
    if (num <= 1)
        return 0;

    else if (num > 1)
    {
        for (int i = 2; i < num - 1; i++)
        {
            if (num % i == 0)
                return 0;
        }
    }
    else
        return 1;
}

int main()
{

    int num;

    printf("Enter number to check: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is prime", num);

    else
        printf("%d is not Prime", num);

    return 0;
}