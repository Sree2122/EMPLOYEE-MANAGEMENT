#include "employee.h"

int main() {
    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;

    int choice;
    char name[MAX_NAME_LENGTH];
    int id;
    float salary;

    do {
        printf("\nEmployee Management System Menu:\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Find Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter employee name: ");
                scanf(" %[^\n]s", name);
                printf("Enter employee ID: ");
                scanf("%d", &id);
                printf("Enter employee salary: ");
                scanf("%f", &salary);
                employeeCount = addEmployee(employees, employeeCount, name, id, salary);
                break;
            case 2:
                displayEmployees(employees, employeeCount);
                break;
            case 3:
                printf("Enter employee ID to find: ");
                scanf("%d", &id);
                Employee *foundEmployee = findEmployee(employees, employeeCount, id);
                if (foundEmployee != NULL) {
                    printf("Employee found: %s (ID: %d, Salary: %.2f)\n", foundEmployee->name, foundEmployee->id, foundEmployee->salary);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}