#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    struct Rectangle r = {10, 5};

    printf("Length: %d \n", r.length);
    printf("Breadth: %d \n", r.breadth);

    return 0;
}