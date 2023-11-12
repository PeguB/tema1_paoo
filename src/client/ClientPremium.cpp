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