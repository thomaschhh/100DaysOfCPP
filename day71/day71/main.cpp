//
//  main.cpp
//  day71
//
//  Created by Thomas Holz on 27.03.23.
//
//  std::stack
//  LIFO: last in first out


#include <iostream>
#include <stack>


void display_stack(std::stack<std::string>& st) {
    std::cout << "Stack content:" << std::endl;
    while(!st.empty()) {
      std::cout << st.top() << " ";
      st.pop();
    }

  std::cout << std::endl;
}


void print_size_stack(std::stack<std::string>& st) {
    unsigned long size = st.size();
    std::cout << "Size of the stack: " << size << std::endl;
}


int main(int argc, const char * argv[]) {
    
    // create a stack of strings
    std::stack<std::string> colors;

    // push elements into the stack
    colors.push("Green");
    colors.push("Red");
    colors.push("Purple");
    colors.push("Orange");
    print_size_stack(colors);
    
    std::cout << "Top element: " << colors.top() << std::endl;
    
    colors.pop();  // remove top element
    
    display_stack(colors);
    print_size_stack(colors);
    
}
