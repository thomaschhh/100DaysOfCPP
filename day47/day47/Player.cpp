//
//  Player.cpp
//  day47
//
//  Created by Thomas Holz on 03.03.23.
//

#include "Player.hpp"

Player::Player()
: xp_{65}, role_{"Fighter"}{
};

Player::~Player(){
};

// specialized functions
void Player::greet(){
    std::cout << "I am a Player and my name is " << name_ << std::endl;
};

void Player::report_health(){
    std::cout << "I am a Player and my health is " << health_ << std::endl;
};

// new functions
void Player::report_role(){
    std::cout << "I am a Player and my role is " << role_ << std::endl;
};

void Player::report_xp(){
    std::cout << "I am a Player and my xp is " << xp_ << std::endl;
};

void Player::change_name(std::string new_newname){
    name_ = new_newname;
};
