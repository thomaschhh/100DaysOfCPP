//
//  main.cpp
//  day65
//
//  Created by Thomas Holz on 21.03.23.
//
//  Iterators


#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>


void displayVector(const std::vector<int>& vec) {
    
    for (auto const&i: vec) {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;
}


template <class T>
void displayIteratorValue(const T& iter){
    std::cout << iter << std::endl;
}


void iterator_arithmetic() {
    std::cout << "----" << std::endl;
    
    std::vector<int> numbers {1, 2, 3, 4, 5};
    std::vector<int>::iterator iter = numbers.begin();
    // auto iter = numbers.begin(); this would also work
    
    while (iter != numbers.end()) {
        displayIteratorValue(*iter);
        iter++;
    }
    
    iter = numbers.begin();
    
    displayIteratorValue(*iter);

    iter++;
    displayIteratorValue(*iter);

    iter += 2;
    displayIteratorValue(*iter);

    iter -= 2;
    displayIteratorValue(*iter);

    iter = numbers.end() - 1;
    displayIteratorValue(*iter);
}


void access_alter_iterator() {
    std::cout << "----" << std::endl;
    
    std::vector<int> numbers {1, 2, 3, 4, 5};
    auto iter = numbers.begin();

    while (iter != numbers.end()) {
        *iter = 0;
        iter++;
    }

    displayVector(numbers);
}


void const_iterator() {
    
    std::cout << "----" << std::endl;
    std::vector<int> numbers {1, 2, 3, 4, 5};
    std::vector<int>::const_iterator iter = numbers.begin();

    
    while (iter != numbers.end()) {
        displayIteratorValue(*iter);
        iter++;
    }
    
    iter = numbers.begin();
    while (iter != numbers.end()) {
       // *iter = 0;   // cannot change a const_iterator
        iter++;
    }

}


void reverse_const_map_list() {
    // reverse iterator
    std::vector<int> vec {1,2,3,4};
    std::vector<int>::reverse_iterator iter = vec.rbegin(); // start at 4
    
    while (iter != vec.rend()) {
        displayIteratorValue(*iter);
        iter++;
    }

    // const reverse iterator over a list
    std::list<std::string> names {"Kim", "Dan", "Toby"};
    std::list<std::string>::const_reverse_iterator iter2 = names.crbegin();
    
    displayIteratorValue(*iter2);
    iter2++;
    displayIteratorValue(*iter2);
    iter2++;
    displayIteratorValue(*iter2);

    // map - similar to a dictionary
    std::map<std::string, std::string> people {
        {"Kim", "C"},
        {"Dan", "Python"},
        {"Toby", "SQL"}
    };
    
    // not printed in expected order
    auto iter3 = people.begin();
    while (iter3 != people.end()) {
        std::cout << iter3->first << " : " << iter3->second << std::endl;
        iter3++;
    }
}



int main(int argc, const char * argv[]) {

    iterator_arithmetic();
    access_alter_iterator();
    const_iterator();
    reverse_const_map_list();

    return 0;
}
