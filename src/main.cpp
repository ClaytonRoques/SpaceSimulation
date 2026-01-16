#include <iostream>
#include <string>
#include "Star.hpp"
#include "Planet.hpp"

void GetInput() {

}

void UpdateSimulation() {

}

void DrawSimulation() {

}

int main() {
    Star Sun;
    Planet Earth;

    while (true) {
        GetInput();
        UpdateSimulation();
        DrawSimulation();

        std::string input {};

        std::cout << "> ";
        std::getline(std::cin, input);

    }
    return 0;
}