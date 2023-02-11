//
//  main.cpp
//  day27
//
//  Created by Thomas Holz on 11.02.23.
//

#include <iostream>


void double_data(int* int_ptr){
    *int_ptr *= 2;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    int value {45};
    int* int_ptr {nullptr};
    
    std::cout << "Value: " << value << std::endl;
    double_data(&value);
    std::cout << "Value: " << value << std::endl;

    int_ptr = &value;
    double_data(int_ptr);
    std::cout << "Value: " << value << std::endl;

    //-------------------------------------------
    int x {5}, y {44};
    std::cout << "\nx: " << x <<  std::endl;
    std::cout << "y: " << y <<  std::endl;

    swap(&x, &y);

    std::cout << "x: " << x <<  std::endl;
    std::cout << "y: " << y <<  std::endl;
    
    return 0;
}
