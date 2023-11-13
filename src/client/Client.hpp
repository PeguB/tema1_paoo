#ifndef CLIENT_HPP
#define CLIENT_HPP
#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include "Account.hpp"

namespace Clients{
    class Client{
        public:
            virtual int getCardMaintanceCost() = 0;
            virtual void setCardMaintanceCost(int maintanceCost) = 0;
            virtual std::string getName()=0;
            virtual void setName(std::string name)=0;
            virtual void addAccount(const std::string& accountNumber, double initialBalance)=0;
            virtual void  displayAccountBalances()=0;
            virtual void transferBetweenAccounts(const std::string& fromAccount, const std::string& toAccount, double amount)=0;
        protected:
            std::string name = "default-NAME";
            std::vector<Account<double>> accounts;

    };
}
#endif