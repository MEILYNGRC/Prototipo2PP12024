#include "CatalogMenu.h"
#include <iostream>

CatalogMenu::CatalogMenu() {
    // Constructor si es necesario
}

void CatalogMenu::displayMenu() const {
    std::cout << "Men� de Cat�logos" << std::endl;
    // Mostrar opciones CRUD
}

void CatalogMenu::handleInput() {
    int choice;
    std::cout << "Ingrese su elecci�n: ";
    std::cin >> choice;
    // L�gica para manejar la entrada del usuario
}
