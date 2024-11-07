//program to to define a structure and initialize variable
/*Author:Samuel
Reg No:CT102/G/24153/24
Course:BBIT
*/
#include <stdio.h>

// Define the Employee structure
struct Employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize an Employee variable
    struct Employee emp = {
        "John Doe",
        12345,
        "Human Resource",
        55000.50,
        "john.doe@company.com"
    };

    // Display employee details
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}