//
//  main.cpp
//  day55
//
//  Created by Thomas Holz on 11.03.23.
//
// Unique pointers
// - can be copied / moved / assigned and point to the same object on the heap
// - have a counter -> pointer is destroyed when counter == 0


#include <iostream>
#include <memory>
#include <vector>

#include "Account.hpp"
#include "Trust.hpp"
#include "Checking.hpp"
#include "Savings.hpp"

int main(int argc, const char * argv[]) {
    
    std::shared_ptr<Account> account1 = std::make_shared<Trust>();
    std::shared_ptr<Account> account2 = std::make_shared<Checking>(5632);
    std::shared_ptr<Account> account3 = std::make_shared<Savings>(6654);
    
    std::cout << "\n";
    std::cout << "account1 pointer count: " << account1.use_count() << std::endl;
    std::cout << "account2 pointer count: " << account2.use_count() << std::endl;
    std::cout << "account3 pointer count: " << account3.use_count() << std::endl;
   
    {
        std::vector<std::shared_ptr<Account>> accountVector;
        
        // unlike unique pointers, shared pointers allow copies -> increases shared_ptr count
        accountVector.push_back(account1);
        accountVector.push_back(account2);
        accountVector.push_back(account3);
        
        std::cout << "\n";
        std::cout << "account1 pointer count: " << account1.use_count() << std::endl;
        std::cout << "account2 pointer count: " << account2.use_count() << std::endl;
        std::cout << "account3 pointer count: " << account3.use_count() << std::endl;
        
        // copying each account in the vector -> increases shared_ptr count
        // only for that one pointer within the scope of the loop
        for (auto accountCopy : accountVector){
            std::cout << "\n";
            accountCopy->get_balance();
            accountCopy->withdraw(500);
            std::cout << "Account pointer count: " << accountCopy.use_count() << std::endl;
        }
    }
    
    std::cout << "\n";
    std::cout << "account1 pointer count: " << account1.use_count() << std::endl;
    std::cout << "account2 pointer count: " << account2.use_count() << std::endl;
    std::cout << "account3 pointer count: " << account3.use_count() << std::endl;
    std::cout << "\n";
    
    std::shared_ptr<Account> account4 = std::make_shared<Savings>(9999);
    std::cout << "account4 pointer count: " << account4.use_count() << std::endl;
    
    std::shared_ptr<Account> account5 {account4};
    std::cout << "account4 pointer count: " << account4.use_count() << std::endl;
    std::cout << "account5 pointer count: " << account5.use_count() << std::endl;
    
    account4.reset();  // nullptr -> account5 still points to the object
    std::cout << "account4 pointer count: " << account4.use_count() << std::endl;
    std::cout << "account5 pointer count: " << account5.use_count() << std::endl;
    
    return 0;
}
