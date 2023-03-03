//
//  Player.hpp
//  day47
//
//  Created by Thomas Holz on 03.03.23.
//
// More specialized class (derived class)

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Person.hpp"

class Player: public Person {
public:
    Player();
    ~Player();
    
    std::string role_;
    int xp_;
    
    void greet();
    void report_health();
    void report_role();
    void report_xp();
    void change_name(std::string new_newname);
};

#endif /* Player_hpp */
