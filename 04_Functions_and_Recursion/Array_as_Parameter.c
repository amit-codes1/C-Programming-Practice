#include <stdio.h>
#include <stdlib.h>

int *arr(int size)
{
    int *p;

    p = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }

    return p;
}

int main()
{
    int *ptr;

    int sz = 10;

    ptr = arr(sz);

    for (int i = 0; i < sz; i++)
    {
        printf("%d  ", ptr[i]);
    }

    return 0;
}