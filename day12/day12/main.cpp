//
//  main.cpp
//  day12
//
//  Created by Thomas Holz on 27.01.23.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    
    // nested loops
    std::vector<std::vector<int>> vector_2d{
        {1,2,3,11},
        {4,5,6,22},
        {7,8,9,33}
    };
    
    for (auto row : vector_2d)
    {
        for (auto val : row)
        {
            std::cout << val << " ";
        }

        std::cout << std::endl;
    }
    
    return 0;
}
