// # Author:                    Amav Prasee
// # BannerID:                  001383890
// # Course:                    CS 181
// # Assignment:                PA4
// # Date Assigned:             Monday, March 18, 2024
// # Date/Time Due:             Saturday, March 30, 2024 -- 11:55 pm
// # Description:               This program will exercise Object-
//                              Oriented concepts with C++.
// # Certification of Authenticity:
//      I certify that this assignment is entirely my own work.

#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>

class Employee {
protected:
    std::string name;
    double wage;
    double hours;

public:
    // Create a new employee
    Employee (std::string theName, double theWage, double theHours);
    // Calculate the employee’s pay.
    double calcPay() const;
    std::string getName () const;
};

#endif // EMPLOYEE_H_INCLUDED
