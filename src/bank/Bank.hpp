#ifndef BANK_H
#define BANK_H

#include <iostream>
#include "Client.hpp"
#include <vector>
#include <memory>

namespace Banks{
class Bank {
    public:
        Bank();
        Bank(std::string name, int numberOfEmployees);
        Bank(const Bank& bank);
        Bank& operator=(Bank x);

        void setNumberOfEmployees(int numberOfEmployees);
        int getNumberOfEmployees();
        void addClient(std::shared_ptr<Clients::Client> client);

        void printDetails();
        ~Bank();
    private:
        std::string name;
        int numberOfEmployees;
        std::vector<std::shared_ptr<Clients::Client>> clients;
};
}
#endif
