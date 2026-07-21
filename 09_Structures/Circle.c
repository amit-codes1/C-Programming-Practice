#include <stdio.h>
/*
Create a structure Circle containing:
Radius

Calculate and print:
Diameter
Circumference
Area
*/

struct Circle
{
    float radius;
};

int main()
{

    struct Circle circle;

    printf("Enter Radius: ");
    scanf("%f", &circle.radius);

    printf("Diameter of the circle: %.2f \n", 2 * circle.radius);
    printf("Circumference of the circle: %.2f \n", 2 * 3.14 * circle.radius);
    printf("Area of the circle: %.2f \n", 3.14 * (circle.radius * circle.radius));

    return 0;
}