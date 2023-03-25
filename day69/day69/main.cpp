//
//  main.cpp
//  day69
//
//  Created by Thomas Holz on 25.03.23.
//
// std::set
// don't allow direct access to element by index
// they are immutable: cannot change the values once they are stored in a set.
// insertion and deletion are allowed, but you cannot update or modify the existing elements of the set.

#include <iostream>
#include <set>

template <typename T>
void display_set(std::set<T>& aSet){
    for(const auto& s: aSet){
        std::cout << s << ' ';
    }
    std::cout << std::endl;
}

template <typename T>
void display_set_with_iterator(std::set<T>& aSet){
    
    std::set<int>::iterator it;
    
    for (auto it = aSet.begin(); it != aSet.end(); it++){
        std::cout<< *it << ' ';
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    
    // ordered set (ordered by key) - no duplicate elements
    std::set<int> set1 {1, 3, 2, 7, 7, 0};
    std::cout << set1.size() << std::endl;
    
    display_set(set1);
    display_set_with_iterator(set1);

    std::cout << "-----" << std::endl;
    
    // either 0 or 1
    unsigned long count1 = set1.count(7);
    unsigned long count2 = set1.count(6);
    
    std::cout << count1 << std::endl;
    std::cout << count2 << std::endl;
    
    set1.clear();
    
    std::cout << std::boolalpha;
    std::cout << set1.empty() << std::endl;
    
    set1.insert(6);
    display_set(set1);
        
    return 0;
}
