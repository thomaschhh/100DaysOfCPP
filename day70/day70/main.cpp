//
//  main.cpp
//  day70
//
//  Created by Thomas Holz on 26.03.23.
//
//  std::map


#include <iostream>
#include <map>

template <typename T1, typename T2>
void print_map( std::map<T1, T2>& aMap){
    for (const auto& [key, value] : aMap){
        std::cout << key << ": " << value << " ";
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    
    std::map<std::string, double> m{{"CPU", 10}, {"GPU", 15}, {"RAM", 20}};
 
    print_map(m);
 
    m["CPU"] = 25; // update an existing value
    print_map(m);
 
    // using operator[] with non-existent key always performs an insert
    std::cout << "m[UPS] = " << m["UPS"] << '\n';
    m["SSD"] = 30; // insert a new value
    print_map(m);
 
    m.erase("GPU");
    print_map(m);
 
    // removes SSD
    std::erase_if(m, [](const auto& pair){ return pair.second > 25; });
    print_map(m);
    
    std::cout << "m.size() = " << m.size() << '\n';
 
    m.clear();
    std::cout << std::boolalpha << "Map is empty: " << m.empty() << '\n';
    
    return 0;
}
