//
//  Trust.hpp
//  day55
//
//  Created by Thomas Holz on 11.03.23.
//

#ifndef Trust_hpp
#define Trust_hpp

#include <stdio.h>
#include "Account.hpp"

class Trust: public Account  {
    public:
        virtual void withdraw(double amount) override;
        Trust();
        Trust(int amount);
        virtual ~Trust();
};

#endif /* Trust_hpp */
