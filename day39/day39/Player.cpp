//
//  Player.cpp
//  day39
//
//  Created by Thomas Holz on 23.02.23.
//

#include "Player.hpp"
#include <iostream>

// Deep copy constructor
// Use deep copies when using raw pointers
Player::Player(const Player& source)
    : Player{source.name_, source.health_,source.xp_, *source.data_}{
}

// Shallow copy constructor
// only copies pointer but not it's pointing to
//Player::Player(const Player& source)
//    : name_{source.name_},
//      health_{source.health_},
//      xp_{source.xp_}{
//}


Player::Player(std::string name, int health, int xp, int d)
    : name_ {name},
      health_ {health},
      xp_ {xp}{
      data_ = new int; // allocate storage
      *data_ = d;
      std::cout << "Inside 3 arg constructor." << std::endl;
}

Player::~Player(){
    delete data_;  // release storage
    std::cout << "Destroyed Player called: " << name_ << " and freeing memory." << std::endl;
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
