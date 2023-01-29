//
//  main.cpp
//  day14
//
//  Created by Thomas Holz on 29.01.23.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    // C++ - style strings
    // contiguous in memory, dynamic size, safer than C-style strings since methods can bounds-check
    
    std::string name {"Mark"};
    std::string s1 (3, 'X');
    
    std::cout << s1 << std::endl;
    
    // concatenation
    std::string s2 {name + s1};
    std::cout << s2 << std::endl;
    std::cout << s2.at(2) << std::endl;
    
    for (char c : s2) {
        std::cout << c << std::endl;
    }
    
    std::cout << s2.substr(3,2) << std::endl;
    std::cout << s2.find('X') << std::endl;
    std::cout << s2.erase(0,2) << std::endl;
    std::cout << s2.length() << std::endl;
    
    s2 += " Test";
    
    std::string s3 {};
    std::cout << "Enter a name: " << std::endl;
    getline(std::cin, s3);
    std::cout << "You typed in: " << s3 << std::endl;
    
    // size_t when i is unsigned
    for (size_t i {0}; i < s3.length(); ++i) {
        std::cout << s3.at(i);
    }
    std::cout << std::endl;
    return 0;
}
