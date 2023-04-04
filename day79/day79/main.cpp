//
//  main.cpp
//  da79
//
//  Created by Thomas Holz on 04.04.23.
//

#include <iostream>


class Base {
public:
    virtual void print() { std::cout << "Base" << std::endl; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    virtual void print() { std::cout << "Derived" << std::endl; }
};

int main(int argc, const char * argv[]) {
        
    // -------------------------------------------------------
    // implicit type conversion
    int x = 10;
    double y = 7.5;
    int sum_int {};
    sum_int = x + y;
    std::cout << "sum_int = " << sum_int << std::endl;
  
    // -------------------------------------------------------
    // Explicit conversion
    char z = 'c';
    sum_int = x + (int)z;
    std::cout << "sum_int = " << sum_int << std::endl;
    
    // -------------------------------------------------------
    // using static_cast for float to int
    // compile-time cast
    int b = static_cast<int>(y);
    std::cout << "The Value of b: " << b << std::endl;
    
    // -------------------------------------------------------
    // const cast
    // not allowed to const_cast and then modify variables that are actually const -> undefined behavior
    // used to remove the const-ness from references and pointers that ultimately refer to something that is not const
    int i = 0;
    const int& ref = i;
    const int* ptr = &i;

    const_cast<int&>(ref) = 3;
    *const_cast<int*>(ptr) = 3;
    std::cout << "The Value of i: " << i << std::endl;
    
    // -------------------------------------------------------
    // reinterpret_cast
    // compile-time directive
    // powerful but potentially dangerous feature. allows to cast between incompatible pointer types
    int anInt = 10;
    void* voidPtr = &anInt;

    // reinterpret void pointer as int pointer and dereference it
    int* intPtr = reinterpret_cast<int*>(voidPtr);
    std::cout << *intPtr << std::endl;
    
    // -------------------------------------------------------
    // dynamic cast
    Base* f = new Derived;
        
    // try to downcast b to a Derived pointer
    Derived* d = dynamic_cast<Derived*>(f);
    
    // check if downcast succeeded
    if (d) {
        d->print();
    } else {
        std::cout << "Dynamic cast failed" << std::endl;
    }

    delete d;
    
    return 0;
}
