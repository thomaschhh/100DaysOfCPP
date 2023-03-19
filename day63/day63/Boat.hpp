//
//  Boat.hpp
//  day63
//
//  Created by Thomas Holz on 19.03.23.
//

#ifndef Boat_hpp
#define Boat_hpp

#include <stdio.h>
#include <string>

class Boat {
public:
    Boat();
    Boat(int date_build);
    Boat(std::string boat_name);
    Boat(int date_build, std::string boat_name);
    
    // overloaded operator for being able to use templated function
    bool operator<(const Boat& rhs) const {
        return this->date_build_ < rhs.date_build_;
    }
    
    std::string boat_name_ {};
    int date_build_ {};
};

#endif /* Boat_hpp */
