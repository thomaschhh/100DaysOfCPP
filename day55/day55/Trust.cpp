//
//  Trust.cpp
//  day55
//
//  Created by Thomas Holz on 11.03.23.
//

#include "Trust.hpp"
#include <iostream>


void Trust::withdraw(double amount)  {
    std::cout << "Trust withdraw" << std::endl;
    balance_ -= 3 * amount;
}

Trust::Trust(int amount) : Account{amount}{
    std::cout << "Trust constructor" << std::endl;
}

Trust::Trust() : Account{5000}{
    std::cout << "Trust constructor" << std::endl;
}

Trust::~Trust(){
    std::cout << "Trust destructor" << std::endl;
}
