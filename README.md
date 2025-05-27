# Internet-Protocol-Stack-Simulation-Assignment
Vu Anh To - GitHub ID: anhvuanhvu , ..., ...
Internet Protocol Stack Simulation

Overview

This project implements a C++ simulation of the Internet protocol stack, focusing on the Application, Transport, Network, and Link layers. It demonstrates encapsulation (adding headers) during data transmission and decapsulation (removing headers) during reception, with console output showing the data flow.

Project Structure
main.cpp: Entry point, orchestrates sending and receiving through the stack.
layers/: Contains header (.h) and source (.cpp) files for each layer:
application.h/.cpp: Handles Application layer operations.
transport.h/.cpp: Handles Transport layer operations.
network.h/.cpp: Handles Network layer operations.
link.h/.cpp: Handles Link layer operations.
.vscode/tasks.json: VS Code configuration for building and running the project.
sample_output.txt: Sample output of a run session.
