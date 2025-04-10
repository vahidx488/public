#ifndef SOMECLASS_HPP
#define SOMECLASS_HPP

#include "BaseClass.hpp"
#include <iostream>
#include <string>
// Concrete implementation of BaseClass
class SomeClass : public BaseClass {
    // Internal string storage
    std::string _string;

public:
    // Override printValue to show string and checksum
    void printValue() const override;
     // Override setString to store the given value
    void setString(const std::string &str) override;
};

#endif // SOMECLASS_HPP
