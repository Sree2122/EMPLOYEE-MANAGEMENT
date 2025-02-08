#include "employee.h"

void displayEmployees(Employee employees[], int employeeCount) {
    if (employeeCount == 0) {
        printf("Employee list is empty.\n");
        return;
    }
    printf("Employee List:\n");
    printf("----------------------------------\n");
    printf("%-20s %-10s %-10s\n", "Name", "ID", "Salary");
    printf("----------------------------------\n");
    for (int i = 0; i < employeeCount; i++) {
        printf("%-20s %-10d %-10.2f\n", employees[i].name, employees[i].id, employees[i].salary);
    }
    printf("----------------------------------\n");
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;

    // Add some dummy employees for testing
    employeeCount = addEmployee(employees, employeeCount, "Charlie", 789, 70000.0);
    employeeCount = addEmployee(employees, employeeCount, "David", 101, 80000.0);

    displayEmployees(employees, employeeCount);

    return 0;
}