//
//  main.cpp
//  day49
//
//  Created by Thomas Holz on 05.03.23.
//
// Inheritance
// Copy and move constructors


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
    playerA.getInfo();
    
    Player playerB("Knight", 78, 45, "Greg");
    playerB.double_health();
    playerB.getInfo();
    
    std::cout << "------" << std::endl;
    Person personC {100, "Marc"};
    Person personD {personC};
    personC = personD;
    
    Player playerC("Peasant", 45, 57, "Tom");
    playerC.getInfo();
    
    Player playerD {playerC};
    playerD.getInfo();
    
    playerC = playerD;
    playerC.getInfo();
    
    return 0;
}
