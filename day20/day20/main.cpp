//
//  main.cpp
//  day20
//
//  Created by Thomas Holz on 04.02.23.
//

#include <iostream>

inline int add_numbers(int a, int b){
    return  a + b;
}

int main(int argc, const char * argv[]) {
    // function use the function call stack -> can have an overhead
    // LIFO - last in first out
    // call stack is finite in size -> stack overflow
    // inline suggests compiler to compile them 'inline' -> faster
    // however, compiler's optimization will likely inline without your suggestion
    // 'inline' can bloat your code
    
    int a {5};
    int b {45};
    
    std::cout << a << " + " << b << " = " << add_numbers(a,b) << std::endl;
    return 0;
}
