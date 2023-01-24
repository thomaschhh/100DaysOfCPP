//
//  main.cpp
//  day9
//
//  Created by Thomas Holz on 24.01.23.
//

#include <iostream>
#include <vector>
#include <iomanip>  // format output

int main(int argc, const char * argv[]) {
    // looping is also called iteration, third basic building block beside 'sequence' and 'selection'
    // loop condition, loop body
    // for loop: iterate a specific number of times
    // for (initialization; condition; increment) {statements;}
    // the initialization variable is only visible in the for loop
    int scores [] {100, 90, 87};
    for (int i {0}; i < 3; ++i) {
        std::cout << "score at index: " << i << " " << scores[i]<< std::endl;
    }
    
    for (int i {1}, j {5}; i < 6; ++i, j+=2) {
        std::cout << i << "*" << j << " = " << i*j << std::endl;
    }
    
    std::vector<int> nums {10, 20, 30, 40, 50};
    
    for (unsigned int i {0}; i < nums.size(); ++i) {
        std::cout << nums[i] << std::endl;
    }
//    for (; ;) {
//        std::cout << "endless loop" << std::endl;
//    }
    
    // range based for loop: one iteration for each element in a range or collection
    for (auto score : scores) {  // deduces type
        std::cout << "score " << score << std::endl;
    }
    
    std::vector<double> temperatures {54.5, 56.3, 78.6};
    double average_temp {};
    double total {};
    
    for (auto temp : temperatures) {
        total += temp;
    }
    
    if (temperatures.size() != 0) {
        average_temp = total/temperatures.size();
    }
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Average temp: " << average_temp << std::endl;
    
    return 0;
}
