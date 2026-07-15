#include <stdio.h>

int main()
{

    int num, original, check, cube = 0;

    printf("Enter number to check Armstrong: ");
    scanf("%d", &num);

    original = num;

    while (num > 0)
    {
        check = num % 10;
        cube = cube + (check * check * check);
        num = num / 10;
    }

    if (cube == original)
    {
        printf("Entered number is Armstrong number.");
    }

    else
        printf("Entered number is not Armstrong number.");

    return 0;
}