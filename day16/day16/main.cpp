//
//  main.cpp
//  day16
//
//  Created by Thomas Holz on 31.01.23.
//

#include <iostream>

// function overloading, a type of polymorphism
// the compiler must be able to tell the functions apart based on
// the parameter lists and argument supplied
// return type is not considered

int add_numbers(int a, int b){
    return a + b;
}

double add_numbers(double a, double b){
    return a + b;
}


int main(int argc, const char * argv[]) {
    int a {5};
    int b {7};
    
    std::cout << a << " + " << b << " = " << add_numbers(a, b) << std::endl;
    
    double c {5.89};
    double d {7.093};
    
    std::cout << c << " + " << d << " = " << add_numbers(c, d) << std::endl;
    return 0;
}
