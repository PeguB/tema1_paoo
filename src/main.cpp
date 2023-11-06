#include <iostream>
#include "Bank.hpp"
#include "ClientPremium.hpp"
#include "Client.hpp"
int main()
{    
    Bank bank1 = Bank("BCR",34);
    Bank bank2 = Bank("BT",100);
    Bank *bank5 = new Bank("LIBRA",150);

    bank1.printDetails();
    bank2.printDetails();

    Bank bank3 = bank1;
    Bank bank4;
    bank4 = bank3;

    bank3.setNumberOfEmployees(45);

    bank1.printDetails();

    bank3.printDetails();
    bank4.printDetails();
    bank5->printDetails();

    Clients::Client* client1 = new Clients::ClientPremium();
    std::cout<<client1->getCardMaintanceCost()<<std::endl;
    client1->setCardMaintanceCost(30);
    std::cout<<client1->getCardMaintanceCost()<<std::endl;

    Clients::ClientPremium client2 = Clients::ClientPremium();
    client2.setCardMaintanceCost(50);
    Clients::ClientPremium client3 = Clients::ClientPremium(client2);
    std::cout<<"Before copy:"<<client3.getCardMaintanceCost()<<std::endl;
    client2.setCardMaintanceCost(60);
    std::cout<<"After copy"<<client3.getCardMaintanceCost()<<std::endl;
    

    Clients::ClientPremium* client4 =  new Clients::ClientPremium();
    client4->setCardMaintanceCost(400);
    Clients::ClientPremium* client5 = std::move(client4);
    std::cout<<"Before change:"<<client5->getCardMaintanceCost()<<std::endl;
    client4->setCardMaintanceCost(100);
    std::cout<<"After changing client4 "<<client5->getCardMaintanceCost()<<std::endl;
    delete bank5;
    return 0;
}