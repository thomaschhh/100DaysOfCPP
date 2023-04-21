//
//  main.cpp
//  day96
//
//  Created by Thomas Holz on 21.04.23.
//
//  move semanctics


#include <iostream>
#include <string>

class Dog {
public:
    Dog() { std::cout << "Default constructor called.\n"; }
    Dog(const std::string& name) : name_(name) { std::cout << "Constructor called.\n"; }
    Dog(const Dog& other) : name_(other.name_) { std::cout << "Copy constructor called.\n"; }
    Dog(Dog&& other) noexcept : name_(std::move(other.name_)) { std::cout << "Move constructor called.\n"; }
    Dog& operator=(const Dog& other) {
        std::cout << "Copy assignment operator called.\n";
        name_ = other.name_;
        return *this;
    }
    Dog& operator=(Dog&& other) noexcept {
        std::cout << "Move assignment operator called.\n";
        name_ = std::move(other.name_);
        return *this;
    }
        
private:
    std::string name_;
};

Dog createDog() {
    return Dog("Rufus");
}

int main(int argc, const char * argv[]) {
    Dog dog1; // calls default constructor
    Dog dog2("Fido"); // calls constructor
    Dog dog3(dog2); // calls copy constructor
    Dog dog4(createDog()); // calls constructor
    dog1 = dog2; // calls copy assignment operator
    dog3 = createDog(); // calls constructor & move assignment operator
    
    return 0;
}
