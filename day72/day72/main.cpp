//
//  main.cpp
//  day72
//
//  Created by Thomas Holz on 28.03.23.
//
//  std::queue
//  FIFO: first in first out

#include <iostream>
#include <queue>


template <typename T>
void print_queue(std::queue<T>& q)
{
    std::queue<T> temp = q;
    
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    
    std::cout << std::endl;
}


int main(int argc, const char * argv[]) {
    std::queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
  
    std::cout << "q1 contains: ";
    print_queue(q1);
    
    std::queue<double> q2;
    q2.push(56.2);
    q2.push(90.11);
    q2.push(6830.908);
  
    std::cout << "q2 contains: ";
    print_queue(q2);
    
    std::queue<double> q3;
    q3.push(23.4);
    q3.push(11.19);
    q3.push(984.21);
    
    std::cout << "q3 contains: ";
    print_queue(q3);
    
    q2.swap(q3);
        
    std::cout << "After swapping, the second queue is: ";
    print_queue(q2);
    std::cout << "After swapping the third queue is: ";
    print_queue(q3);
    
    std::cout << std::boolalpha << "Is queue one empty? -> " << q1.empty() << std::endl;
  
    std::cout << "The first element of q1 is: " << q1.front() << std::endl;
    std::cout << "The last element of q1 is: " << q1.back() << std::endl;
    
    
    return 0;
}
