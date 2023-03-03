//
//  Person.cpp
//  day47
//
//  Created by Thomas Holz on 03.03.23.
//

#include "Person.hpp"


Person::Person()
    : name_{"Person"}, health_{55}{
};

Person::~Person(){
};

void Person::greet(){
    std::cout << "I am a Person and my name is " << name_ << std::endl;
};

void Person::report_health(){
    std::cout << "I am a Person and my health is " << health_ << std::endl;
};
