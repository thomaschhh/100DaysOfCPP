//
//  Player.cpp
//  day41
//
//  Created by Thomas Holz on 25.02.23.
//

#include "Player.hpp"
#include <iostream>


Player::Player(Player&& source) noexcept : Player{source.name_, source.health_,source.xp_, *source.data_}{
    source.data_ = nullptr;
}

Player::Player(const Player& source)
    : Player{source.name_, source.health_,source.xp_, *source.data_}{
    
    std::cout << "Copy constructor called for: " << name_ << std::endl;
}

Player::Player(std::string name, int health, int xp, int d)
    : name_ {name},
      health_ {health},
      xp_ {xp}{
      data_ = new int;
      *data_ = d;
      std::cout << "Inside 3 arg constructor for " << name_ << std::endl;
}

Player::~Player(){
    if (data_ == nullptr){
        std::cout << "Freeing memory for nullptr for " << name_ << std::endl;
    }else{
        std::cout << "Destroyed Player called: " << name_ << " and freeing memory." << std::endl;
    }
    delete data_;
    
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

// Getters need to be set const for const classes
// to ensure that nothing gets changed
std::string Player::get_name(void) const{
    return name_;
}

int Player::get_health(void) const{
    return health_;
}

int Player::get_xp(void) const{
    return xp_;
}
