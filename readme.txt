Your Task

Divide the Employee class into two definitions

    a Person base class
    an Employee derived class

Redefine the member functions for each class by rearranging the existing logic.

Employee Module

Employee.h

The Person class holds a person's name in a private data member and provides access through three member functions:

    Person() - no-argument constructor that initializes the data member
    void set(const char*) - copies the name into the data member
    void displayName(std::ostream& os) const - inserts the name into os

The Employee class holds an employee's number and wage rate in its private data members and provides access through two member functions:

    Employee(int, const char*, double) - three-argument constructor that receives the number, the name and the wage rate
    void display(std::ostream& os) const - inserts all data into os
