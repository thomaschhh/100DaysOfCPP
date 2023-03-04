//
//  main.cpp
//  day48
//
//  Created by Thomas Holz on 04.03.23.
//
// Inheritance: Constructors / Destructors
// Constructor of base class gets called first then the one of the derived class
// Destructors are called in reverse order

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
    
    Player playerB("Knight", 78, 45, "Greg");
    playerB.greet();
    playerB.report_xp();
    playerB.report_role();
    playerB.report_health();
    playerB.double_health();
    playerB.report_health();
    
    return 0;
}
