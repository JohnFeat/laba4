#include "StaffReader.h"
#include <iostream>

StaffReader::StaffReader(
    const std::string& name,
    int cardNumber,
    const std::string& position
)
    : Person(name),
    Reader(name, cardNumber),
    Librarian(name, position)
{
}

void StaffReader::printInfo() const {
    std::cout << "Library Staff: " << name
        << ", Card: " << cardNumber
        << ", Position: " << position << std::endl;
}