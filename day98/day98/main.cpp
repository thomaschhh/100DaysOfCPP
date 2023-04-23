//
//  main.cpp
//  day98
//
//  Created by Thomas Holz on 23.04.23.
//
//  regex

#include <regex>
#include <iostream>

int main(int argc, const char * argv[]) {
    std::string input = "The quick brown fox jumps over the lazy dog.";
    
    // Define a regular expression pattern to search for
    std::regex pattern("q[a-z]+k");
//    std::regex pattern("fox|dog");
    
    std::smatch match;  // declare a std::smatch object to store the matched pattern
    
    // search for the pattern in the input string and store the matched pattern in the match object
    if (std::regex_search(input, match, pattern)) {
        std::cout << "Match found: " << match.str() << std::endl;
    } else {
        std::cout << "Match not found." << std::endl;
    }

    return 0;
}
