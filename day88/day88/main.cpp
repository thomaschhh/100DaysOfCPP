//
//  main.cpp
//  day88
//
//  Created by Thomas Holz on 13.04.23.
//
//  fixed-width integers
//  guarantee the same size on any architecture
//  may not be defined on all architectures


#include <iostream>
#include <cstdint>

int main(int argc, const char * argv[]) {
    
    // may be slower than a wider type on some architectures
    std::cout << "std::int8_t: " <<sizeof(std::int8_t) * 8 << " bits\n";
    std::cout << "std::uint8_t: " <<sizeof(std::uint8_t) * 8 << " bits\n";
    std::cout << "std::int16_t: " <<sizeof(std::int16_t) * 8 << " bits\n";
    std::cout << "std::uint16_t: " <<sizeof(std::uint16_t) * 8 << " bits\n";
    std::cout << "std::int32_t: " <<sizeof(std::int32_t) * 8 << " bits\n";
    std::cout << "std::uint32_t: " <<sizeof(std::uint32_t) * 8 << " bits\n";
    std::cout << "std::int64_t: " <<sizeof(std::int64_t) * 8 << " bits\n";
    std::cout << "std::uint64_t: " <<sizeof(std::uint64_t) * 8 << " bits\n";
    std::cout << '\n';
    
    // provide the smallest signed/unsigned integer type with a width of at least n bits
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    
    // provide the fastest signed/unsigned integer type with a width of at least # bits
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
    
    return 0;
}
