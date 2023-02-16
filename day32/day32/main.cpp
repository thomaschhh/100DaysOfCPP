//
//  main.cpp
//  day32
//
//  Created by Thomas Holz on 16.02.23.
//

#include <iostream>
#include <string>

class Player {
// by default everything in a class is private
// so we have to change it to public to be able to access it
public:
    std::string name {"Tom Smith"};
    int health {55};
    int xp {1};

    void talk(){std::cout << "My name is " << name << std::endl;}
};


int main(int argc, const char * argv[]) {
    // accessing class members
    Player tom;
    tom.name = "Dre";
    tom.health = 89;
    tom.xp = 9;
    tom.talk();

    Player* aFriend = new Player;
    
    // both was of accessing the class methods are valid and
    // yield the same results
    (*aFriend).talk();
    aFriend->talk();
    
    delete aFriend;
    
    return 0;
}
