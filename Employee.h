// Employee
// Employee.h

#include <iostream>

const int MAX_NAME = 20;

class Employee {
    int no;
    char name[MAX_NAME + 1];
    double rate;
public:
    Employee();
    Employee(int, const char*, double);
    void display(std::ostream&) const;
};