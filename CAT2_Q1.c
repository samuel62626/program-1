//program to to define a structure
/*Author:Samuel
Reg No:CT102/G/24153/24
Course:BBIT
*/
#include <stdio.h>

struct Employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    struct Employee emp;

    // Input for employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name); // Fixed typo: removed 'o'

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee department: ");
    scanf("%s", emp.department); // Added scanf for department

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter employee email: ");
    scanf("%s", emp.email); // Added scanf for email

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);           // Added newline for formatting
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department); // Added newline for formatting
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);         // Added newline for formatting

    return 0;
}
