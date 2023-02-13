//
//  main.cpp
//  day29
//
//  Created by Thomas Holz on 13.02.23.
//

#include <iostream>
#include <string>
#include <vector>

void display_names(std::vector<std::string>& names){
    for (auto const& str : names)
       std::cout << str << std::endl;
}

int main(int argc, const char * argv[]) {
    // references: alias for a variable
    // must be initialized to a variable when declared
    // cannot refer a different variable once it was initialized
    // think of them as a constant pointer that is automatically dereferenced
    int num {5};
    int& ref {num};
    
    std::cout << num << std::endl;
    std::cout << ref << std::endl;
    
    num  = 78;
    std::cout << "---" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;
    
    ref = 93;
    std::cout << "---" << std::endl;
    std::cout << num << std::endl;
    std::cout << ref << std::endl;
    
    std::cout << "---" << std::endl;
    std::vector<std::string> names {"Mary", "Kyle", "Travis"};

    for (auto str : names)
        str = "Change";  // str is a COPY of each vector element
      
    display_names(names);
    
    std::cout << "---" << std::endl;
    for (auto& str : names)  // str is a reference to each vector element
        str = "Change";
     
    display_names(names);
    
    return 0;
}
