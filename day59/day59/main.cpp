//
//  main.cpp
//  day59
//
//  Created by Thomas Holz on 15.03.23.
//
// Exceptions
// Exist program in (more) predictable way
// - it's a primitive type signaling an error has occured
// - throwing an exceptions describes the error
// - handle the thrown error (catch the error): can cause termination of the program


#include <iostream>


// if 'kg' is 0, an exeception is thrown
// this triggers the catch block in 'main'
const double calc_average (const double& price, const double& kg){
    if (kg == 0){
        throw 0;
    }
    
    return price / kg;
};

int main(int argc, const char * argv[]) {
    
    double price {};
    double kg {};
    double average {};
    
    std::cout << "Enter a value for price: ";
    std::cin >> price;
    std::cout << "Enter a value for kg: ";
    std::cin >> kg;
    
    try {
        average = calc_average(price, kg);
        
        // if an error is thrown, the following code is not executed
        std::cout << "The average price per kg is: " << average << std::endl;
        
    } catch (int& exce) {  // can be any name here, it's 'int' because 'calc_average' throws one
        std::cout << "You must specify a value > 0 for kg."<< std::endl;
    }
        
    return 0;
}
