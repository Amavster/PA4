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


#include <iostream>
#include <iomanip>
#include "Manager.h"

int main() {
    std::cout << "Enter number of managers: ";
    int numofManagers;
    std::cin >> numofManagers;

    if (numofManagers > 100) {
        std::cerr << "Error: Maximum number of managers allowed is 100." << std::endl; //trying cerr here
        return 1; // Returns error for more than 100
    }

    Manager *managers[numofManagers];

    for (int i = 0; i < numofManagers; ++i) {
        std::string name;
        double wage, hours, bonusAmount;

        std::cout << "Enter manager " << i << " name: ";
        std::cin.ignore();
        std::getline(std::cin, name);

        std::cout << "Enter manager " << i << " hourly wage: ";
        std::cin >> wage;

        std::cout << "Enter manager " << i << " hours worked: ";
        std::cin >> hours;

        std::cout << "Enter manager " << i << " bonus: ";
        std::cin >> bonusAmount;

        managers[i] = new Manager(name, wage, hours, bonusAmount);
    }

    double highestPay = 0.0;
    double totalPay = 0.0;
    Manager *highestPaidManager = nullptr;

    for (int i = 0; i < numofManagers; ++i) {
        double pay = managers[i]->calcPay();
        totalPay += pay;

        if (pay > highestPay) {
            highestPay = pay;
            highestPaidManager = managers[i];
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Highest paid manager is " << highestPaidManager->getName()
         << " who is paid $" << highestPay << std::endl;
    std::cout << "Average pay is $" << (totalPay / numofManagers) << std::endl;

    for (int i = 0; i < numofManagers; ++i) {
        delete managers[i];
    }

    return 0;
}
