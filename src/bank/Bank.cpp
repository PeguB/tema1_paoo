#include "Bank.hpp"

Banks::Bank::Bank(){
    this->name = "bank_default";
    this->numberOfEmployees = 0;
}
Banks::Bank::Bank(const Bank& bank){
    this->name = bank.name;
    this->numberOfEmployees = bank.numberOfEmployees;
    std::cout<<"Copy contructor called to copy"<<bank.name<<std::endl;
}

Banks::Bank& Banks::Bank::operator=(Banks::Bank x){
    using std::swap;
    if(this == &x){
        return *this;
    }
    swap(this->name, x.name);
    swap(this->numberOfEmployees, x.numberOfEmployees);
    return *this;
}
Banks::Bank::Bank(std::string name, int numberOfEmployees){
    this->name = name;
    this->numberOfEmployees = numberOfEmployees;
}
Banks::Bank::~Bank(){
    std::cout<<"Free object bank from heap memory"<<std::endl;
}
void Banks::Bank::printDetails(){
    std::cout<<this->name<<" : "<<this->numberOfEmployees<<std::endl;
    for(std::shared_ptr<Clients::Client> client : clients){
        std::cout<<"Name client: "<<client->getName()<<std::endl;
    }
}

void Banks::Bank::setNumberOfEmployees(int numberOfEmployees){
    this->numberOfEmployees = numberOfEmployees;
}
int Banks::Bank::getNumberOfEmployees(){
    return this->numberOfEmployees;
}

void Banks::Bank::addClient(std::shared_ptr<Clients::Client> client){
    this->clients.push_back(client);
}