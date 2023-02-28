//
//  main.cpp
//  day44
//
//  Created by Thomas Holz on 28.02.23.
//
//  Operator overloading - move assignment (=)

#include <iostream>
#include "Astring.hpp"


int main(int argc, const char * argv[]) {
    Astring a {"Test string"};
    Astring b;
    
    b = a;  // copy assignment
    std::cout << "-----" << std::endl;
    b = "Another random string";  // move assignment
    
    a.display();
    b.display();
    
    std::cout << "-----" << std::endl;
    
    Astring c {a};
    
    c.display();

    return 0;
}
