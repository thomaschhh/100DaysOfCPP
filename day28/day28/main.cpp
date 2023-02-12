//
//  main.cpp
//  day28
//
//  Created by Thomas Holz on 12.02.23.
//

#include <iostream>

int* create_array(size_t size, int init_value = 0) {
   int* new_storage {nullptr};
   new_storage = new int[size];
   for (size_t i{0}; i < size; ++i)
      *(new_storage + i) = init_value;
   return new_storage;
}

void display(const int* const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    // return a pointer from a function
    // never return a pointer to a local funtcion variable
    // should return pointers to memory dynamically allocated in a function
    // or to data which was passed in
    int* array {nullptr};
    size_t size;
    int init_value {};
    
    std::cout << "How many integers would you like to allocate? ";
    std::cin >> size;
    std::cout << "What value would you like them initialized to? ";
    std::cin >> init_value;
    
    array = create_array(size, init_value);
    std::cout << "---" << std::endl;

    display(array, size);
    delete [] array;
    
    return 0;
}
