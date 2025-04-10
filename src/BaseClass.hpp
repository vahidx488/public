#ifndef BASECLASS_HPP
#define BASECLASS_HPP

#include <string>
#include <cstdint>
// Abstract base class as a interface
class BaseClass {
public:
    // Pure virtual function for printing the value
    virtual void printValue() const = 0;

    // Pure virtual function for setting the string
    virtual void setString(const std::string &str) = 0;

    // Virtual destructor for ensuring cleanup in subclass polymorphic
    virtual ~BaseClass() = default;
};

// Function to calculate checksum from a string
std::uint64_t  checksum(const std::string &value);

#endif // BASECLASS_HPP
