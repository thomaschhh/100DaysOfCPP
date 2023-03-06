//
//  Player.cpp
//  day50
//
//  Created by Thomas Holz on 06.03.23.
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

Player::Player(const Player& otherPlayer): Person{otherPlayer}, role_{otherPlayer.role_}, xp_{otherPlayer.xp_}{
    std::cout << "Player copy constructor" << std::endl;
}

Player& Player::operator=(const Player& rhs) {
    std::cout << "Player assignment operator overloading - copy" << std::endl;
    
    if (this == &rhs)
        return *this;
    
    Person::operator=(rhs);
    role_ = rhs.role_;
    xp_ = rhs.xp_;
    
    return *this;
}

void Player::getInfo(){
    std::cout << "Player -> " << name_ << " health: " << health_ << " role: " << role_ << " xp: " << xp_ <<  std::endl;
}

// overload base class method with same name
void Player::change_name(std::string new_newname){
    std::cout << "Overloaded 'change_name' function of the base (Person) class." <<  std::endl;
    Person::change_name(new_newname);
}

void Player::double_health(){
    health_ = 2*health_;
}
