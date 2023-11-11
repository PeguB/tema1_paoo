#include <iostream>

#ifndef BANK_H
#define BANK_H
#include <vector>
#include <memory>
class Bank {
    public:
        Bank();
        Bank(std::string name, int numberOfEmployees);
        Bank(const Bank& bank);
        Bank& operator=(Bank x);

        void setNumberOfEmployees(int numberOfEmployees);
        int getNumberOfEmployees();
        bool addClient(std::shared_ptr<Client> client);

        void printDetails();
        ~Bank();
    private:
        std::string name;
        int numberOfEmployees;
        std::vector<std::shared_ptr<Client>> clients;
};

#endif
