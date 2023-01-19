//
//  main.cpp
//  day4
//
//  Created by Thomas Holz on 19.01.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // arrays are compound data types, all elements of the same type
    // each element can be accessed directly by their indexes
    // they are fixed size and they are stored contiguously in memory
    // there is no checking if you are out of bounds
    // they are rarely used in modern C++
    // the name of the array represents the location of the first element in the array
    int scores [5]; // last is one zero
    std::cout << "scores index 3: " << scores[3] << std::endl; // junk value
    
    int test_scores [5] {1,2,3,4}; // last is one zero
    std::cout << "test_score index 0: " << test_scores[0] << std::endl;
    
    // number of elements in array must be know at compile time
    const int days_in_year {365};
    double hi_temperatures [days_in_year] {0}; // all zeros
    
    int an_array [] {1,2,4}; //  size is calculated
    
    test_scores[0] = 1239;
    std::cout << "test_score index 0: " << test_scores[0] << std::endl;
    
    std::cout << "test_score's memory location: " << test_scores << std::endl;
    
    // 2D arrays
    const int rows {3};
    const int cols {4};
    int movie_rating [rows][cols] {0};
    
    int grades[rows][cols]
    {
        {1,2,2,3},
        {1,2,2,3},
        {1,2,2,3}
    };
    
    return 0;
}
