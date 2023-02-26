//
//  Player.hpp
//  day42
//
//  Created by Thomas Holz on 26.02.23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>

class Player {
public:
    Player(std::string name = "Tom", int health = 0, int xp = 0, int d = 0);
    ~Player();
    Player(const Player& source);
    Player(Player&& source) noexcept;
    
    void set_name(std::string name);
    void set_health(int health);
    void set_xp(int xp);
    
    static int get_num_players();
    std::string get_name(void) const;
    int get_health(void) const;
    int get_xp(void) const;
    
private:
    // static member belongs to class; independent of any object
    // store class-wide info
    static int num_players_;
    
    std::string name_;
    int health_;
    int xp_;
    int* data_;
};

#endif /* Player_hpp */
