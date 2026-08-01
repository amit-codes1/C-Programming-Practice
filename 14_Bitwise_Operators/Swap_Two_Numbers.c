#include <stdio.h>

int main()
{

    int num, num_1;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Enter another Number: ");
    scanf("%d", &num_1);

    printf("---- Number before Swapping ---- \n");

    printf("a: %d \n", num);
    printf("b: %d \n", num_1);

    num = num ^ num_1;
    num_1 = num_1 ^ num;
    num = num ^ num_1;

    printf("---- Numbers after Swapping ---- \n");

    printf("a: %d \n", num);
    printf("b: %d \n", num_1);

    return 0;
}