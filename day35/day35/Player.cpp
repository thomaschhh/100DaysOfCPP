//
//  Player.cpp
//  day35
//
//  Created by Thomas Holz on 19.02.23.
//

#include "Player.hpp"
#include <iostream>

// Constructors: invoked during object creation
// There can be multiple implementations (overloaded)
// Default Constructor: C++ generates one for you if not specified otherwise
Player::Player(){
    name_ = "Tom Smith";
    health_ = 0;
    xp_ = 0;
};

// If only one of the following constructors would be implemented
// there would no longer be a default constructor
Player::Player(std::string name){
    name_ = name;
};

Player::Player(std:: string name, int health, int xp){
    name_ = name;
    health_= health;
    xp_ = xp;
};

// Destructor
// There can only be one per class
// Useful to release memory
// Destroys objects in reverse order compared to their creation
Player::~Player(){
    std::cout << "Destroyed Player called: " << name_ << std::endl;
};

// Class methods
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


