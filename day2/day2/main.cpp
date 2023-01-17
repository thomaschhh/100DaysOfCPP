//
//  main.cpp
//  day2
//
//  Created by Thomas Holz on 17.01.23.
//

// --- Global variables
// if a local with the same name exists, the global variable
// will be neglected
// can be changed and accessed from anywhere in the program
int anotherAge {19};

#include <iostream>

int main(int argc, const char * argv[]) {
    
    // --- Declaration and Initialization
    // a variable is an abstraction for a memory location
    // compiler needs to know the data type
    // variables must be declared before they are used
    // they can contain: letters, numbers, underscores BUT cannot start with a number
    int age; // static declaration, uninitialized, any value that is at that memory location
    age = 1;
    
    std::cout << "Age is " << age << std::endl;
    
//    int height (21); // Constructor initialization
    int height {21}; // C++ 11 list initialization
    std::cout << "Height is " << height << std::endl;
    
    // --- Primitive Data Types
    // character type is exactly one byte (8bits - 256 characters)
    // char, char16_t, char32_t, wchar_t
    char middleInitial {'J'};
    std::cout << "middleInitial is " << middleInitial << std::endl;
    
    // integer (by default signed) - 16 bits
    unsigned short int examScore {55};
    long peopleInFlorida {20'610'000};  // C++14 allows tick marks
    long peopleOnEarth {8'000'000'000};
    std::cout << "examScore is " << examScore << std::endl;
    std::cout << "peopleInFlorida is " << peopleInFlorida << std::endl;
    std::cout << "peopleOnEarth is " << peopleOnEarth << std::endl;
    
    // floating point - represented by mantissa and exponent (scientific notation)
    // precision and size are compiler dependent
    // float 7, double 15, long double 19
    float carPayment {401.23};
    float pi {3.14159};
    std::cout << "carPayment is " << carPayment << std::endl;
    std::cout << "pi is " << pi << std::endl;
    
    // booleans represent true or false (usually 8 bits)
    bool gameOver {false};
    std::cout << "The value of gameOver is: " << gameOver << std::endl;
    
    return 0;
}
