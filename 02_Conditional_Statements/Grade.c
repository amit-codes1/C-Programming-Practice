#include <stdio.h>
/*
| Marks    | Grade |
| -------- | ----- |
| 90–100   | A     |
| 80–89    | B     |
| 70–79    | C     |
| 60–69    | D     |
| Below 60 | F     |
*/

int main()
{

    float marks;

    printf("Enter marks to check grade: ");
    scanf("%f", &marks);

    if (marks <= 100 && marks >=90)
        printf("GRADE A");

    else if (marks >= 80 && marks < 90)
        printf("GRADE B");

    else if (marks >= 70 && marks < 80)
        printf("GRADE C");

    else if (marks >= 60 && marks < 70)
        printf("GRADE D");

    else if (marks < 60 && marks >= 0)
        printf("GRADE F");

    else
        printf("Please enter valid Marks.");

            return 0;
}