#include <stdio.h>
#include <string.h>
/*
Create a structure named Student containing:

Name
Roll Number
Marks

Use typedef so you can declare the structure without writing the struct keyword.

Take input for one student and display the details.
*/

typedef struct
{
    char Name[30];
    int Roll;
    int Marks;
} student;

int main()
{
    student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("---- Enter Details ---- \n");

        printf("Enter Student Name: ");
        fgets(s[i].Name, sizeof(s[i].Name), stdin);
        s[i].Name[strcspn(s[i].Name, "\n")] = '\0';

        printf("Enter Roll: ");
        scanf("%d", &s[i].Roll);

        printf("Enter Marks: ");
        scanf("%d", &s[i].Marks);

        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("---- Student Details ---- \n");

        printf("Name: %s \n\n", s[i].Name);
        printf("Roll: %d  \n\n", s[i].Roll);
        printf("Marks: %d  \n\n", s[i].Marks);
    }

    return 0;
}