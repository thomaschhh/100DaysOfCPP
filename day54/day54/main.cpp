//
//  main.cpp
//  day54
//
//  Created by Thomas Holz on 10.03.23.
//
// Unique pointers
// - can't have multiple unique pointers to the same object
// - is automatically destroyed when it goes out of scope
// - can't be copied but moved
// - cannot assign unique pointers

#include <iostream>
#include <memory>
#include <vector>

#include "Account.hpp"
#include "Trust.hpp"
#include "Checking.hpp"
#include "Savings.hpp"

int main(int argc, const char * argv[]) {
    
    // does not require to be manually deleted
    std::unique_ptr<Account> account1 = std::make_unique<Trust>();
    
    account1->withdraw(500);
    account1->get_balance();
    
    std::vector<std::unique_ptr<Account>> accountVector;
    
    accountVector.push_back(std::make_unique<Trust>(460));
    accountVector.push_back(std::make_unique<Checking>(556));
    accountVector.push_back(std::make_unique<Savings>(8944));
    
    // have to call by reference because otherwise it would be copied
    // which cannot be done with unique_pointers
    for (auto& accountReference : accountVector){
        accountReference->get_balance();
        accountReference->withdraw(500);
    }
    
    return 0;
}
