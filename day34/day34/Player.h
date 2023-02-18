//
//  Player.h
//  day34
//
//  Created by Thomas Holz on 18.02.23.
//

#include <string>

// include guard, make sure the file is only included ones
// if this is not ensured and the file is included multiple times,
// the compiler throws an error

// # pragma once also works
#ifndef Player_h
#define Player_h

class Player {
public:
    void talk(void);  // declaration of the method, implemention is in Player.cpp
    void set_name(std::string aName);
    void set_health(int newHealth);
    void set_xp(int newXp);
private:
    std::string name {"Tom Smith"};
    int health {55};
    int xp {1};
};

#endif /* Player_h */
