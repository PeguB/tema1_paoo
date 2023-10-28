#include <iostream>

#ifndef BANK_H
#define BANK_H

class Bank {
    public:
        Bank();
        Bank(std::string name, int numberOfEmployees);
        Bank(const Bank& bank);
        Bank& operator=(Bank x);

        void setNumberOfEmployees(int numberOfEmployees);
        int getNumberOfEmployees();

        void printDetails();
        ~Bank();
    private:
        std::string name;
        int numberOfEmployees;
};

#endif
