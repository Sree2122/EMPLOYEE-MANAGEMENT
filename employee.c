#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int id;
    float salary;
} Employee;

// Function prototypes
int addEmployee(Employee employees[], int employeeCount, const char *name, int id, float salary);
void displayEmployees(Employee employees[], int employeeCount);
Employee* findEmployee(Employee employees[], int employeeCount, int id);
// ... (Add prototypes for save/load if you want)

#endif