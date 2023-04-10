//
//  addFunc.cpp
//  day85
//
//  Created by Thomas Holz on 10.04.23.
//
//  extern

#include <iostream>

// global variables are also called external variable
extern int myGlobalVar; // declaration of global variable defined in another file

void func1() {
    myGlobalVar = 42; // modify global variable
    std::cout << "func1: myGlobalVar = " << myGlobalVar << std::endl;
}
