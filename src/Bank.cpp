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

void Bank::setName(std::string name){
    this->name = name;
}
std::string Bank::getName(){
    return this->name;
}