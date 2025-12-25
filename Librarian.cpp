#include "Librarian.h"
#include <iostream>

Librarian::Librarian(const std::string& name, const std::string& position)
    : Person(name), position(position)
{
    if (position.empty()) {
        throw std::invalid_argument("Position cannot be empty");
    }
}

void Librarian::printInfo() const {
    std::cout << "Librarian: " << name
        << ", Position: " << position << std::endl;
}