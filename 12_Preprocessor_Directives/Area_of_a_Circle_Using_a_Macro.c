#include <stdio.h>
#define PI 3.14159
/*
Write a program that:

Defines PI using #define.
Takes the radius from the user.
Calculates and prints the area of the circle
*/

int main()
{

    float radius;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    float area = PI * (radius * radius);

    printf("Area of the Circle: %f", area);

    return 0;
}