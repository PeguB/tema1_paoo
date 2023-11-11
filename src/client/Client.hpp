#ifndef CLIENT_HPP
#define CLIENT_HPP
#include <string>
namespace Clients{
    class Client{
        public:
            virtual int getCardMaintanceCost() = 0;
            virtual void setCardMaintanceCost(int maintanceCost) = 0;
            virtual std::string getName()=0;
            virtual void setName(std::string name)=0;
    };
}
#endif