//
//  Player.cpp
//  day48
//
//  Created by Thomas Holz on 04.03.23.
//

#include "Player.hpp"

// make base class construction explicit, call base version
Player::Player()
    : Person(), role_{"Fighter"}, xp_{65}{
    std::cout << "Player constructor" << std::endl;
};

// make base class construction explicit, call overloaded version
Player::Player(std::string role, int xp, int health, std::string name)
    : Person(health, name), role_{role}, xp_{xp}{
    std::cout << "Player constructor overloaded" << std::endl;
};

Player::~Player(){
    std::cout << "Player destructor" << std::endl;
};

void Player::greet(){
    std::cout << "I am a Player and my name is " << name_ << std::endl;
};

void Player::report_health(){
    std::cout << "I am a Player and my health is " << health_ << std::endl;
};

void Player::report_role(){
    std::cout << "I am a Player and my role is " << role_ << std::endl;
};

void Player::report_xp(){
    std::cout << "I am a Player and my xp is " << xp_ << std::endl;
};

void Player::change_name(std::string new_newname){
    name_ = new_newname;
};

void Player::double_health(){
    health_ = 2*health_;
};
