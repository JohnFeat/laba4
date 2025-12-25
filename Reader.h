#pragma once
#include "Person.h"

class Reader : virtual public Person {
protected:
    int cardNumber;

public:
    Reader(const std::string& name, int cardNumber);
    void printInfo() const override;
};