//
//  Player.hpp
//  day41
//
//  Created by Thomas Holz on 25.02.23.
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
    Player(Player&& source) noexcept;
    
    void set_name(std::string name);
    void set_health(int health);
    void set_xp(int xp);
    
    // Getters need to be set const for const classes
    std::string get_name(void) const;
    int get_health(void) const;
    int get_xp(void) const;
    
private:
    std::string name_;
    int health_;
    int xp_;
    int* data_;
};
