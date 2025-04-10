#include "SomeClass.hpp"
#include "BaseClass.hpp"
// Computes the checksum by summing ASCII values of each character
std::uint64_t checksum(const std::string &value) {
    std::uint64_t sum = 0;
    for (char ch : value) {
        sum += static_cast<unsigned char>(ch);
    }
    return sum;
}
// Prints the stored string and its checksum
void SomeClass::printValue() const {
    std::cout << "The string is: " << _string << '\n';
    std::cout << "The checksum is: " << checksum(_string) << '\n';
}
// Sets the internal string to the provided input
void SomeClass::setString(const std::string &str) {
    _string = str;
}
