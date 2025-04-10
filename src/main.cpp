#include "SomeClass.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <exception>

int main(int argc, char* argv[]) {
    // Check for at least two arguments :: min ==> <repeats> <string> 
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <repeats> <string> [null]\n";
        throw std::invalid_argument("Missing arguments number");
    }
 
    int repeats = 0;
    // Convert first argument to integer repeat count
    try {
        repeats = std::stoi(argv[1]);
    } catch (const std::exception &e) {
        std::cerr << "Invalid repeat count: " << argv[1] << '\n';
        return 1;
    }
    // Extract the string input
    const std::string inputString = argv[2];
    // Repeat the operation the specified number of times
    for (int i = 0; i < repeats; ++i) {
        auto object = std::make_unique<SomeClass>();  //Safe, auto-deleting pointer
        object->setString(inputString);   // Set the string
        object->printValue();   // Print string and checksum
    }

    // If a third argument "null" is provided, output a special case
    if (argc == 4 && std::string(argv[3]) == "null") {
        auto object = std::make_unique<SomeClass>();
        object->setString("NULL");
        object->printValue();
    }

    return 0;
}
