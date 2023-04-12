//
//  main.cpp
//  day87
//
//  Created by Thomas Holz on 12.04.23.
//
//  friend
//  Friendship is not transitive (a friend of your friend is not your friend).
//  Friendship is not inherited (your friend's children are not your friends, and your friends are not your children's friends).

#include <iostream>
#include <stdexcept>


template <typename T>
class Box {
public:
    Box(T l, T b, T h) : length_{l}, breadth_{b}, height_{h} {
        if (length_ <= 0 || breadth_ <= 0 || height_ <= 0) {
            throw std::invalid_argument("Box sides must be greater than 0.");
        }
    }
    
    T volume() const {
        return length_ * breadth_ * height_;
    }
    
    // Declare the friend function
    template<typename U>
    friend int compareBoxes(const Box<U>& a, const Box<U>& b);
private:
    T length_, breadth_, height_;
};


// Define the friend function
// The function has access to the private / protected members of the class
template<typename U>
int compareBoxes(const Box<U>& a, const Box<U>& b) {
    U volume1 = a.volume();
    std::cout << "The volume of box1 is " << volume1 << std::endl;
    
    U volume2 = b.volume();
    std::cout << "The volume of box2 is " << volume2 << std::endl;
    
    if (volume1 < volume2) {
        return -1;
    } else if (volume1 == volume2) {
        return 0;
    } else {
        return 1;
    }
}



int main(int argc, const char * argv[]) {
    Box<double> box1 {3, 4.789, 10};
    Box<double> box2 {2.56, 3, 5.097};
    
    int comparisonResult = compareBoxes(box1, box2);
    
    if (comparisonResult == -1) {
        std::cout << "box1 is smaller than box2" << std::endl;
    } else if (comparisonResult == 0) {
        std::cout << "box1 and box2 are of equal size" << std::endl;
    } else {
        std::cout << "box2 is smaller than box1" << std::endl;
    }
    
    return 0;
}

