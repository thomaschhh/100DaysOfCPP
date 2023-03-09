//
//  main.cpp
//  day53
//
//  Created by Thomas Holz on 09.03.23.
//
// Abstract base class
// Parent to derived classes; however it is too generic to create an object from
// It contains pure virtual functions; makes a class abstract -> derived classes must override that function
// otherwise it is also abstract


#include <iostream>

// abstract class
class Account  {
    public:
        int balance_ {10000};
        
        // this pure virtual function makes it an abstract class
        virtual void withdraw(double amount) = 0;
    
        virtual void get_balance() final {
            std::cout << "Balance is: " << balance_ << std::endl;
        }
        virtual ~Account(){
            std::cout << "Account destructor" << std::endl;
        }
};

// concrete class
class Checking: public Account  {
    public:
        
        // overrides pure virtual function
        virtual void withdraw(double amount) override{
            std::cout << "Checking withdraw" << std::endl;
            balance_ -= 1.5 * amount;
        }
        virtual ~Checking(){
            std::cout << "Checking destructor" << std::endl;
        }
};

// concrete class
class Savings: public Account  {
    public:
        // overrides pure virtual function
        virtual void withdraw(double amount) override {
            std::cout << "Savings withdraw" << std::endl;
            balance_ -= 2 * amount;
        }
        virtual ~Savings(){
            std::cout << "Savings destructor" << std::endl;
        }
};

// concrete class
class Trust: public Account  {
    public:
        // overrides pure virtual function
        virtual void withdraw(double amount) override {
            std::cout << "Trust withdraw" << std::endl;
            balance_ -= 3 * amount;
        }
        virtual ~Trust(){
            std::cout << "Trust destructor" << std::endl;
        }
};

int main(int argc, const char * argv[]) {
    
//    Account* account1 = new Account();  // no longer possible as Account is an abstract class

    
    // even though an abstract class cannot be instantiated, a pointer of that type
    // can be instantiated
    Account* accountPtr = new Trust();
    accountPtr->withdraw(500);
    accountPtr->get_balance();
    
    delete accountPtr;
    
    return 0;
}
