//
//  main.cpp
//  day73
//
//  Created by Thomas Holz on 29.03.23.
//
//  std::std::deque
//  double endede queue
//  acccess elements at front, back, or indices

#include <iostream>
#include <deque>


template <typename T>
void display_deque(std::deque<T>& g)
{
    typename std::deque<T>::iterator it;
    
    for (it = g.begin(); it != g.end(); ++it){
        std::cout << *it << '\t';
    }
    
    std::cout << std::endl;
}


int main(int argc, const char * argv[]) {
    std::deque<int> deque1 {};
    
    deque1.push_back(10);
    deque1.push_front(20);
    deque1.push_back(30);
    deque1.push_front(15);
    std::cout << "The std::deque deque1 is : ";
    display_deque(deque1);
    
    deque1.clear();
    std::cout << "deque1.empty() : " << std::boolalpha << deque1.empty() << std::endl;
    
    std::deque<double> deque2 {};
    
    deque2.push_back(5435.3);
    deque2.push_front(90.11);
    deque2.push_back(4672.09);
    deque2.push_front(1.09);
    
    std::cout << "deque2.size() : " << deque2.size() << std::endl;
    std::cout << "deque2.max_size() : " << deque2.max_size() << std::endl;
    std::cout << "deque2.at(2) : " << deque2.at(2) << std::endl;
    std::cout << "deque2.front() : " << deque2.front() << std::endl;
    std::cout << "deque2.back() : " << deque2.back() << std::endl;
    std::cout << "deque2.pop_front() : " << std::endl;
    deque2.pop_front();
    display_deque(deque2);
 
    std::cout << "deque2.pop_back() : ";
    deque2.pop_back();
    display_deque(deque2);
    
    return 0;
}
