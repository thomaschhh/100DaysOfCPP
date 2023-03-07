//
//  main.cpp
//  day51
//
//  Created by Thomas Holz on 07.03.23.
//
// Polymorphism
// Let C++ figure out which function to use


#include <iostream>

// Dynamic (run-time / as the program executes) polymorphism for withdraw method because of 'virtual'
// If 'virtual' wasn't used, it would be statically (compile-time / before the program executes) bound and only
// 'Account withdraw' would be printed
// static binding is usually the default

class Account {
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
        virtual void withdraw(double amount) {
            std::cout << "Checking withdraw" << std::endl;
            balance_ -= 1.5 * amount;
        }
        virtual ~Checking(){
            std::cout << "Checking destructor" << std::endl;
        }
};

class Savings: public Account  {
    public:
        virtual void withdraw(double amount) {
            std::cout << "Savings withdraw" << std::endl;
            balance_ -= 2 * amount;
        }
        virtual ~Savings(){
            std::cout << "Savings destructor" << std::endl;
        }
};

class Trust: public Account  {
    public:
        virtual void withdraw(double amount) {
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
