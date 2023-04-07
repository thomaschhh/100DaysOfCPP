//
//  main.cpp
//  day82
//
//  Created by Thomas Holz on 07.04.23.
//
//  consteval


#include <iostream>


// immediate function
// every potentially-evaluated call to the function must (directly or indirectly) produce a compile time constant expression.
// same as constexpr, a consteval specifier implies inline.
consteval int square(int n) {
    return n*n;
}

int main(int argc, const char * argv[]) {
    
    // if n would not be constexpr:
    // Call to consteval function 'factorial' is not a constant expression
    constexpr int n = 5;
    
    // the compiler will replace the result of the function call with 25
    constexpr int nSquared = square(n);
    std::cout << "square of " << n << " is " << nSquared << std::endl;
    return 0;
    
    return 0;
}
