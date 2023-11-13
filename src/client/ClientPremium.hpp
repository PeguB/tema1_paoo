#ifndef CLIENTPREMIUM_H
#define CLIENTPREMIUM_H
#include "Client.hpp"
#include <iostream>
#include <memory>
#include "Account.hpp"
#include "Account.cpp"
namespace Clients{
class ClientPremium : public Client{
    private:
        int maintanceCost = 40;
    public: 
        int getCardMaintanceCost()override;
        void setCardMaintanceCost(int maintanceCost)override;
        std::string getName()override;
        void setName(std::string name)override;
        void addAccount(const std::string& accountNumber, double initialBalance)override;
        void displayAccountBalances()override;
        void transferBetweenAccounts(const std::string& fromAccount, const std::string& toAccount, double amount)override;

        ClientPremium(ClientPremium&& other);
        ClientPremium();
        ClientPremium(const ClientPremium& client);
};
}
#endif