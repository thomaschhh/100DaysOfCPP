//
//  Player.hpp
//  day35
//
//  Created by Thomas Holz on 19.02.23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>

#endif /* Player_hpp */

class Player {
public:
    Player();  // Default constructor
    Player(std::string name);
    Player(std:: string name, int health, int xp);
    ~Player();  // Default destructor
    
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
