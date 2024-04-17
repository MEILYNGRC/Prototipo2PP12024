#ifndef AUTH_H
#define AUTH_H

#include <string>

class Auth {
public:
    Auth();
    bool login(const std::string& username, const std::string& password);
    bool isAdmin(const std::string& username) const;

private:
    // Funciones y variables privadas
};

#endif
