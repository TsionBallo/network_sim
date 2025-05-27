#ifndef LINK_H
#define LINK_H
#include <string>
class LinkLayer {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};
#endif