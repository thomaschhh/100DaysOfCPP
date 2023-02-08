//
//  main.cpp
//  day24
//
//  Created by Thomas Holz on 08.02.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // dynamic memory allocation (from the heap): often we don't know how much storage we need until we need it
    // solution -> allocate storage for variable at runtime
    // use pointers to access newly allocated heap storage (free store) with the keyword 'new'
    // however, remember to deallocate the storage with 'delete'
    
    int* int_ptr {nullptr};  // allocated on the stack
    int_ptr = new int;  // dynamic allocation of storage on the heap
    std::cout << int_ptr << std::endl;  // address of the pointer
    delete int_ptr;

    size_t size{0};
    double* temp_ptr {nullptr};

    std::cout << "How many temperatures? ";
    std::cin >> size;

    temp_ptr = new double[size];  // dynamic allocation of storage on the heap
    std::cout << temp_ptr << std::endl;
    delete [] temp_ptr;

    return 0;
}
