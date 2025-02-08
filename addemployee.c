#include "employee.h"

int addEmployee(Employee employees[], int employeeCount, const char *name, int id, float salary) {
    if (employeeCount < MAX_EMPLOYEES) {
        strcpy(employees[employeeCount].name, name);
        employees[employeeCount].id = id;
        employees[employeeCount].salary = salary;
        return employeeCount + 1;
    } else {
        printf("Employee list is full!\n");
        return employeeCount;
    }
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;

    employeeCount = addEmployee(employees, employeeCount, "Alice", 123, 50000.0);
    employeeCount = addEmployee(employees, employeeCount, "Bob", 456, 60000.0);

    printf("Added employees.\n");
    return 0;
}