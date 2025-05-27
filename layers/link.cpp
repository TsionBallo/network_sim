#include "link.h"
#include <iostream>
std::string LinkLayer::Send(const std::string& data) {
    std::cout << "[Link Layer] Sending: " << data << std::endl;
    return "LINK_HDR|" + data;
}
std::string LinkLayer::Receive(const std::string& data) {
    std::cout << "[Link Layer] Receiving: " << data << std::endl;
    return data.substr(9); // "LINK_HDR|"
}
