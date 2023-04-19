//
//  main.cpp
//  day94
//
//  Created by Thomas Holz on 19.04.23.
//
//  mutable


#include <iostream>


class Counter {
public:
    Counter(int start) : count_(start) {}
    int getCount() const { return count_; }
    void increment() const {
        // The 'mutable' keyword allows the count_ member variable to be modified
        // even in a const member function.
        ++count_;
    }
private:
    mutable int count_; // 'mutable' keyword allows modification in a const member function
};

int main(int argc, const char * argv[]) {
    Counter counter(0);
    
    std::cout << counter.getCount() << std::endl; // 0
    counter.increment();
    
    std::cout << counter.getCount() << std::endl; // 1
    counter.increment();
    
    std::cout << counter.getCount() << std::endl; // 2
    return 0;
}
