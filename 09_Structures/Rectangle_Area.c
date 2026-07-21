#include <stdio.h>
/*
Create a structure Rectangle containing:
Length
Width

Calculate and display:
Area
Perimeter
*/

struct Rectangle_Area
{
    float length, width;
};

int main()
{

    struct Rectangle_Area ra[1];

    for (int i = 0; i < 1; i++)
    {
        printf("Enter length: ");
        scanf("%f", &ra[i].length);

        printf("Enter width: ");
        scanf("%f", &ra[i].width);

        printf("---- Area and Perimeter of Rectangle are ---- \n");

        printf("Area of Rectangle: %.2f \n", ra[i].length * ra[i].width);
        printf("Perimeter of Rectangle: %.2f", 2 * (ra[i].length + ra[i].width));
    }
    return 0;
}
