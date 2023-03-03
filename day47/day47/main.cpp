//
//  main.cpp
//  day47
//
//  Created by Thomas Holz on 03.03.23.
//
/*
 Inheritance:
 - Create a new class (derived class) from an existing class (base class) / "Is A" relationship
 - New class contains the data and behaviors of the existing class -> reuse code
 - Allows new classes to modify behaviors of existing classes to make it without modifying the original class
 -
 */
#include <iostream>
#include "Person.hpp"
#include "Player.hpp"
int main(int argc, const char * argv[]) {
    Person personA;
    
    personA.greet();
    personA.report_health();
    
    std::cout << "------" << std::endl;
    
    Player playerA;
    
    playerA.change_name("Player");
    playerA.greet();
    playerA.report_health();
    playerA.report_xp();
    playerA.report_role();
    
    return 0;
}
