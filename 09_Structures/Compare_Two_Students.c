#include <stdio.h>
/*
Create structure Student.

Input the marks of both students and display:

Which student scored higher.
If both scored the same, print "Both have equal marks."
*/

struct Students
{
    float marks, marks_1;
};

int main()
{

    struct Students mark[1];

    for (int i = 0; i < 1; i++)
    {
        printf("---- Enter Marks ---- \n");

        printf("Enter marks of 1st Student: ");
        scanf("%f", &mark[i].marks);

        printf("Enter marks of 2nd Student: ");
        scanf("%f", &mark[i].marks_1);
    }

    printf("\n");

    for (int i = 0; i < 1; i++)
    {
        if (mark[i].marks > mark[i].marks_1)
        {
            printf("%.2f is the highest marks", mark[i].marks);
        }
        else if (mark[i].marks_1 > mark[i].marks)
        {
            printf("%.2f is the highest marks", mark[i].marks_1);
        }
        else
            printf("Both marks are equal.");
    }

    return 0;
}