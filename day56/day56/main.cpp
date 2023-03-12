//
//  main.cpp
//  day56
//
//  Created by Thomas Holz on 12.03.23.
//
// Weak Pointers
// - created from a shared pointer
// - does not participate in owning relationship -> no in-/decrement of reference count

#include <iostream>

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

void get_count(auto& a, auto& b, auto& c){
    std::cout << "aPointer count: " << a.use_count() << std::endl;
    std::cout << "bPointer count: " << b.use_count() << std::endl;
    std::cout << "cPointer count: " << c.use_count() << std::endl;
    std::cout << "\n";
}

int main(int argc, const char * argv[]) {
    
    std::shared_ptr<A> aPointer = std::make_shared<A>();
    std::shared_ptr<B> bPointer = std::make_shared<B>();
    std::shared_ptr<C> cPointer = std::make_shared<C>();
    get_count(aPointer, bPointer, cPointer);
    
    // circular reference structure:
    // aPointer --shared--> bPointer --shared--> cPointer --weak--> aPointer
    // aPointer's count strong reference count does not reach 2 as the other pointers do
    // because cPointer has a weak pointer to aPointer
    aPointer->bPointer = bPointer;
    get_count(aPointer, bPointer, cPointer);
    
    bPointer->cPointer = cPointer;
    get_count(aPointer, bPointer, cPointer);
    
    cPointer->aPointer = aPointer;
    get_count(aPointer, bPointer, cPointer);
    
    return 0;
}
