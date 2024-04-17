#include "CatalogMenu.h"
#include <iostream>

CatalogMenu::CatalogMenu() {
    // Constructor si es necesario
}

void CatalogMenu::displayMenu() const {
    std::cout << "Menú de Catálogos" << std::endl;
    // Mostrar opciones CRUD
}

void CatalogMenu::handleInput() {
    int choice;
    std::cout << "Ingrese su elección: ";
    std::cin >> choice;
    // Lógica para manejar la entrada del usuario
}
