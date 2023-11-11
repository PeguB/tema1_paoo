#include "Client.hpp"
#ifndef CLIENTPREMIUM_H
#define CLIENTPREMIUM_H
namespace Clients{
class ClientPremium : public Client{
    private:
        int maintanceCost = 40;
    public: 
        int getCardMaintanceCost()override;
        void setCardMaintanceCost(int maintanceCost)override;
        std::string getName()override;
        void setName(std::string name)override;
        ClientPremium(ClientPremium&& other);
        ClientPremium();
        ClientPremium(const ClientPremium& client);
    private:
        std::string name;
};
}
#endif