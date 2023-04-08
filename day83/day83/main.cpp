//
//  main.cpp
//  day83
//
//  Created by Thomas Holz on 08.04.23.
//
//  inline
//  inlining is only a request to the compiler, not a command. The compiler can ignore the request for inlining. 
//  reduces function call overhead: for small, commonly-used functions, the time needed to make the function call is often a lot more than the time needed to actually execute the function’s code
//  when the function is called the whole code gets inserted or substituted at the point of the function call
//  all the functions defined inside the class are implicitly inline

#include <iostream>

template <typename T>
inline T add(T a, T b) {
    return a + b;
}

int main(int argc, const char * argv[]) {
        
    double x = 45.23, y = 1.1209;
    double sum = add(x, y);
    
    std::cout << "Sum of " << x << " and " << y << " is " << sum << std::endl;
    
    return 0;
}
