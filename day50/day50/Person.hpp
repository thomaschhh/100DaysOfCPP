//
//  Person.hpp
//  day50
//
//  Created by Thomas Holz on 06.03.23.
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
    void change_name(std::string new_newname);
};

#endif /* Person_hpp */
