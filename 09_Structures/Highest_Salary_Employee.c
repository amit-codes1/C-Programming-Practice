#include <stdio.h>
#include <string.h>
/*
Create a structure Employee containing:

Name
ID
Salary

Store details of 5 employees.

Find and display:

Employee having the highest salary
His/Her complete details
*/

struct employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{

    struct employee e[5];

    for (int i = 0; i < 5; i++)
    {
        printf("---- Enter Employee Details ----\n");

        printf("Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Id: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("---- Employee Details ----\n");

        printf(" Name: %s \n", e[i].name);
        printf("Id: %d \n", e[i].id);
        printf("Salary: %.2f \n", e[i].salary);
    }

    float highsalary = 0;
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        if (e[i].salary > highsalary)
        {
            highsalary = e[i].salary;
            index = i;
        }
    }

    printf("---- Employee with Highest Salary ----\n");

    printf("Name: %s \n", e[index].name);
    printf("Id: %d \n", e[index].id);
    printf("Salary: %.2f", e[index].salary);

    return 0;
}