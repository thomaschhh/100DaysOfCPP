//
//  main.cpp
//  day67
//
//  Created by Thomas Holz on 23.03.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
  
    int number1 {100};
    std::cout << &number1 << std::endl;
    
    auto copy_lambda = [number1] () {
        std::cout << &number1 << std::endl;
//        number1 = 120; // not possible as not passed by reference
    };
    
    auto reference_lambda = [&number1] () {
        std::cout << &number1 << std::endl;
        number1 = 120;
    };
    
    std::cout << "-------------" << std::endl;
    std::cout << number1 << std::endl;
    
    std::cout << "-------------" << std::endl;
    copy_lambda();  // copying the object - different address
    reference_lambda();  // passed by reference - no copy
    
    std::cout << "-------------" << std::endl;
    std::cout << number1 << std::endl;
    
    std::cout << "------- capture mulitple objects at once ------" << std::endl;
    int number2 {1}, number3 {45}, number4 {90};
    
    auto capture_by_value = [=] () {
        std::cout << number2 << std::endl;
        std::cout << number3 << std::endl;
        std::cout << number4 << std::endl;
    };
    
    auto capture_by_reference = [&] () {
        number2 = 89;
        number3 = 8;
        number4 = 1239;
    };
    
    capture_by_value();
    capture_by_reference();
    
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;
    
    return 0;
}
