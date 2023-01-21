//
//  main.cpp
//  day6
//
//  Created by Thomas Holz on 21.01.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // expressions: most basic building blocks of a program
    // a sequence of operators and operands that specifies a computation
    /*
     34 -> literal
     favorite_number -> variable
     1.0 * 0.9 -> addition
     a > c -> relational
     a = b -> assignment
    */
    
    // a statement is a line of code that performs some action
    // usually terminated with a semi-colon and usually contains an expression
    /*
     int x; -> declaration
     1.0 + 0.9 -> expression
     favorite_number = b -> assignment
     if (a>b) std::cout << "a is greater than b";
    */
    
    // assignment operator
    // C++ is statically typed, compiler checks if a value can be assigned to another variable
    int a_number {10}; // initialization
    int b_number {100};
    
    a_number = 45; // assignment, use the location of a_number
    // l-value: location of the variable
    // r-value: content of the variable
    a_number = b_number = 1890; // associates from right to left
    
    // arithmetic operator: + - * / %
    int num1 {4};
    int num2 {55};
    int sum = num1 + num2;
    std::cout << "num1 + num2: " << num1 + num2 << std::endl;
    std::cout << "num1 / num2: " << num1 / num2 << std::endl; // int division
    std::cout << "num2 % num1: " << num2 % num1 << std::endl; // remainder of
    
    return 0;
}
