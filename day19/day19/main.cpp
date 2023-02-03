//
//  main.cpp
//  day19
//
//  Created by Thomas Holz on 03.02.23.
//

#include <iostream>

int number {546}; // global variable

// global scope: identifier is declared outside a funcion or class
// visible to all parts of the program
// global constant are ok
// global variables -> best practice: do not use them
void global() {
    std::cout << "\nGlobal number is: " << number << " in global() before changing." << std::endl;
    number *= 2;
    std::cout << "Global number is: " << number << " in global() after changing." << std::endl;
}

// local scope: only visible within the block {} where declared
// local variables are only active while the function is executing
// and are not preserved between function calls
void local(int x) {
    int number {1000};
    std::cout << "\nLocal number is: " << number << " in local() before changing." << std::endl;
    number=x;
    std::cout << "Local number is: " << number << " in local() after changing." << std::endl;
}

// static local variable: its value is preserved between function calls
// only initialized the first time the function is called
// lives until the program is ended
void static_local() {
    static int number {5000};
    std::cout << "\nLocal static  number is: " << number << " in static_local() before changing." << std::endl;
    number += 1000;
    std::cout << "Local static  number is: " << number << " in static_local() after changing." << std::endl;
}

int main(int argc, const char * argv[]) {
   
    int number {78};
    std::cout << "number after initialization " << number << std::endl;
    
    {
        int number {123};
        std::cout << "number in its own new scope " << number << std::endl;
    }
    
    local(number);
    std::cout << "number after local() call in main(): " << number << std::endl;
    
    global();
    std::cout << "number after global() call in main(): " << number << std::endl;  // uses local version of number
    
    static_local();
    static_local();
    
    return 0;
}
