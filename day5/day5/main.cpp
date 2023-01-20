//
//  main.cpp
//  day5
//
//  Created by Thomas Holz on 20.01.23.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    // a vector is a dynamic array and can grow or shrink in size at execution time
    // automatically init. with zeros unless specified otherwise
    // they provide bound checking and offer functions like sort, finde and more
    // accessing the indexes with [] does not offer bounds checking
    // it is an object oriented template class
    // elements all of the same type
    std::vector <char> vowels (5);  // five chars init. with zeros
    std::vector <int> test_scores {100, 84, 99};
    std::vector <double> hi_temperatures (365, 80.0);  // 365 doubles init. with 80.0
    
    std::cout << "vowels[0] " << vowels[0] << std::endl;
    std::cout << "test_scores[0] " << test_scores[0] << std::endl;
    std::cout << "test_scores.at(0) " << test_scores.at(0) << std::endl;
    
    test_scores.at(0) = 34;
    std::cout << "test_scores.at(0) " << test_scores.at(0) << std::endl;
    
    // add another element, vector will automatically allocate the required space
    test_scores.push_back(789);
    
    // get the size of a vector
    std::cout << "test_scores.size() " << test_scores.size() << std::endl;
    
    // 2D vector
    std::vector<std::vector<int>> movie_ratings
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    std::cout << "movie_ratings.at(0).at(1) " << movie_ratings.at(0).at(1) << std::endl;
    
    return 0;
}
