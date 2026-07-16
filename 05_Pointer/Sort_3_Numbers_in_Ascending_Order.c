#include <stdio.h>

void sort(int *a, int *b, int *c)
{
    int temp;

    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
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

    sort(&a, &b, &c);

    printf("In Ascending Order: %d %d %d \n", a, b, c);

    return 0;
}