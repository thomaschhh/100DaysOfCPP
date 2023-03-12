//
//  ClassA.hpp
//  day56
//
//  Created by Thomas Holz on 12.03.23.
//
// aPointer --shared--> bPointer --shared--> cPointer --weak--> aPointer

#ifndef ClassA_hpp
#define ClassA_hpp

#include <stdio.h>
#include <iostream>
#include <memory>

// forwared declaration
class B;

class A {
public:
    A();
    ~A();
    
    std::shared_ptr<B> bPointer;
    
};

#endif /* ClassA_hpp */
