#include <stdio.h>
#include <string.h>

/*
Create a structure Employee containing:
Employee ID
Name
Salary
## FOR 3 EMPLOYEES.
*/

struct employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{

    struct employee e[3];

    for (int i = 0; i < 3; i++)
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

    for (int i = 0; i < 3; i++)
    {
        printf("---- Employee Details ----\n");

        printf("Name: %s \n", e[i].name);
        printf("Id: %d \n", e[i].id);
        printf("Salary: %.2f \n", e[i].salary);
    }

    return 0;
}