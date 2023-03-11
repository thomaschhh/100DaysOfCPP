//
//  Account.hpp
//  day55
//
//  Created by Thomas Holz on 11.03.23.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>

class Account  {
    public:
        int balance_;
        
        virtual void withdraw(double amount) = 0;
        virtual void get_balance() final;
        
        Account();
        Account(int balance);
        virtual ~Account();
};

#endif /* Account_hpp */
