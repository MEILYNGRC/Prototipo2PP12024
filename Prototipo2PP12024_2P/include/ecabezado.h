#ifndef ECABEZADO_H
#define ECABEZADO_H

Auth::Auth() {
    // Constructor si es necesario
}

bool Auth::login(const std::string& username, const std::string& password) {
    std::ifstream file("tbl_Login.txt");
    std::string storedUsername, storedPassword;
    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == username && storedPassword == password) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

bool Auth::isAdmin(const std::string& username) const {
    // Lógica para verificar si el usuario es administrador
    return (username == "Administrador");
}

