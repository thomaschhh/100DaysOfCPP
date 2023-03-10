//
//  Checking.cpp
//  day54
//
//  Created by Thomas Holz on 10.03.23.
//

#include "Checking.hpp"
#include <iostream>

void Checking::withdraw(double amount) {
    std::cout << "Checking withdraw" << std::endl;
    balance_ -= 1.5 * amount;
}

Checking::Checking(int amount) : Account{amount}{
    std::cout << "Checking constructor" << std::endl;
}

Checking::Checking() : Account{2000}{
    std::cout << "Checking constructor" << std::endl;
}

Checking::~Checking(){
    std::cout << "Checking destructor" << std::endl;
}
