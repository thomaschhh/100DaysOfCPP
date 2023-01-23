//
//  main.cpp
//  day8
//
//  Created by Thomas Holz on 23.01.23.
//

#include <iostream>

enum Color{
    red, green, blue  //0, 1, 2
};

Color screen_color {green};


int main(int argc, const char * argv[]) {
    // switch
    // case expressions must be known at compile time -> const or  literals
    
    switch (screen_color) {
        case red:
            std::cout << "screen_color is 0 / red" << std::endl;
            break; // if not there, following cases are check and possibly executed
        case green:
            std::cout << "screen_color is 1 / green" << std::endl;
            break;
        case blue:
            std::cout << "screen_color is 2 / blue" << std::endl;
        default: // when none of the cases is true, should never execute
            break;
    }

    return 0;
}
