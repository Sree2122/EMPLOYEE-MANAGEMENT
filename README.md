# Simple Employee Management System in C

This repository contains a simplified Employee Management System implemented in C. The code is split into multiple files, each with its own `main` function for testing purposes.  **Note:** This structure with multiple `main` functions is generally *not* recommended for real-world projects.  It's used here for demonstration of separate compilation and testing of individual components.

## Overview

The system allows users to:

*   Add new employees to the system.
*   Display a list of all employees.
*   Find an employee by their ID.

## Files

*   `employee.h`: Header file containing the `Employee` structure definition and function prototypes.
*   `add_employee.c`: Contains the `addEmployee` function and a `main` function for testing it.
*   `display_employees.c`: Contains the `displayEmployees` function and a `main` function for testing it.
*   `find_employee.c`: Contains the `findEmployee` function and a `main` function for testing it.
*   `main.c`: The main program file that combines all the functionalities and provides a menu-driven interface.  This is the "real" `main` function that would be used in a combined program.

## Compilation and Running

Each `.c` file can be compiled and run individually for testing:

```bash
# Example for add_employee.c
gcc employee.h add_employee.c -o add_employee
./add_employee

# ... compile and run other files similarly
