#ifndef TRANSPORT_H
#define TRANSPORT_H
#include <string>
class TransportLayer {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};
#endif