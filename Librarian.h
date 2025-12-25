#pragma once
#include "Person.h"
#include <string>
#include <stdexcept>

class Librarian : virtual public Person {
protected:
    std::string position;

public:
    Librarian(const std::string& name, const std::string& position);
    void printInfo() const override;
};