#ifndef CLIENT_HPP
#define CLIENT_HPP
namespace Clients{
    class Client{
        public:
            virtual int getCardMaintanceCost() = 0;
            virtual void setCardMaintanceCost(int maintanceCost) = 0;
    };
}
#endif