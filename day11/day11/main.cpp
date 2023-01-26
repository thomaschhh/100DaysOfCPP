//
//  main.cpp
//  day11
//
//  Created by Thomas Holz on 26.01.23.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    
    // continue, break
    std::vector<int> values {1,2-1,3,-1,-99,7,8,10};
    
    for (auto val : values) {
        if (val == -99) {
            break;  // loop is immediately terminated, control immediately goes to the statement following the loop construct
        } else if (val == -1){
            continue;  // control immediately going back to the beginning of the loop for the next iteration
        }else{
            std::cout << val << std::endl;
        }
    }
    
    // infinite loop
    while (true) {
        char again {};
        std::cout << "Do you want to loop again? (Y/N)" << std::endl;
        
        std::cin >> again;
        
        if (again == 'N' || again == 'n') {
            break;
        }
    }
    
    return 0;
}
