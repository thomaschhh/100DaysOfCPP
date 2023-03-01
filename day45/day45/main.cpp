//
//  main.cpp
//  day45
//
//  Created by Thomas Holz on 01.03.23.
//
// Overload binary operators

#include <iostream>
#include "Astring.hpp"

int main(int argc, const char * argv[]) {
    Astring a {"Test string"};
    Astring b;
    
    b = a;
    std::cout << "-----" << std::endl;
    b = "Another random string";
    
    a.display();
    b.display();
    
    std::cout << "-----" << std::endl;
    
    Astring c {a};
    
    c.display();

    bool result {b == a};
    
    std::cout << result << std::endl;
    
    Astring d {a+b};
    d.display();
    
    return 0;
}
