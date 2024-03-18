#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    char phone_number[15];
    char email[50];
};

int main()
{
    struct Employee emp1;

    strcpy(emp1.name, "John Doe");
    emp1.id = 1001;
    strcpy(emp1.phone_number, "123-456-7890");
    strcpy(emp1.email, "john.doe@example.com");

    printf("Employee Name: %s\n", emp1.name);
    printf("Employee ID: %d\n", emp1.id);
    printf("Phone Number: %s\n", emp1.phone_number);
    printf("Email: %s\n", emp1.email);

    return 0;
}
