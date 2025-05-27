#include <iostream>
#include "layers/application.h"
#include "layers/transport.h"
#include "layers/network.h"
#include "layers/link.h"

int main() {
    std::string message = "Hello, Network!";
    std::cout << "Message sent: " << message << std::endl;

    ApplicationLayer app;
    TransportLayer trans;
    NetworkLayer net;
    LinkLayer link;

    std::cout << "\n==== Sending ====\n";
    std::string data = app.Send(message);
    data = trans.Send(data);
    data = net.Send(data);
    data = link.Send(data);

    std::cout << "\n==== Receiving ====\n";
    data = link.Receive(data);
    data = net.Receive(data);
    data = trans.Receive(data);
    data = app.Receive(data);

    std::cout << "\nFinal message received: " << data << std::endl;
    return 0;
}