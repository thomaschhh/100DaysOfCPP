//
//  Person.hpp
//  day49
//
//  Created by Thomas Holz on 05.03.23.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Person {
public:
    Person();
    Person(int health, std::string name);
    ~Person();
    
    Person(const Person& otherPerson);
    Person& operator=(const Person& rhs);
    
    std::string name_;
    int health_;
    
    void greet();
    void report_health();
};

#endif /* Person_hpp */
