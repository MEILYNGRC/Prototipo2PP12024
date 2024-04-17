#include "MainMenu.h"
#include <iostream>

MainMenu::MainMenu() {
    // Constructor si es necesario
}

void MainMenu::displayMenu() const {
    std::cout << "Bienvenido al Sistema" << std::endl;
    std::cout << "1. Catálogos" << std::endl;
    std::cout << "2. Informes" << std::endl;
    std::cout << "3. Salir del sistema" << std::endl;
}

void MainMenu::handleInput() {
    int choice;
    std::cout << "Ingrese su elección: ";
    std::cin >> choice;
    // Lógica para manejar la entrada del usuario
}
