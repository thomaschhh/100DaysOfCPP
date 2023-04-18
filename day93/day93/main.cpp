//
//  main.cpp
//  day93
//
//  Created by Thomas Holz on 18.04.23.
//
//  random number generator

#include <iostream>
#include <random>

int main(int argc, const char * argv[]) {
    const int lower_bound = 1;
    const int upper_bound = 10;
    const int seed = 1234; // fixed seed value

    std::mt19937 rng(seed);
    std::uniform_int_distribution<int> dist(lower_bound, upper_bound);

    std::cout << "Random number between " << lower_bound << " and " << upper_bound << ": ";
    for (int i = 0; i < 10; i++) {
        std::cout << dist(rng) << " ";
    }
    std::cout << std::endl;

    return 0;
}
