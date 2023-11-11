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

    
    delete bank5;

    return 0;
}