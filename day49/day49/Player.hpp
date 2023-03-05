//
//  Player.hpp
//  day49
//
//  Created by Thomas Holz on 05.03.23.
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
    Player(const Player& otherPlayer);
    Player& operator=(const Player& rhs);
    
    std::string role_;
    int xp_;
    
    void getInfo();
    void change_name(std::string new_newname);
    void double_health();
};

#endif /* Player_hpp */
