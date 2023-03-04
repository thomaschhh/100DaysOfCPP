//
//  Player.hpp
//  day48
//
//  Created by Thomas Holz on 04.03.23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Person.hpp"

class Player: public Person {
public:
    Player();
    Player(std::string role, int xp, int health, std::string name);
    ~Player();
    
    std::string role_;
    int xp_;
    
    void greet();
    void report_health();
    void report_role();
    void report_xp();
    void change_name(std::string new_newname);
    void double_health();
};

#endif /* Player_hpp */
