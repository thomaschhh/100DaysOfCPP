//
//  main.cpp
//  day30
//
//  Created by Thomas Holz on 14.02.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // l-values: have names and are addressable, modifiable if not const
    int a {44};  // a is an l-value
    int& ref_a = a;  // references are l-values
    
    std::cout << "&a: " << &a << " &ref_a: " << &ref_a << std::endl;
    std::cout << "a: " << a << " ref_a: " << ref_a << std::endl;
    
    ref_a = 68;
    std::cout << "a: " << a << " ref_a: " << ref_a << std::endl;
    
    // r-values: non-addressable / -assignable
    // can be assigned to l-values
    // e.g. a literal, on the right-hand side of an assignment expression
    a = 1234;  // 1234 is an r value
    
    int b = a + 766;  // a + 766 is an r-value that is assigned to the l-value b
    std::cout << "b: " << b << std::endl;
    
    return 0;
}
