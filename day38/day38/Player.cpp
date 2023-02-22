//
//  Player.cpp
//  day38
//
//  Created by Thomas Holz on 22.02.23.
//

#include "Player.hpp"
#include <iostream>


// Takes either the default params or the ones that are provided
Player::Player(std::string name, int health, int xp)
    : name_ {name},
      health_ {health},
      xp_ {xp}{
      std::cout << "Inside 3 arg constructor." << std::endl;
}

Player::~Player(){
    std::cout << "Destroyed Player called: " << name_ << std::endl;
}

void Player::set_name(std::string name){
    name_ = name;
}

void Player::set_health(int health){
    health_ = health;
}

void Player::set_xp(int xp){
    xp_ = xp;
}

std::string Player::get_name(void){
    return name_;
}

int Player::get_health(void){
    return health_;
}

int Player::get_xp(void){
    return xp_;
}
