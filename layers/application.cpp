// layers/application.cpp
#include "application.h"
#include <iostream>
std::string ApplicationLayer::Send(const std::string& data) {
    std::cout << "[Application Layer] Sending: " << data << std::endl;
    return "APP_HDR|" + data;
}
std::string ApplicationLayer::Receive(const std::string& data) {
    std::cout << "[Application Layer] Receiving: " << data << std::endl;
    return data.substr(8); // "APP_HDR|"
}