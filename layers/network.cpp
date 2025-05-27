#include "network.h"
#include <iostream>
std::string NetworkLayer::Send(const std::string& data) {
    std::cout << "[Network Layer] Sending: " << data << std::endl;
    return "NET_HDR|" + data;
}
std::string NetworkLayer::Receive(const std::string& data) {
    std::cout << "[Network Layer] Receiving: " << data << std::endl;
    return data.substr(8); // "NET_HDR|"
}