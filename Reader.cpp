#include "Reader.h"
#include <iostream>

Reader::Reader(const std::string& name, int cardNumber)
    : Person(name)
{
    if (cardNumber < 10000 || cardNumber > 99999) {
        std::cout << "Invalid library card number. Setting default: 10000\n";
        this->cardNumber = 10000;
    }
    else {
        this->cardNumber = cardNumber;
    }
}

void Reader::printInfo() const {
    std::cout << "Reader: " << name
        << ", Card Number: " << cardNumber << std::endl;
}