#include <stdio.h>
#include <string.h>
/*
Create a structure Student containing:

Name
Roll Number
Marks

Store details of n students.
n-> No.of students entered by user.

Ask the user to enter a Roll Number.

If the roll number exists, display that student's complete details.

Otherwise, print:

Student not found.*/

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{

    int n;

    printf("Enter number of Students to store Details: ");
    scanf("%d", &n);
    getchar();

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("---- Enter Student Details ----\n");

        printf("\t  Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("\t  Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("\t  Enter Marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    int rollnumber;
    int found = 1;
    int index = 0;

    printf("Enter Roll Number to check Details: ");
    scanf("%d", &rollnumber);

    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == rollnumber)
        {
            found = 1;
            index = i;
        }
    }

    if (found == 1)
    {
        printf("--- Student Details ---\n");

        printf("\t  Name: %s \n", s[index].name);
        printf("\t  Roll Number: %d \n", s[index].roll);
        printf("\t  Marks: %.2f \n", s[index].marks);
    }
    else
        printf("\t  Student not Found.");

    return 0;
}