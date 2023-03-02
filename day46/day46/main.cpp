//
//  main.cpp
//  day46
//
//  Created by Thomas Holz on 02.03.23.
//
// Overload global stream insertion / extration operators

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
    
    Astring e;
    std::cout << "Enter a string for 'e': " << std::endl;
    std::cin >> e;
    std::cout << "You entered " <<  e << std::endl;
    
    return 0;
}
