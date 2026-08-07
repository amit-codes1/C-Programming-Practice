#include <stdio.h>
#include <string.h>
/*
Create two structures:

Address:
City
PIN Code


Employee:
Name
ID
Address

Use typedef for both structures.

Take input and display all employee details.
*/

typedef struct
{
    char city[30];
    int pincode;
} Address;

typedef struct
{
    char name[20];
    int id;
    char address[50];
    Address adr;

} Employee;

int main()
{
    Employee e[2];

    for (int i = 0; i < 2; i++)
    {
        printf("---- Enter Employee Details ---- \n");

        printf("Enter Employee Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Enter Employee Id: ");
        scanf("%d", &e[i].id);

        getchar();

        printf("Enter City Name:  ");
        fgets(e[i].adr.city, sizeof(e[i].adr.city), stdin);
        e[i].adr.city[strcspn(e[i].adr.city, "\n")] = '\0';

        printf("Enter PinCode: ");
        scanf("%d", &e[i].adr.pincode);

        getchar();

        printf("Enter Address: ");
        fgets(e[i].address, sizeof(e[i].address), stdin);
        e[i].address[strcspn(e[i].address, "\n")] = '\0';
    }

    for (int i = 0; i < 2; i++)
    {
        printf("---- Employee Details ---- \n\n");

        printf("Name: %s \n\n", e[i].name);
        printf("Id: %d \n\n", e[i].id);
        printf("City: %s \n\n", e[i].adr.city);
        printf("PinCode: %d \n\n", e[i].adr.pincode);
        printf("Address: %s \n\n", e[i].address);
    }

    return 0;
}