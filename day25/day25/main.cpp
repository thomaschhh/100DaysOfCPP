//
//  main.cpp
//  day25
//
//  Created by Thomas Holz on 09.02.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // pointer arithmetic
    int scores[] {100, 95, 89, 68, -1};
    int* score_ptr {scores};
    
    do {
        std::cout << *score_ptr << std::endl;
        score_ptr++;
    } while (*score_ptr != -1);
    
    std::cout << "\n--" << std::endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        std::cout << *score_ptr++ << std::endl;
        
    std::cout << "\n--" << std::endl;
    std::string s1 {"Thomas"};
    std::string s2 {"Thomas"};
    std::string s3 {"James"};

    std::string* p1 {&s1};
    std::string* p2 {&s2};
    std::string* p3 {&s1};

    std::cout << std::boolalpha;
    std::cout << p1 << " == " << p2 << ": " << (p1 == p2) << std::endl;
    std::cout << p1 << " == " << p3 << ": " << (p1 == p3) << std::endl;

    std::cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << std::endl;
    std::cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << std::endl;
    
    p3 = &s3;
    std::cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << std::endl;

    std::cout << "\n--" << std::endl;
    char name[] {"Chad"};
    
    char* char_ptr1 {nullptr};
    char* char_ptr2{nullptr};
    
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    std::cout << "In the char array " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << std::endl;
    
    return 0;
}
