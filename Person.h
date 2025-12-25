#pragma once
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& name);
    virtual void printInfo() const;
    virtual ~Person() = default;
};