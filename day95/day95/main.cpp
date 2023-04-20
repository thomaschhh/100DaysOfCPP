//
//  main.cpp
//  day95
//
//  Created by Thomas Holz on 20.04.23.
//
//  ranges

#include <iostream>
#include <ranges>
#include <vector>


int main(int argc, const char * argv[]) {
    std::vector<int> input =  { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    // define a lambda function to filter even numbers
    auto divisible_by_two = [](const int n) {return n % 2 == 0; };
    
    // define a lambda function to cube a number
    auto cube = [](const int n) {return n * n * n; };

    // use range adaptors to filter and transform the vector
    auto x = input | std::views::filter(divisible_by_two) | std::views::transform(cube);

    for (size_t i : x){
        std::cout << i << ' ';
    }
    
    std::cout << std::endl;
    
    return 0;
}
