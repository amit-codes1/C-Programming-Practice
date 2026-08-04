#include <stdio.h>
/*
Create an enum:

HR = 101,
SALES,
MARKETING,
IT,
FINANCE

Store one department in a variable.

Print:

Department ID (enum value)
Department name
*/

int main()
{

    enum DEPARTMENT
    {
        HR = 101,
        SALES,
        MARKETING,
        IT,
        FINANCE
    };

    enum DEPARTMENT dpt = IT;

    printf("Department Id: %d \n", dpt);

    switch (dpt)
    {
    case SALES:
        printf("Department: SALES");
        break;

    case HR:
        printf("Department: HR");
        break;

    case MARKETING:
        printf("Department: MARKETING");
        break;

    case IT:
        printf("Department: IT");
        break;

    case FINANCE:
        printf("Department: FINANCE");
        break;
    }

    return 0;
}