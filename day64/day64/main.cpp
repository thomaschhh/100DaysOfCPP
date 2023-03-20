//
//  main.cpp
//  day64
//
//  Created by Thomas Holz on 20.03.23.
//
//  Class Templates

#include <iostream>
#include "Numbers.hpp"


int main(int argc, const char * argv[]) {
    
    Numbers<int, double> number1 {100,  234.3, "number1"};
    Numbers<double, double> number2 {7890.11,  234.3, "number2"};
    Numbers<std::string, std::string> number3 {"7123",  "98", "number3"};
    
    std::cout << number1.getName() << std::endl;
    std::cout << number1.getVal1() << std::endl;
    std::cout << number1.getVal2() << std::endl;

    std::cout << " ---------- " << std::endl;
    std::cout << number2.getName() << std::endl;
    std::cout << number2.getVal1() << std::endl;
    std::cout << number2.getVal2() << std::endl;
    
    std::cout << " ---------- " << std::endl;
    std::cout << number3.getName() << std::endl;
    std::cout << number3.getVal1() << std::endl;
    std::cout << number3.getVal2() << std::endl;
    
    return 0;
}
