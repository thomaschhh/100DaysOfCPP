//
//  main.cpp
//  day74
//
//  Created by Thomas Holz on 30.03.23.
//
//  namespaces: used prevent name conflicts
//  allows all the names in a namespace to be used without the namespace-name as an explicit qualifier

#include <iostream>


// implicit global namespace
// usually avoid this
int anInt {99};

namespace first_space{
    int anInt {12};
    double aDouble {4.28};

    void func(){
        std::cout << "Inside first_space" << std::endl;
    }
    
    namespace second_space{
        int anInt {6};
        double aDouble {654.128};
    
        void func(){
            std::cout << "Inside second_space" << std::endl;
        }
    }
}


int main(int argc, const char * argv[]) {

    // you could also use 'anInt' only
    std::cout << ::anInt << std::endl;
    
    {
        // bring everything in the namespace into scope
        using namespace first_space;
       
        func();
        
        std::cout << aDouble << std::endl;
        
        // if not specified -> Reference to 'anInt' is ambiguous
        std::cout << first_space::anInt << std::endl;
    }
    
    std::cout << anInt << std::endl;
    
    // bring everything in the namespace into scope
    using namespace first_space::second_space;
    
    func();
    
    // if not specified -> Reference to 'anInt' is ambiguous
    std::cout << first_space::second_space::anInt << std::endl;
    std::cout << aDouble << std::endl;
    
    return 0;
}
