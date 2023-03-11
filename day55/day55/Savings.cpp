//
//  Savings.cpp
//  day55
//
//  Created by Thomas Holz on 11.03.23.
//

#include "Savings.hpp"
#include <iostream>

void Savings::withdraw(double amount) {
    std::cout << "Savings withdraw" << std::endl;
    balance_ -= 2 * amount;
}

Savings::Savings(int amount) : Account{amount}{
    std::cout << "Savings constructor" << std::endl;
}

Savings::Savings() : Account{1000}{
    std::cout << "Savings constructor" << std::endl;
}

Savings::~Savings(){
    std::cout << "Savings destructor" << std::endl;
}

