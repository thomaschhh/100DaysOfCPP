//
//  Person.cpp
//  day48
//
//  Created by Thomas Holz on 04.03.23.
//

#include "Person.hpp"

Person::Person()
    : health_{55}, name_{"Person"}{
    std::cout << "Person constructor" << std::endl;
};

Person::Person(int health, std::string name)
: health_{health}, name_{name}{
    std::cout << "Person constructor overloaded" << std::endl;
};

Person::~Person(){
    std::cout << "Person destructor" << std::endl;
};

void Person::greet(){
    std::cout << "I am a Person and my name is " << name_ << std::endl;
};

void Person::report_health(){
    std::cout << "I am a Person and my health is " << health_ << std::endl;
};
