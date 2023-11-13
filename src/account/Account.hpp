#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>

template <typename T>
class Account {
private:
    std::string accountNumber;
    T balance;

public:

    Account(const std::string& number, const T& initialBalance);

    std::string getAccountNumber() const;

    T getBalance() const;

    template <typename U>
    void transferTo(Account<U>& destination, const U& amount);
};

#endif