//
//  main.cpp
//  day68
//
//  Created by Thomas Holz on 24.03.23.
//
//  std::array
//  a container that encapsulates fixed size arrays

#include <iostream>
#include <array>


template <typename T, std::size_t size>
void display_array(std::array<T, size>& arr){
    for(const auto& s: arr)
        std::cout << s << ' ';
    std::cout << std::endl;
}

template <typename T, std::size_t size>
void sort_array(std::array<T, size>& arr, std::string mode){
    if (mode == "ascending"){
        std::sort(arr.begin(), arr.end(), std::less<>());
    }else if (mode == "descending"){
        std::sort(arr.begin(), arr.end(), std::greater<>());

    }else{
        std::cout << "wrong mode selected. select 'ascending' or 'descending'." << std::endl;
    }
}


int main(int argc, const char * argv[]) {
    
    std::array<int, 9> a1 = {1, 2, 5, 9, 3};  // rest is filled with zeros
//    std::size_t size_array1 = a1.size();
    
    display_array(a1);
    sort_array(a1, "ascending");
    display_array(a1);
    sort_array(a1, "descending");
    display_array(a1);
    
    std::cout << *a1.data() << std::endl;
    std::cout << a1.back() << std::endl;
    std::cout << a1.front() << std::endl;
    std::cout << a1.at(2) << std::endl; // bounds checking
    
    return 0;
}
