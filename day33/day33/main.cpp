//
//  main.cpp
//  day33
//
//  Created by Thomas Holz on 17.02.23.
//

#include <iostream>
#include <string>

class Player {
public:
    void talk(){std::cout << "My name is " << name << std::endl;}
    void set_name(std::string aName){name = aName;}
    void set_health(int newHealth){health = newHealth;}
    void set_xp(int newXp){xp = newXp;}
private:
    std::string name {"Tom Smith"};
    int health {55};
    int xp {1};
};


int main(int argc, const char * argv[]) {
    Player tom;
    
//    tom.name = "Dre";  compiler error, can't access private member
    tom.set_name("Dre");
    tom.set_health(89);
    tom.set_xp(9);
    tom.talk();
    
    return 0;
}
