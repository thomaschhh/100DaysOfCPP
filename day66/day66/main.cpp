//
//  main.cpp
//  day66
//
//  Created by Thomas Holz on 22.03.23.
//
//  Stateless lambdas
//  captures nothing from its environment
//  initial brackets [] in the lambda definition are empty


#include <iostream>

int main(int argc, const char * argv[]) {
    
    auto greet = []() {
      std::cout << "Hello World!" << std::endl;
    };
    
    greet();
    
    // templated lambda
    auto add = [] <typename T> (T a, T b) {
      return a + b;
    };
    
    std::cout << add(2, 5) << std::endl;
    std::cout << add(2.456, 5.678) << std::endl;
    std::cout << add(34.21f, 56.78f) << std::endl;
  
    return 0;
}
