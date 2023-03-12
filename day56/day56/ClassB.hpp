//
//  ClassB.hpp
//  day56
//
//  Created by Thomas Holz on 12.03.23.
//
// bPointer --shared--> cPointer --weak--> aPointer --shared--> bPointer

#ifndef ClassB_hpp
#define ClassB_hpp

#include <stdio.h>
#include <iostream>
#include <memory>

// forwared declaration
class C;

class B {
public:
    B();
    ~B();
    
    std::shared_ptr<C> cPointer;
    
};

#endif /* ClassB_hpp */
