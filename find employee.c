#include "employee.h"

Employee* findEmployee(Employee employees[], int employeeCount, int id) {
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == id) {
            return &employees[i]; // Return the pointer to the employee
        }
    }
    return NULL; // Return NULL if not found
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;

    // Add some dummy employees for testing
    employeeCount = addEmployee(employees, employeeCount, "Eve", 222, 90000.0);
    employeeCount = addEmployee(employees, employeeCount, "Frank", 333, 100000.0);

    Employee *foundEmployee = findEmployee(employees, employeeCount, 333);
    if (foundEmployee != NULL) {
        printf("Employee found: %s (ID: %d, Salary: %.2f)\n", foundEmployee->name, foundEmployee->id, foundEmployee->salary);
    } else {
        printf("Employee not found.\n");
    }

    return 0;
}