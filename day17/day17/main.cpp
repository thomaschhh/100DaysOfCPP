//
//  main.cpp
//  day17
//
//  Created by Thomas Holz on 01.02.23.
//

#include <iostream>


void set_array(int numbers [], size_t size, int value){
    // we can modify the actual array because we are passing
    // the location the the actual array
    for (size_t i {0}; i < size; ++i) {
        numbers[i] = value;
    }
    std::cout << std::endl;
}

void print_array_const(const int numbers [], size_t size){
    // we cannot modify the actual array because the array is
    // read-only due to const
    for (size_t i {0}; i < size; ++i) {
        std::cout << numbers[i] << " ";
//        numbers[i] = 0;  // throws a compiler error
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    // passing arrays to functions
    // only the address of the first element of the array is copied
    const int size_array {6};
    int numbers [size_array]{1,2,4,5,67,92};
    int replace_value {65};
    
    print_array_const(numbers, size_array);
    set_array(numbers, size_array, replace_value);
    print_array_const(numbers, size_array);
    
    return 0;
}
