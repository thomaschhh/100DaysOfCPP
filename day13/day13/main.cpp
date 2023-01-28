//
//  main.cpp
//  day13
//
//  Created by Thomas Holz on 28.01.23.
//

#include <iostream>
#include <cctype>  // functions for testing characters / converting character case
#include <cstring>  // comparing, concatenation, comparison, searching ...
#include <cstdlib>  // functions to convert C-style strings to int, float, long etc.

int main(int argc, const char * argv[]) {
    // character function
    std::cout << isdigit('c')<< std::endl;
    std::cout << ispunct('.')<< std::endl;
    std::cout << isalpha('D')<< std::endl;
    
    char a_char {'D'};
    std::cout << tolower(a_char)<< std::endl;  // 100 is small 'd' in ASCII
    
    // C-style strings
    // sequence of characters, contiguous in memory (array of chars)
    // terminated by null character
    // you have to make sure you have enough memory assigned
    char first_name [6] {"Toby"};
    char my_name [8] {};
//    my_name = "Frank"; not valid
    strcpy(my_name, "Frank");
    
    std::cout << strlen(my_name) << std::endl;
    
    const int size_full_name {40};
    char full_name [size_full_name] {};
    std::cout << "Enter your full name: ";
    std::cin.getline(full_name, size_full_name);
    std::cout << "Your full name is: " << full_name << std::endl;
    
    return 0;
}
