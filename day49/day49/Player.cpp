//
//  Player.cpp
//  day49
//
//  Created by Thomas Holz on 05.03.23.
//

#include "Player.hpp"

Player::Player()
    : Person(), role_{"Fighter"}, xp_{65}{
    std::cout << "Player constructor" << std::endl;
}

Player::Player(std::string role, int xp, int health, std::string name)
    : Person(health, name), role_{role}, xp_{xp}{
    std::cout << "Player constructor overloaded" << std::endl;
}

Player::~Player(){
    std::cout << "Player destructor" << std::endl;
}

// Copy constructor including base classes copy constructor
Player::Player(const Player& otherPlayer): Person{otherPlayer}, role_{otherPlayer.role_}, xp_{otherPlayer.xp_}{
    std::cout << "Player copy constructor" << std::endl;
}

// move assignment operator
Player& Player::operator=(const Player& rhs) {
    std::cout << "Player assignment operator overloading - copy" << std::endl;
    
    if (this == &rhs)
        return *this;
    
    // move assignment operator of base class
    Person::operator=(rhs);
    role_ = rhs.role_;
    xp_ = rhs.xp_;
    
    return *this;
}

void Player::getInfo(){
    std::cout << "Player -> " << name_ << " health: " << health_ << " role: " << role_ << " xp: " << xp_ <<  std::endl;
}

void Player::change_name(std::string new_newname){
    name_ = new_newname;
}

void Player::double_health(){
    health_ = 2*health_;
}
