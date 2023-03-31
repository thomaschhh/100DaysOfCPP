//
//  main.cpp
//  day75
//
//  Created by Thomas Holz on 31.03.23.
//
//  measuring time


#include <iostream>
#include <chrono>
#include <iomanip>      // std::setprecision


int main(int argc, const char * argv[]) {
    
    double sum = 0;
    double add = 1;

    // measure start time
    // begin is of type std::chrono::steady_clock::time_point
    auto begin = std::chrono::high_resolution_clock::now();
    int iterations = 60000;
    
    for (size_t i=0; i<iterations; i++) {
        sum += add;
        add *= .6;
    }
    
    // measure end time
    auto end = std::chrono::high_resolution_clock::now();
    auto time_elapsed = static_cast<double>(std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count());

    std::cout << "Time used to run the for loop: " << std::setprecision(10) << time_elapsed * 1e-9 << " seconds." << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    
    return 0;
}
