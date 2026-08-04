#include <stdio.h>
/*
Create an enum:

ADD = 1,
SUBTRACT,
MULTIPLY,
DIVIDE

Ask the user to:

Enter two numbers
Choose an operation

Perform the selected operation and display the result.
*/

int main()
{

    enum OPERATION
    {
        ADD = 1,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    };

    float n, n1;

    printf("Enter a Number: ");
    scanf("%f", &n);

    printf("Enter another Number: ");
    scanf("%f", &n1);

    int num;

    printf("---ADD(1)---SUBTRACT(2)---MULTIPLY(3)---DIVIDE(4)--- \n");

    printf("Enter a Number from 1 to 4 to Perform any one Operation:  ");
    scanf("%d", &num);

    enum OPERATION ope = num;

    switch (ope)
    {
    case ADD:
        printf("Sum of %.2f and %.2f is:  %.2f", n, n1, n + n1);
        break;

    case SUBTRACT:
        printf("Subtraction of %.2f and %.2f is: %.2f", n, n1, n - n1);
        break;

    case MULTIPLY:
        printf("Multiplication of %.2f and %.2f is: %.2f", n, n1, n * n1);
        break;

    case DIVIDE:
        printf("Division of %.2f and %.2f is: %.2f", n, n1, n / n1);
        break;
    }
    return 0;
}