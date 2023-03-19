//
//  main.cpp
//  day63
//
//  Created by Thomas Holz on 19.03.23.
//
// Function Templates


#include <iostream>
#include "Boat.hpp"

// blueprint
// instead of 'typename' you could also use 'Class'
template <typename T>
T find_min(const T& number1, const T& number2){
    return (number1 < number2) ? number1 : number2;
}

int main(int argc, const char * argv[]) {
    double a {10.22};
    double b {2.02};
    std::cout << find_min(a, b) << std::endl;
    
    int c {199};
    int d {202};
    std::cout << find_min(c, d) << std::endl;
    
    Boat boat1 {1987, "Sydney"};
    Boat boat2 {};
    
    Boat boat3 = find_min(boat1, boat2);
    std::cout << boat3.boat_name_ << " is the oldest. It was built " << boat3.date_build_ << std::endl;
    
    return 0;
}
