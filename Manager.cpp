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

#include "Manager.h"

// Function definitions in implementation file
Manager::Manager(std::string theName, double theWage, double theHours, double theBonusAmount)
    : Employee(theName, theWage, theHours), bonusAmount(theBonusAmount) {}

double Manager::calcPay() const {
    double basePayAmount = Employee::calcPay();
    // Adding bonus amount
    return basePayAmount + bonusAmount;
}
