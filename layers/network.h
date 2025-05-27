#ifndef NETWORK_H
#define NETWORK_H
#include <string>
class NetworkLayer {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};
#endif