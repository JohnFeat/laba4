#pragma once
#include "Reader.h"
#include "Librarian.h"

class StaffReader : public Reader, public Librarian {
public:
    StaffReader(
        const std::string& name,
        int cardNumber,
        const std::string& position
    );

    void printInfo() const override;
};