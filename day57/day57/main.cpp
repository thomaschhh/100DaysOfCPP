//
//  main.cpp
//  day57
//
//  Created by Thomas Holz on 13.03.23.
//
// Unscoped Enumerations
// - user-defined type with constant int values
// - increase readability by removing "magic numbers"


#include <iostream>

// enum-key enum-name : bit-width enumerator-type{};
// we can fix bit width (optional)
// anonymous / unscoped enumeration -> no type safety
// this means we could assign
/*
 enum : long {
     Red,  // implicit initialization -> 0
     Green,  // implicit initialization -> 1
     Bkue // implicit initialization -> 2
 };
 
 int color {};
 color = Green;
 
 or
 color = 1;
 */

// not anonymous
enum Color : long {
    Red,  // implicit initialization -> 0
    Green,  // implicit initialization -> 1
    Blue // implicit initialization -> 2
};

int main(int argc, const char * argv[]) {
    
    std::underlying_type_t<Color> input;  // obtains the underlying type of enum type T.
    std::cout << "Select a color. Type in a number between 0 and 2: " << std::endl;
    std::cin >> input;
    
    Color color = Color(input);  // type casting: TODO Check for valid enumerator value
    
    // takes a long time in cases where there are a lot of possibible
    // conditions to check
    std::cout << "-- If block --" << std::endl;
    if (color == Red){
        std::cout << "Red" << std::endl;
    }else if (color == Green){
        std::cout << "Green" << std::endl;
    }else if (color == Blue){
        std::cout << "Blue" << std::endl;
    }else{
        std::cout << "Not a valid selection" << std::endl;
    }
    
    // equal access time for all cases -> faster than if else
    // must be unique cases
    std::cout << "-- Switch block --" << std::endl;
    switch (color) {
        case Red:
            std::cout << "Red" << std::endl;
            break;
        case Green:
            std::cout << "Green" << std::endl;
            break;
        case Blue:
            std::cout << "Blue" << std::endl;
            break;
        default:
            std::cout << "Not a valid selection" << std::endl;
            break;
    }

    
    return 0;
}
