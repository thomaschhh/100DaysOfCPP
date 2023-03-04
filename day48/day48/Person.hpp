//
//  Person.hpp
//  day48
//
//  Created by Thomas Holz on 04.03.23.
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
    
    std::string name_;
    int health_;
    
    void greet();
    void report_health();
};

#endif /* Person_hpp */
