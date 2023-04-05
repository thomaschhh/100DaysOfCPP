//
//  main.cpp
//  day80
//
//  Created by Thomas Holz on 05.04.23.
//
//  structs

//  structures use stack allocation / classes use heap allocation
//  struct is several related elements that needed to be tied up together in a certain context
//  Contrary to a struct, a class is made to offer an interface, that has some degree of separation from its implementation. A class is not just there to store data
//  Structures are value types; classes are reference types


#include <iostream>


// public by default
struct Rectangle {
    int width, height;
    
    Rectangle(int w, int h) : width(w), height(h){}
    
    void areaOfRectangle() const {
        std::cout << "Area of Rectangle is: " << width * height << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    
    // instance of the structure is known as "structure variable"
    Rectangle rec(4,6);
    
    rec.areaOfRectangle();
    
    rec.width = 5;
    rec.height = 100;
    
    rec.areaOfRectangle();
    
    return 0;
}
