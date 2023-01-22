//
//  main.cpp
//  day7
//
//  Created by Thomas Holz on 22.01.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int num {7};
    const int boundary {5};
    
    if (num > boundary){
        std::cout << "num is greater than " << boundary << std::endl;
    }else{
        std::cout << "num is smaller or equal to " << boundary << std::endl;
    }
    
    int healed = false;
    
    if (num > boundary && !healed){
        std::cout << "num is greater than " << boundary << " and not healed." << std::endl;
    }
    
    if (num < boundary){
        std::cout << "num is smaller than " << boundary << std::endl;
    }else if (num == boundary){
        std::cout << "num is equal to " << boundary << std::endl;
    }else{
        std::cout << "num is greater than " << boundary << std::endl;
    }
    
    int score {60};
    char letter_grade {};
    
    if (score >= 0 && score <= 100){
        if (score >= 90) {
            letter_grade = 'A';
        } else if (score >= 80) {
            letter_grade = 'B';
        } else if (score >= 70) {
            letter_grade = 'C';
        } else if (score > 60) {
            letter_grade = 'D';
        } else {
            letter_grade = 'F';
        }
        std::cout << "Your grade is " << letter_grade << std::endl;
    }else{
        std::cout << "Sorry, " << score << " is not in range between 1 and 100." << std::endl;
    }
    
    return 0;
}
