//
//  Player.hpp
//  day39
//
//  Created by Thomas Holz on 23.02.23.
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
    
    // Copy constructor
    Player(const Player& original);
    
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
    // constructor allocates storage dynamically and initializes pointer
    // destuctor releases its memory
    // when copied shallowly, the pointer is pointer to an invalid address
    // however the copied object still refers to the released memory location -> Error
    int* data_;
    
};
