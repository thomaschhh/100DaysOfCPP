//
//  main.cpp
//  day78
//
//  Created by Thomas Holz on 03.04.23.
//
//  bitwise operators

#include <iostream>


int main(int argc, const char * argv[]) {
    // (00000101), (00001001)
    int a = 5, b = 9;

    // AND: The result is 00000001
    std::cout << "a = " << a << "," << " b = " << b <<std::endl;
    std::cout << "a & b = " << (a & b) << std::endl;

    // OR: The result is 00001101
    std::cout << "a | b = " << (a | b) << std::endl;

    // XOR: The result is 00001100
    std::cout << "a ^ b = " << (a ^ b) << std::endl;

    // NOT: The result is 11111010
    std::cout << "~a = " << (~a) << std::endl;

    // left-shit: The result is 00010010
    std::cout << "b << 1" << " = " << (b << 1) <<std::endl;

    // right-shit: The result is 00000100
    std::cout << "b >> 1" << " = " << (b >> 1 )<<std::endl;
    return 0;
}
