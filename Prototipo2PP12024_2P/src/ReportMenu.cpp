#include "ReportMenu.h"
#include <iostream>

ReportMenu::ReportMenu() {
    // Constructor si es necesario
}

void ReportMenu::displayMenu() const {
    std::cout << "Menú de Informes" << std::endl;
    // Mostrar opciones para generar informes
}

void ReportMenu::handleInput() {
    int choice;
    std::cout << "Ingrese su elección: ";
    std::cin >> choice;
    // Lógica para manejar la entrada del usuario
}
