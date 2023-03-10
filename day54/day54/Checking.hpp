//
//  Checking.hpp
//  day54
//
//  Created by Thomas Holz on 10.03.23.
//

#ifndef Checking_hpp
#define Checking_hpp

#include <stdio.h>
#include "Account.hpp"

class Checking: public Account  {
    public:
        virtual void withdraw(double amount) override;
        
        Checking();
        Checking(int amount);
        virtual ~Checking();
};

#endif /* Checking_hpp */
