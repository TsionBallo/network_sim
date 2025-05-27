#include "transport.h"
#include <iostream>
std::string TransportLayer::Send(const std::string& data) {
    std::cout << "[Transport Layer] Sending: " << data << std::endl;
    return "TRANS_HDR|" + data;
}
std::string TransportLayer::Receive(const std::string& data) {
    std::cout << "[Transport Layer] Receiving: " << data << std::endl;
    return data.substr(10); // "TRANS_HDR|"
}