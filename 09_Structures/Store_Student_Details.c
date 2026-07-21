#include <stdio.h>
#include <string.h>

// Program to store details of 3 Students.

struct Student_Details
{
    char name[50];
    int roll;
    float marks;
};

int main()
{

    struct Student_Details s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("---- Enter Student Details ----\n");

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("---- Student Details ---- \n");
        printf("Name: %s \n", s[i].name);
        printf("Roll: %d \n", s[i].roll);
        printf("Marks: %.2f \n", s[i].marks);
    }
    return 0;
}