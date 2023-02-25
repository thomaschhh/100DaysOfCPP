//
//  Player.hpp
//  day40
//
//  Created by Thomas Holz on 24.02.23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>

#endif /* Player_hpp */

class Player {
public:
    Player(std::string name = "Tom", int health = 0, int xp = 0, int d = 0);
    ~Player();
    Player(const Player& source);
    
    // Move constructor
    // r-value reference operator &&
    Player(Player&& source) noexcept;
    
    void set_name(std::string name);
    void set_health(int health);
    void set_xp(int xp);
    
    std::string get_name(void);
    int get_health(void);
    int get_xp(void);
    
private:
    std::string name_;
    int health_;
    int xp_;
    int* data_;
};
