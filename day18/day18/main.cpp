//
//  main.cpp
//  day18
//
//  Created by Thomas Holz on 02.02.23.
//

#include <iostream>

void scale_number(int& num){
    // pass by reference allows changing the param
    // const int& would no longer allow it
    const int scale_factor {200};
    const int threshold {10};
    
    if (num > threshold) {
        num *= scale_factor;
    }
    std::cout << num << std::endl;
}

int main(int argc, const char * argv[]) {
    // pass by reference
    // creates an alias to the actual parameter, no copy is made
    int a_number {33};
    std::cout << a_number << std::endl;
    
    scale_number(a_number);
    
    return 0;
}
