#include <stdio.h>
/*
Create an enum:

FAIL
PASS
DISTINCTION

Ask the user to enter marks.

Assign the appropriate enum value:

Below 40 → FAIL
40–74 → PASS
75 and above → DISTINCTION
*/

int main()
{

    enum GRADE
    {
        FAIL,
        PASS,
        DISTINCTION
    };

    int marks;

    printf("Enter Marks: ");
    scanf("%d", &marks);

    enum GRADE score;

    if (marks < 40)
    {
        score = FAIL;
    }

    else if (marks <= 74 && marks >= 40)
    {
        score = PASS;
    }

    else
        score = DISTINCTION;

    if (score == FAIL)
    {
        printf("FAIL!! \n", score);
    }

    else if (score == PASS)
    {
        printf("PASS!! \n");
    }

    else
        printf("DISTINCTION!! \n");

    return 0;
}