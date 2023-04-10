//
//  main.cpp
//  day85
//
//  Created by Thomas Holz on 10.04.23.
//
//  extern

#include <iostream>

// global variables are also called external variable
int myGlobalVar = 0;

extern void func1(); // declaration of function defined in another file

int main(int argc, const char * argv[]) {
    std::cout << "main: myGlobalVar = " << myGlobalVar << std::endl;
    func1(); // call function that modifies global variable
    std::cout << "main: myGlobalVar = " << myGlobalVar << std::endl;
    return 0;
}
