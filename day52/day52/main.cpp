//
//  main.cpp
//  day51
//
//  Created by Thomas Holz on 08.03.23.
//
// Override
// Ensure you have the same method definition as the base class
// and therefore ensure polymorphic behavior
// If that that's not the case, the function would be redefined
// and statically bound

// Final
// At class level, a class cannot be derived from
// At method level, a derived class cannot override it anymore
/*
 class Account final {
   .
   .
   .
 };
 // This would no longer work
 class Checking: public Account  {
   .
   .
   .
 };
 
 
 virtual void withdraw(double amount) final {};
 in base class (Account) wouldn't allow derived classes
 to override it
 */

#include <iostream>

class Account  {
    public:
        int balance_ {10000};
    
        virtual void withdraw(double amount) {
            std::cout << "Account withdraw" << std::endl;
            balance_ -= amount;
        }
    
        virtual ~Account(){
            std::cout << "Account destructor" << std::endl;
        }
};

class Checking: public Account  {
    public:
        virtual void withdraw(double amount) override{
            std::cout << "Checking withdraw" << std::endl;
            balance_ -= 1.5 * amount;
        }
        virtual ~Checking(){
            std::cout << "Checking destructor" << std::endl;
        }
};

class Savings: public Account  {
    public:
        virtual void withdraw(double amount) override {
            std::cout << "Savings withdraw" << std::endl;
            balance_ -= 2 * amount;
        }
        virtual ~Savings(){
            std::cout << "Savings destructor" << std::endl;
        }
};

class Trust: public Account  {
    public:
        virtual void withdraw(double amount) override {
            std::cout << "Trust withdraw" << std::endl;
            balance_ -= 3 * amount;
        }
        virtual ~Trust(){
            std::cout << "Trust destructor" << std::endl;
        }
};

int main(int argc, const char * argv[]) {
    
    Account* account1 = new Account();
    Account* account2 = new Savings();
    Account* account3 = new Checking();
    Account* account4 = new Trust();
    
    Account* accountArray [] {account1, account2, account3, account4};
    
    // access virtual function of base / abstract classes
    for(size_t i=0; i<4; ++i){
        accountArray[i]->withdraw(1000);
        std::cout << "Address to pointer: " << &accountArray[i] << "\n" << std::endl;
    }
    
    // delete pointers
    for(size_t i=0; i<4; ++i){
        delete accountArray[i];
    }
    
    return 0;
}
