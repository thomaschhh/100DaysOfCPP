//
//  Player.cpp
//  day37
//
//  Created by Thomas Holz on 21.02.23.
//

#include "Player.hpp"
#include <iostream>


Player::Player() : Player("Tom", 0, 0){
    std::cout << "Inside 0 arg constructor." << std::endl;
}

Player::Player(std::string name) : Player(name, 0, 0){
    std::cout << "Inside 1 arg constructor." << std::endl;
}

Player::Player(std:: string name, int health, int xp)
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
