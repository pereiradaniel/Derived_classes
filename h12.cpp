// Client Program
// h12.cpp

#include <iostream>
#include "Employee.h"

int main() {
    Employee employee(1234, "Jane Doe", 15.50);

    employee.display(std::cout);
    std::cout << std::endl;
}