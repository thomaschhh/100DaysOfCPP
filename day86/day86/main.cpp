//
//  main.cpp
//  day86
//
//  Created by Thomas Holz on 11.04.23.
//
//  union
//  all of its member variables share the same memory location
//  assign a value to one member variable; then access another member variable -> unexpected results
//  can be a useful way to store multiple types of data in a single variable, especially if memory usage is a concern
//  'sizeof' operator: get the size of the largest member


#include <iostream>


union aUnion {
    int i;
    double f;
    char c;
};

int main(int argc, const char * argv[]) {
    
    aUnion u;
    
    std::cout << "Size of myUnion: " << sizeof(u) << " bytes" << std::endl;
    
    u.i = 42;

    std::cout << "u.i = " << u.i << std::endl;
    std::cout << "u.f = " << u.f << std::endl; // prints some unexpected value
    std::cout << "u.c = " << u.c << std::endl; // prints an ASCII character corresponding to the binary value of 42

    u.f = 3.14;

    std::cout << "u.i = " << u.i << std::endl; // prints another unexpected value
    std::cout << "u.f = " << u.f << std::endl;
    std::cout << "u.c = " << u.c << std::endl; // prints another unexpected value

    u.c = 'A';

    std::cout << "u.i = " << u.i << std::endl; // prints another unexpected value
    std::cout << "u.f = " << u.f << std::endl; // prints another unexpected value
    std::cout << "u.c = " << u.c << std::endl;
    return 0;
}
