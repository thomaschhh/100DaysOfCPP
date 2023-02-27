//
//  main.cpp
//  day43
//
//  Created by Thomas Holz on 27.02.23.
//
// Assignment operator overloading - copy

#include <vector>
#include "Astring.hpp"
#include <iostream>


int main(int argc, const char * argv[]) {
    Astring a {"Test string"};
    Astring b;
    
    b = a;  // b.operator=(a) is called
    b = "Another random string";
    
    a.display();
    b.display();
    
    std::cout << "-----" << std::endl;
    
    Astring c {a};
    
    c.display();

    return 0;
}
