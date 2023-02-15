//
//  main.cpp
//  day31
//
//  Created by Thomas Holz on 15.02.23.
//

#include <iostream>
#include <string>
#include <vector>

class Player {
    // encapsulation: objects contain data and opertaions that work on that data
    
    // attributes / data
    std::string name {"Tom Smith"};
    int health {55};
    int xp {1};
    
    // methods / functions
    void talk(std::string);
    bool is_dead();
};


int main(int argc, const char * argv[]) {
    // OOP
    
    // classes: blueprint from which objects are created
    // it's a user-defined type, has attributes (data) and methods (functions)
    // can hide data and methods
    
    // objects are created from classes and represents a specific instance of a class
    // each has its own identity and can use the class methods
    
    Player tom;  // Player is the class (user-defined type); my_account is an object
    Player candy;
    
    Player players[] {tom, candy};  // array of objects
    
    std::vector<Player> player_vec {tom};
    player_vec.push_back(candy);
    
    // create object on the heap
    Player* enemy {nullptr};  // pointer to an object
    enemy = new Player;
    
    std::cout << "enemy " << enemy << std::endl;
    
    delete enemy;
    
    return 0;
}

