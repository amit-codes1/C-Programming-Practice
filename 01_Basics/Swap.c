#include <stdio.h>

int main()
{
    int a, b, *ptr = &a, *ptr_1 = &b;

    printf("Enter a and b: ");
    scanf("%d %d", ptr, ptr_1);

    int swap = *ptr;
    *ptr = *ptr_1;
    *ptr_1 = swap; 

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

