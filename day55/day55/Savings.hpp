//
//  Savings.hpp
//  day55
//
//  Created by Thomas Holz on 11.03.23.
//

#ifndef Savings_hpp
#define Savings_hpp

#include <stdio.h>
#include "Account.hpp"


class Savings: public Account  {
    public:
        virtual void withdraw(double amount) override;
        Savings(int amount);
        Savings();
        virtual ~Savings();
};

#endif /* Savings_hpp */
