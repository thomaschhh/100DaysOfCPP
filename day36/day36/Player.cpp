//
//  Player.cpp
//  day36
//
//  Created by Thomas Holz on 20.02.23.
//

#include "Player.hpp"
#include <iostream>

// Order does not matter, will be initialized in order of class declaration
Player::Player() : name_ {"Tom"}, health_ {}, xp_ {}{
}

Player::Player(std::string name) : name_ {name}{
}

Player::Player(std:: string name, int health, int xp)
    : name_ {name},
      health_ {health},
      xp_ {xp}{
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
