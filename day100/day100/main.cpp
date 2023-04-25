//
//  main.cpp
//  day100
//
//  Created by Thomas Holz on 25.04.23.
//
//  rotate


#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char * argv[]) {
    std::vector<int> vec{1, 2, 3, 4, 5};
    const int shift {3};
    
    // rotate the vector 3 positions to the left
    std::rotate(vec.begin(), vec.begin() + shift, vec.end());
    
    // print the rotated vector
    for (const auto& num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
