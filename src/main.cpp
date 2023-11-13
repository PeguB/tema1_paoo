#include <iostream>
#include "Bank.hpp"
#include "ClientPremium.hpp"
#include "Client.hpp"
int main()
{    
    std::unique_ptr<Banks::Bank> bank1 = std::make_unique<Banks::Bank>("BCR",34);
    // Bank bank2 = Bank("BT",100);
    // Bank *bank5 = new Bank("LIBRA",150);

    // bank1.printDetails();
    // bank2.printDetails();

    // Bank bank3 = bank1;
    // Bank bank4;
    // bank4 = bank3;

    // bank3.setNumberOfEmployees(45);

    // bank1.printDetails();

    // bank3.printDetails();
    // bank4.printDetails();
    // bank5->printDetails();

    std::shared_ptr<Clients::Client> client1 = std::make_shared<Clients::ClientPremium>();
    client1->setName("CLIENT1");

    bank1->addClient(client1);
    bank1->printDetails();
    
    client1->addAccount("A123", 1000.0);
    client1->addAccount("B456", 500.0);

    client1->displayAccountBalances();

    client1->transferBetweenAccounts("A123", "B456", 200.0);

    std::cout << "\nUpdated account balances after transfer:\n";
    client1->displayAccountBalances();
    // delete bank1;

    return 0;
}