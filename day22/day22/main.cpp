//
//  main.cpp
//  day22
//
//  Created by Thomas Holz on 06.02.23.
//

#include <iostream>
#include <vector>
#include <string>

int main() {
    
    int num{10};
    std::cout << "Value: " << num << std::endl;
    std::cout << "sizeof: " << sizeof(num) << " bytes" << std::endl;
    std::cout << "Address: " << &num << std::endl;

    int* p;
    std::cout << "\nValue: " << p << " garbage value" << std::endl;
    std::cout << "Address: " << &p << std::endl;
    std::cout << "sizeof: " << sizeof(p) << " bytes" << std::endl;

    p = nullptr;
    std::cout << "\nValue: " << p << std::endl;

    int* p1 {nullptr};
    double* p2 {nullptr};
    unsigned long long* p3 {nullptr};
    std::vector<std::string>* p4{nullptr};
    std::string* p5 {nullptr};

    std::cout << "\nsizeof: " << sizeof(p1) << " bytes" << std::endl;
    std::cout << "sizeof: " << sizeof(p2) << " bytes" << std::endl;
    std::cout << "sizeof: " << sizeof(p3) << " bytes" << std::endl;
    std::cout << "sizeof: " << sizeof(p4) << " bytes" << std::endl;
    std::cout << "sizeof: " << sizeof(p5) << " bytes" << std::endl;
    
    int score{10};
    double high_temp{100.7};
    int* score_ptr {nullptr};

    score_ptr = &score;
    std::cout << "Value: " << score << std::endl;
    std::cout << "Address: " << &score << std::endl;
    std::cout << "Value: " << score_ptr << std::endl;

//    score_ptr = &high_temp;     // Compiler error
    
    return 0;
}

