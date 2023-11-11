#include "Bank.hpp"

Bank::Bank(){
    this->name = "bank_default";
    this->numberOfEmployees = 0;
}
Bank::Bank(const Bank& bank){
    this->name = bank.name;
    this->numberOfEmployees = bank.numberOfEmployees;
    std::cout<<"Copy contructor called to copy"<<bank.name<<std::endl;
}

Bank& Bank::operator=(Bank x){
    using std::swap;
    if(this == &x){
        return *this;
    }
    swap(this->name, x.name);
    swap(this->numberOfEmployees, x.numberOfEmployees);
    return *this;
}
Bank::Bank(std::string name, int numberOfEmployees){
    this->name = name;
    this->numberOfEmployees = numberOfEmployees;
}
Bank::~Bank(){
    std::cout<<"Free object bank from heap memory"<<std::endl;
}
void Bank::printDetails(){
    std::cout<<this->name<<" : "<<this->numberOfEmployees<<std::endl;
}

void Bank::setNumberOfEmployees(int numberOfEmployees){
    this->numberOfEmployees = numberOfEmployees;
}
int Bank::getNumberOfEmployees(){
    return this->numberOfEmployees;
}

bool addClient(std::shared_ptr<Client> client){
    if()
    this->clients.push_back(client);
}