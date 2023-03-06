//
//  Person.cpp
//  day50
//
//  Created by Thomas Holz on 06.03.23.
//

#include "Person.hpp"


Person::Person()
    : health_{55}, name_{"Person"}{
    std::cout << "Person constructor" << std::endl;
}

Person::Person(int health, std::string name)
: health_{health}, name_{name}{
    std::cout << "Person constructor overloaded" << std::endl;
}

Person::~Person(){
    std::cout << "Person destructor" << std::endl;
}

Person::Person(const Person& otherPerson): health_{otherPerson.health_}, name_{otherPerson.name_}{
    std::cout << "Person copy constructor" << std::endl;
}

Person& Person::operator=(const Person& rhs) {
    std::cout << "Person assignment operator overloading - copy" << std::endl;
    
    if (this == &rhs)
        return *this;
    
    health_ = rhs.health_;
    name_ = rhs.name_;
    
    return *this;
}

void Person::greet(){
    std::cout << "I am a Person and my name is " << name_ << std::endl;
}

void Person::report_health(){
    std::cout << "I am a Person and my health is " << health_ << std::endl;
}

void Person::change_name(std::string new_newname){
    name_ = new_newname;
}
