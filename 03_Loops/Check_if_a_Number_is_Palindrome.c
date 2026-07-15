#include <stdio.h>

// A palindrome number reads the same forwards and backwards.

int main()
{
    int num, original, palindrome = 0, check;

    printf("Enter number to check Palindrome: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        check = num % 10;
        palindrome = palindrome * 10 + check;
        num = num / 10;
    }
    if (palindrome == original)
    {
        printf("Entered number is Palindrome");
    }

    else
        printf("Entered number is not Palindrome");

    return 0;
}