#include <iostream>
#include "Bank.hpp"
int main()
{    
    Bank bank1 = Bank("bank1_name",34);
    bank1.printDetails();

    bank1.setName("ban1_name1");

    bank1.printDetails();

    Bank bankDefault, bank2;
    Bank bank3 = bank1;

    bank1.setName("bank1_changed");
    bank1.printDetails();
    bank2.setName("bank2_name");
    bankDefault.printDetails();
    bank2.printDetails();
    bankDefault.printDetails();
    bank3.printDetails();
    return 0;
}