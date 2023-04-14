//
//  main.cpp
//  day89
//
//  Created by Thomas Holz on 14.04.23.
//
//  concept
//  constrain template parameters
//  compile-time validation of template arguments


#include <iostream>
#include <concepts>

// -------------------------------------------
// use of 'concept' in with respect to functions
template <typename T>
concept NumberFunc = std::integral<T> || std::floating_point<T>;
// implicit 'requires' keyword
auto add2NumbersAnyType(NumberFunc auto a, NumberFunc auto b) {
  return a+b;
}

// -------------------------------------------
// use of 'concept' in with respect to classes
template <typename T>
concept NumberClass = std::integral<T> || std::floating_point<T>;

template <typename T, typename U>
requires NumberClass<T> && NumberClass<U>
class WrappedNumber {
public:
  WrappedNumber(T num1, U num2) : num1_(num1), num2_(num2) {}

  T  num1_;
  U  num2_;
};

// -------------------------------------------
int main(int argc, const char * argv[]) {
    
    std::cout << add2NumbersAnyType(1.691f, 254) << "\n";
    
    WrappedNumber wn1{42, 4.2f};
    WrappedNumber wn2{25, 21};
    std::cout << wn1.num2_ << "\n";
    std::cout << wn2.num2_ << "\n";
    
    return 0;
}
