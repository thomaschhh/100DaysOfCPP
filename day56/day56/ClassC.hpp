//
//  ClassC.hpp
//  day56
//
//  Created by Thomas Holz on 12.03.23.
//
//
// cPointer --weak--> aPointer --shared--> bPointer --shared--> cPointer 

#ifndef ClassC_hpp
#define ClassC_hpp

#include <stdio.h>
#include <iostream>
#include <memory>

// forwared declaration
class A;

class C {
public:
    C();
    ~C();
    
    // must be weak and NOT shared
    // otherwise a memory leak occurs -> no destructors called
    std::weak_ptr<A> aPointer;
    
};

#endif /* ClassC_hpp */
