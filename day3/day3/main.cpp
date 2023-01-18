//
//  main.cpp
//  day3
//
//  Created by Thomas Holz on 18.01.23.
//

#include <iostream>

// old C or C++ code, don't use
#define pi 3.1415926

int main(int argc, const char * argv[]) {
    // sizeof determines the size in bytes of a type or a variable
    std::cout << "char: " << sizeof(char) << "bytes" << std::endl;
    std::cout << "int: " << sizeof(int) << "bytes" << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << std::endl;
    std::cout << "short: " << sizeof(short) << "bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << "bytes" << std::endl;
    std::cout << "long long: " << sizeof(long long) << "bytes" << std::endl;
    
    std::cout << "float: " << sizeof(float) << "bytes" << std::endl;
    std::cout << "double: " << sizeof(double) << "bytes" << std::endl;
    std::cout << "long double: " << sizeof(long double) << "bytes" << std::endl;
    
    std::cout << "INT_MIN: " << sizeof(INT_MIN) << "bytes" << std::endl;
    std::cout << "LONG_MAX: " << sizeof(LONG_MAX) << "bytes" << std::endl;
    
    int age {28};
    std::cout << "sizeof age: " << sizeof(age) << "bytes" << std::endl;
    
    // constants, once declared they cannot be changed
    const int monthsInYear {12};
    
    return 0;
}
