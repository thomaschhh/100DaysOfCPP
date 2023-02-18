//
//  Player.cpp
//  day34
//
//  Created by Thomas Holz on 18.02.23.
//

#include <stdio.h>  // system header files
#include <iostream>
#include "Player.h"


// :: is the scope resolution operator
void Player::talk(void){
    std::cout << "My name is " << name << std::endl;
}

void Player::set_name(std::string aName){
    name = aName;
}

void Player::set_health(int newHealth){
    health = newHealth;
}

void Player::set_xp(int newXp){
    xp = newXp;
}
