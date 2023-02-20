//
//  Player.hpp
//  day36
//
//  Created by Thomas Holz on 20.02.23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>

#endif /* Player_hpp */

class Player {
public:
    Player();
    Player(std::string name);
    Player(std:: string name, int health, int xp);
    ~Player();
    
    void set_name(std::string name);
    void set_health(int health);
    void set_xp(int xp);
    
    std::string get_name(void);
    int get_health(void);
    int get_xp(void);
private:
    std::string name_ {};
    int health_ {};
    int xp_ {};
};
