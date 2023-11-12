#ifndef CLIENT_HPP
#define CLIENT_HPP
#include <string>
#include <iostream>
#include <memory>

namespace Clients{
    class Client{
        public:
            virtual int getCardMaintanceCost() = 0;
            virtual void setCardMaintanceCost(int maintanceCost) = 0;
            virtual std::string getName()=0;
            virtual void setName(std::string name)=0;
        protected:
            std::string name = "default-NAME";

    };
}
#endif