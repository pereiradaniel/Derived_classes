// Employee
// Employee.cpp

#include <iomanip>
#include <cstring>
#include "Employee.h"

const double MIN_WAGE = 10.25;
const int    SAFE_NUM = 0;

Employee::Employee() {
    // safe empty state
    no = SAFE_NUM;
    name[0] = '\0';
    rate = MIN_WAGE;
}

Employee::Employee(int n, const char* nm, double r) {
    if (n > SAFE_NUM && r >= MIN_WAGE) {
        no = n;
        strncpy(name, nm, MAX_NAME);
        name[MAX_NAME] = '\0';
        rate = r;
    }
    else {
        Employee temp;
        *this = temp;
    }
}

void Employee::display(std::ostream& os) const {
    if (no != SAFE_NUM) {
        os << std::fixed << std::setprecision(2);
        os << name << " (" << no << ") $" << rate;
    }
    else
        os << "no data available";
}