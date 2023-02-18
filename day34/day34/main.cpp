//
//  main.cpp
//  day34
//
//  Created by Thomas Holz on 18.02.23.
//
// Both .cpp files are built and linked to an executable

#include <iostream>
#include "Player.h"  // local to this project, never include .cpp files

int main(int argc, const char * argv[]) {
    // implementing member methods
    Player tom;
    
    tom.set_name("Dre");
    tom.set_health(89);
    tom.set_xp(9);
    tom.talk();
    
    return 0;
}
