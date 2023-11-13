#include "Account.hpp"

template <typename T>
Account<T>::Account(const std::string& number, const T& initialBalance)
    : accountNumber(number), balance(initialBalance) {}

template <typename T>
std::string Account<T>::getAccountNumber() const {
    return accountNumber;
}

template <typename T>
T Account<T>::getBalance() const {
    return balance;
}

template <typename T>
template <typename U>
void Account<T>::transferTo(Account<U>& destination, const U& amount) {
    if (balance >= amount) {
        balance -= amount;
        destination.balance += amount;
        std::cout << "Transfer successful.\n";
    } else {
        std::cout << "Insufficient funds for the transfer.\n";
    }
}

template class Account<double>;