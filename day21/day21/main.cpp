//
//  main.cpp
//  day21
//
//  Created by Thomas Holz on 05.02.23.
//

#include <iostream>

unsigned long long factorial(unsigned long long n){
    if (n == 0) return 1; // base case
    
    return n * factorial(n-1);  // recursive case
}

unsigned long long fibonacci(unsigned long long n){
    if (n <= 1) return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, const char * argv[]) {
    // recursive functions
    // anything that can be done recursively can be done iteratively
    // -> can be resource hungry and lead to stack overflow
    
    int number {12};

    std::cout << factorial(number) <<std::endl;
    std::cout << fibonacci(number) <<std::endl;
    
    return 0;
}
