//
//  Numbers.hpp
//  day64
//
//  Created by Thomas Holz on 20.03.23.
//
//  no .cpp file as the compiler is not compiling this template

#ifndef Numbers_hpp
#define Numbers_hpp

#include <stdio.h>
#include <string>

template <class T1, class T2>
class Numbers {
  private:
    std::string name_ {};
    
    T1 val1_ {};
    T2 val2_ {};

  public:
    Numbers(T1 val1, T2 val2, std::string name) :
        val1_(val1), val2_(val2), name_(name){
    };
    
    T1 getVal1() const {return val1_;};
    T2 getVal2() const {return val2_;};
    std::string getName() const {return name_;};
};

#endif /* Numbers_hpp */
