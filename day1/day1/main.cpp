//
//  main.cpp
//  day1
//
//  Created by Thomas Holz on 16.01.23.
//

// #directive, processed by pre-processor
// tells compiler to include the file called 'iostream'
// <> tells the compiler to look in the standard folder
// "" tells the compiler to look in the current directory
#include <iostream>

// create a macro using #define
// matching tokens are replaced by the given expression
// can also be a function: #define INCREMENT(x) ++x
#define MAXIMUM 100

int main(int argc, const char * argv[]) {
    
    int favNumber;
    
    // std is a namespace
    // 'using namespace std' pulls in all type definitions into the current scope -> to be avoided
    // instead use std::
    std::cout << "What's your favorite number between 1 and " << MAXIMUM << "?\n" << std::endl;
    std::cin >> favNumber;
    
    std::cout << "Your favorite number is: " << favNumber << std::endl;
    
    
    return 0;
}
