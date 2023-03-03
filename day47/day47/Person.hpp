//
//  Person.hpp
//  day47
//
//  Created by Thomas Holz on 03.03.23.
//
// More general class (base class)

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Person {
public:
    Person();
    ~Person();
    
    std::string name_;
    int health_;
    
    void greet();
    void report_health();
};

#endif /* Person_hpp */
