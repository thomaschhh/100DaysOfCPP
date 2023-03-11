//
//  Account.cpp
//  day55
//
//  Created by Thomas Holz on 11.03.23.
//

#include "Account.hpp"
#include <iostream>


void Account::get_balance() {
    std::cout << "Balance is: " << balance_ << std::endl;
}

Account::Account(): Account{10000}{
    std::cout << "Account constructor" << std::endl;
}

Account::Account(int balance): balance_{balance}{
    std::cout << "Account constructor" << std::endl;
}

Account::~Account(){
    std::cout << "Account destructor" << std::endl;
}
