//
//  main.cpp
//  day81
//
//  Created by Thomas Holz on 06.04.23.
//
//  constexpr
//  evaluate the value of the function or variable at compile time.
//  when a value is computed at compile time instead of run time, it helps your program run faster and use less memory.
//  constexpr lets you define true constant expressions that are crucial for time-critical applications
//  constexpr int var cannot be dynamically set at runtime, but rather, at compile time. And once it is set to that value, it can no longer be changed
#include <iostream>


// constexpr function must accept and return only literal types.
constexpr int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main(int argc, const char * argv[]) {
    
    // compile-time constant
    // its type must be a LiteralType.
    // it must be immediately initialized
    // the full-expression of its initialization, including all implicit conversions, constructors calls, etc, must be a constant expression
    constexpr int n = 3;
    
    // compute at compile-time
    constexpr int fact_n = factorial(n);
    std::cout << "Factorial of " << n << " is " << fact_n << std::endl;

    return 0;
}
