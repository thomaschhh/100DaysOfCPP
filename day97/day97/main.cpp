//
//  main.cpp
//  day97
//
//  Created by Thomas Holz on 22.04.23.
//
//  Doxygen documentation

/**
 * @file main.cpp
 * @brief Simple program that can calculate the area of a rectangle
 *
 * Here goes a more detailed description of the code.
 */


#include <iostream>

/**
 * @brief A simple class representing a rectangle.
 */
class Rectangle {
public:
    /**
     * @brief Construct a new Rectangle object with given width and height.
     *
     * @param width The width of the rectangle.
     * @param height The height of the rectangle.
     */
    Rectangle(double width, double height)
        : width_(width), height_(height) {}

    /**
     * @brief Get the area of the rectangle.
     *
     * @return The area of the rectangle.
     */
    double getArea() const {
        return width_ * height_;
    }

private:
    double width_; /**< The width of the rectangle. */
    double height_; /**< The height of the rectangle. */
};

/**
 * @brief A simple function that calculates the sum of two integers.
 *
 * @param x The first integer.
 * @param y The second integer.
 * @return The sum of x and y.
 */
int add(int x, int y) {
    return x + y;
}

/**
 * @brief A simple function that calculates the product of two integers.
 *
 * @param x The first integer.
 * @param y The second integer.
 * @return The product of x and y.
 */
int multiply(int x, int y) {
    return x * y;
}

int main(int argc, const char * argv[]) {
    Rectangle rect(4.0, 5.0);
    std::cout << "The area of the rectangle is " << rect.getArea() << std::endl;

    std::cout << "The sum of 2 and 3 is " << add(2, 3) << std::endl;
    std::cout << "The product of 2 and 3 is " << multiply(2, 3) << std::endl;

    return 0;
}
