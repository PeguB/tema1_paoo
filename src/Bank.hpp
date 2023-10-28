#include <iostream>

#ifndef BANK_H
#define BANK_H

class Bank {
    public:
        Bank();
        Bank(std::string name, int numberOfEmployees);
        Bank(const Bank& bank);

        void setName(std::string name);
        std::string getName();

        void printDetails();
        ~Bank();
    private:
        std::string name;
        int numberOfEmployees;
};

#endif
