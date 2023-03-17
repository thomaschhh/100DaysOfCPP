//
//  main.cpp
//  day61
//
//  Created by Thomas Holz on 17.03.23.
//
// Used Defined Exceptions Based on std::exception

#include <iostream>
#include "DivideByZeroException.h"
#include "NegativityException.h"


const double calc_average (const double& price, const double& kg){
    if (kg == 0){
        throw DivideByZeroException{};
    } else if (price < 0 || kg < 0){
        throw NegativityException{};
    }
    
    return price / kg;
};

int main(int argc, const char * argv[]) {
    
    double price {};
    double kg {};
    double average {};
    
    std::cout << "Enter a value for 'price': ";
    std::cin >> price;
    std::cout << "Enter a value for 'kg': ";
    std::cin >> kg;
    
    try {
        average = calc_average(price, kg);
        
        std::cout << "The average 'price' per 'kg' is: " << average << std::endl;
        
    } catch (const DivideByZeroException& exce) {
        std::cout << exce.what() << std::endl;
    } catch (const NegativityException& exce) {
        std::cout << exce.what() << std::endl;
    } catch(...){
        std::cout << "Error is unknown." << std::endl;
    }
        
    return 0;
}
