//
//  main.cpp
//  day40
//
//  Created by Thomas Holz on 24.02.23.
//
// Move constructor: recommended when using raw pointers
// Move constructor moves an object rather than copy it
// Copy constructors can have a significant performance bottleneck

#include <iostream>
#include <vector>
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
    
    Player support {marc};
    support.set_name("Support");
    
    std::cout << std::endl;
    std::cout << marc.get_name() << " has " << marc.get_xp() << " xp " \
    "and his health is " << marc.get_health() << std::endl;
    
    std::vector<Player> player_vec;
    
    // Without the move construtor the copy constructor would be called
    player_vec.push_back(Player{"Abby"});
    player_vec.push_back(Player{"Tim"});
    player_vec.push_back(Player{"Mara"});
    
    return 0;
}
