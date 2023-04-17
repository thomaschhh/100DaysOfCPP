//
//  main.cpp
//  day92
//
//  Created by Thomas Holz on 17.04.23.
//
//  merge

#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char * argv[]) {
    std::vector<int> vec1 {1, 3, 5, 7};
    std::vector<int> vec2 {2, 4, 6, 8};
    
    // Define a new vector to hold the merged result / filled with zeros
    std::vector<int> merged(vec1.size() + vec2.size());
    
    // Merge the two vectors into the new vector
    std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), merged.begin());
    
    // Print the merged result
    for (int i : merged) {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
