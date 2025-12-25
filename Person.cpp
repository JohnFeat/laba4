#include "Person.h"
#include <iostream>

Person::Person(const std::string& name) : name(name) {}

void Person::printInfo() const {
    std::cout << "Name: " << name << std::endl;
}