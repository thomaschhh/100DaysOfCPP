//
//  main.cpp
//  day23
//
//  Created by Thomas Holz on 07.02.23.
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, const char * argv[]) {
    // dereferencing a pointer to get to the data it's pointing to
    int score {100};
    int* score_ptr {&score};

    std::cout << *score_ptr << std::endl;  // dereferencing

    *score_ptr = 200;  // L-value, accesses address
    
    std::cout << *score_ptr << std::endl;
    std::cout << score << std::endl;

    std::cout << "\n---" << std::endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double* temp_ptr {&high_temp};

    std::cout << *temp_ptr << std::endl;
    temp_ptr = &low_temp;
    std::cout << *temp_ptr << std::endl;

    std::cout << "\n---" << std::endl;

    std::string name {"Tom"};
    std::string* string_ptr {&name};

    std::cout << *string_ptr << std::endl;
    name = "Alex";
    std::cout << *string_ptr << std::endl;

    std::cout << "\n---" << std::endl;
    std::vector<std::string> names {"Nick", "Moe", "Avril"};
    std::vector<std::string>* vector_ptr {nullptr};
    
    vector_ptr = &names;
    
    std::cout << "First name: " << (*vector_ptr).at(0) << std::endl;
    
    std::cout << "Names: ";
    for (auto name: *vector_ptr) std::cout << name << " ";  // dereferencing std::vector<std::string>*
    
    std::cout << std::endl;
    
    return 0;
}



