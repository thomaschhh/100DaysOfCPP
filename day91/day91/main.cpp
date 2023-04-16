//
//  main.cpp
//  day91
//
//  Created by Thomas Holz on 16.04.23.
//
//  using / typedef
//  both can be used to create type aliases
//  specified namespace will take precedence over any other namespace that is in scope

#include <iostream>
#include <vector>

typedef long long ll;
//typedef std::vector<int>IntVector;
using IntVector = std::vector<int>;


int main(int argc, const char * argv[]) {
    ll a = 4;
    std::cout << a << std::endl;
    
    IntVector vec = { 1, 2, 3, 4, 5 };
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    
    using SizeType = IntVector::size_type;
    SizeType size = vec.size();
    std::cout << "The size of the vector is " << size << std::endl;
    
    
    return 0;
}
