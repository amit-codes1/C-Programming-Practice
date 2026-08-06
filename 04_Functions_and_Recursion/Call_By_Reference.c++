#include <stdio.h>

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    int b = 15;

    swap(a, b);

    printf("a: %d \n", a);
    printf("b: %d \n", b);

    return 0;
}