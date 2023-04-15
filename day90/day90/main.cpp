//
//  main.cpp
//  day90
//
//  Created by Thomas Holz on 15.04.23.
//
//  iota
//  assign successive values of value to every element in a specified range

#include <iostream>
#include <numeric>
#include <vector>


int main(int argc, const char * argv[]) {
    std::vector<int> v(10);
    
    // Use iota to assign the values 0 to 9 to the vector elements
    std::iota(v.begin(), v.end(), 0);
    
    for (int i : v) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}
