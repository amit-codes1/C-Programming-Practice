#include <stdio.h>
/*
Create an enum:

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

Ask the user to choose an option.

Print which Operation User selected.
*/

int main()
{

    enum Menu
    {
        ADD = 1,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    };

    int num;

    printf("Enter a Integer from 1 to 4 to choose an Option:  ");
    scanf("%d", &num);

    enum Menu opt = num;

    switch (opt)
    {
    case ADD:
        printf("ADD");
        break;

    case SUBTRACT:
        printf("SUBTRACT");
        break;

    case MULTIPLY:
        printf("MULTIPLY");
        break;

    case DIVIDE:
        printf("DIVIDE");
        break;
    }

    return 0;
}