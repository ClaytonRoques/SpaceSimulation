#include <iostream>
#include <string>
#include "Star.hpp"
#include "Planet.hpp"
#include "vector3.hpp"
#include "vector3.hpp"

void GetInput() {

}

void UpdateSimulation() {

}

void DrawSimulation() {

}

int main() {
    vector3 position {0,0,0};
    Star Sun {position, 1.00};
    Planet Earth;

    while (true) {
        GetInput();
        UpdateSimulation();
        DrawSimulation();
    }
    return 0;
}