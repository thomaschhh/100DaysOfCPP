//
//  main.cpp
//  day10
//
//  Created by Thomas Holz on 25.01.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // while
    int i {1};
    const int max {5};
    while (i <= max) {
        std::cout << i << "\n";
        ++i;
    }
    
    bool done {false};
    int num {};
    
    while (!done) {
        std::cout << "Enter an integer less than 100" << std::endl;
        std::cin >> num;
        
        if (num >= 100) {
            std::cout << "You typed in a number >= 100" << std::endl;
        }else{
            std::cout << "Thanks, you typed in a " << num << std::endl;
            done = true;
        }
    }
    
    // do while, executes body at least once, post test-loop
    int number {};
    do{
        std::cout << "Enter an integer less than 100" << std::endl;
        std::cin >> number;
    } while (number >= 100);
    std::cout << "Thanks, you typed in a " << number << std::endl;
    
    return 0;
}
