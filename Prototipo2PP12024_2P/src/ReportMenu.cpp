#include "ReportMenu.h"
#include <iostream>

ReportMenu::ReportMenu() {
    // Constructor si es necesario
}

void ReportMenu::displayMenu() const {
    std::cout << "Men� de Informes" << std::endl;
    // Mostrar opciones para generar informes
}

void ReportMenu::handleInput() {
    int choice;
    std::cout << "Ingrese su elecci�n: ";
    std::cin >> choice;
    // L�gica para manejar la entrada del usuario
}
