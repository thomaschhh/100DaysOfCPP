//
//  main.cpp
//  day58
//
//  Created by Thomas Holz on 14.03.23.
//
// Scoped Enumerations
// qualified by 'class' or 'struct' key
// By this name clashes can be omitted (two names are identical in two different enums)


#include <iostream>

enum class Player : int {
    Dan = 2,
    Tim = 3,
    Marc = 4,
};

// same as above but mix of implicit/explicit initialization
enum class Item : int {
    Knife = 2,
    Hammer,
    Plant
};

int main(int argc, const char * argv[]) {
    
    Player playerA = Player::Dan;
    Item itemA = Item::Plant;
    
    switch (playerA) {
        case Player::Dan:
            std::cout << "Dan is playing." << std::endl;
            break;
        case Player::Tim:
            std::cout << "Tim is playing." << std::endl;
            break;
        case Player::Marc:
            std::cout << "Marc is playing." << std::endl;
            break;
        default:
            std::cout << "Nobody is playing." << std::endl;
            break;
    }
    
    if (int(itemA) == 4){
        std::cout << "The player has a plant." << std::endl;
    }
    
    return 0;
}
