//
//  main.cpp
//  day36
//
//  Created by Thomas Holz on 20.02.23.
//
// Initializer list
// Are more efficient, initializes the data members as the object is created!

#include <iostream>
#include "Player.hpp"

int main(int argc, const char * argv[]) {
    Player tom;
    Player toby("Toby");
    Player marc("Marc", 55, 13);

    tom.set_health(89);
    tom.set_xp(9);
    
    marc.set_health(99);
    
    std::cout << toby.get_name() << " has " << toby.get_xp() << " xp " \
    "and his health is " << toby.get_health() << std::endl;
    
    std::cout << std::endl;
    std::cout << marc.get_name() << " has " << marc.get_xp() << " xp " \
    "and his health is " << marc.get_health() << std::endl;
    
    return 0;
}
