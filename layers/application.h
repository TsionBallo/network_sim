#ifndef APPLICATION_H
#define APPLICATION_H
#include <string>
class ApplicationLayer {
public:
    std::string Send(const std::string& data);
    std::string Receive(const std::string& data);
};
#endif

