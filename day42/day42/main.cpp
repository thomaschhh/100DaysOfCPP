//
//  main.cpp
//  day42
//
//  Created by Thomas Holz on 26.02.23.
//

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
    
    std::cout << "\nThere are " << Player::get_num_players() << " Player objects." << std::endl;
    {
        Player support {marc};
        support.set_name("Support");
        std::cout << "\nThere are " << Player::get_num_players() << " Player objects." << std::endl;
    }
    
    std::cout << "\nThere are " << Player::get_num_players() << " Player objects." << std::endl;
    std::cout << std::endl;
    std::cout << marc.get_name() << " has " << marc.get_xp() << " xp " \
    "and his health is " << marc.get_health() << std::endl;
    
    std::vector<Player> player_vec;
    
    player_vec.push_back(Player{"Abby"});
    player_vec.push_back(Player{"Tim"});
    player_vec.push_back(Player{"Mara"});
    
    // Const classes
    const Player jerry {"Jerry", 10, 57};
    std::cout << jerry.get_name() << " has " << jerry.get_xp() << " xp " \
    "and his health is " << jerry.get_health() << std::endl;
    
    std::cout << "\nThere are " << Player::get_num_players() << " Player objects." << std::endl;
    
    return 0;
}