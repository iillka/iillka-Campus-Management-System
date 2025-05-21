#include "User.h"

User::User(const std::string& name, int id, const std::string& role)
    : name(name), id(id), role(role) {}

std::string User::getName() const {
    return name;
}

int User::getId() const {
    return id;
}

std::string User::getRole() const {
    return role;
}
