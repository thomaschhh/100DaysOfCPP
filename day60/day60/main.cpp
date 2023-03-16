//
//  main.cpp
//  day60
//
//  Created by Thomas Holz on 16.03.23.
//
// Multiple Exceptions

#include <iostream>
#include <string>


const double calc_average (const double& price, const double& kg){
    if (kg == 0){
        throw 0;
    } else if (price < 0 || kg < 0){
        throw std::string {"'price' and 'kg' have to be positive numbers."};
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
        
    } catch (int& exce) {
        std::cout << "You must specify a value > 0 for 'kg'."<< std::endl;
    } catch (std::string& exce) {
        // use the thrown error in output stream
        std::cout << exce << std::endl;
    } catch(...){
        std::cout << "Error is unknown." << std::endl;
    }
        
    return 0;
}
