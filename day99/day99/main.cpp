//
//  main.cpp
//  day99
//
//  Created by Thomas Holz on 24.04.23.
//
//  forward list


#include <iostream>
#include <forward_list>

int main(int argc, const char * argv[]) {
    std::forward_list<int> list1, list2;  // Create an empty forward list
    
    // Assign values to the forward list using the assign() function
    list1.assign({1, 2, 3, 4, 5});
    list2.assign({10, 20, 30});
    
    // Print the contents of the forward list using a range-based for loop
    std::cout << "list1 contains: ";
    for (int& i : list1) {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;
    
    // Use the assign() function again to overwrite the contents of the forward list
    list1.assign(list2.begin(), list2.end());
    
    // Print the contents of the forward list again
    std::cout << "After using assign() again, list1 contains: ";
    for (int& i : list1) {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}
