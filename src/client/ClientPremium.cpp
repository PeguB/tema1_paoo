#include "ClientPremium.hpp"
#include <iostream>
#include <memory>

Clients::ClientPremium::ClientPremium(){

}
int Clients::ClientPremium::getCardMaintanceCost(){
    return this->maintanceCost;
}

void Clients::ClientPremium::setCardMaintanceCost(int maintanceCost){
    this->maintanceCost = maintanceCost;
}

Clients::ClientPremium::ClientPremium(ClientPremium&& other)  {
        maintanceCost= other.maintanceCost;
        std::cout<<"MOVE constructor called for client Premium"<<std::endl;
}

Clients::ClientPremium::ClientPremium(const ClientPremium& client){
    this->maintanceCost = client.maintanceCost;
    std::cout<<"Copy constructor called for client Premium"<<std::endl;
}

std::string Clients::ClientPremium::getName(){
    return this->name;
}
void Clients::ClientPremium::setName(std::string name){
    this->name = name;
}

void Clients::ClientPremium::addAccount(const std::string& accountNumber, double initialBalance){
    Account<double> newAccount(accountNumber, initialBalance);
    accounts.push_back(newAccount);
    std::cout << "Account added for client " << name << ".\n";
}
void Clients::ClientPremium::displayAccountBalances(){
    std::cout << "Account balances for client " << name << ":\n";
    for (const auto& account : accounts) {
        std::cout << "Account " << account.getAccountNumber() << ": " << account.getBalance() << "\n";
    }
}
void Clients::ClientPremium::transferBetweenAccounts(const std::string& fromAccount, const std::string& toAccount, double amount){
     for (auto& account : accounts) {
            if (account.getAccountNumber() == fromAccount) {
                for (auto& destAccount : accounts) {
                    if (destAccount.getAccountNumber() == toAccount) {
                        account.transferTo(destAccount, amount);
                        return;
                    }
                }
            }
        }
        std::cout << "Error: Unable to find specified accounts for the transfer.\n";
}