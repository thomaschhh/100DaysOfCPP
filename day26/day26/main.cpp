//
//  main.cpp
//  day26
//
//  Created by Thomas Holz on 10.02.23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // const pointers
    
    //------ pointers to constants: the data it's pointing to can't be changed
    int a_score {29};
    int b_score {990};
    
    const int* score_ptr {&a_score};
//    *score_ptr = 66;  // can't change the value it's pointing to
    score_ptr = &b_score;
    
    //------ constant pointers: the pointer can't point anywhere elese
    int* const score_ptr2 {&a_score};
    *score_ptr2 = 66;
//    score_ptr2 = &b_score;  // can't change the address it's pointing to
    
    //------ constant pointer to constants: can't change either the value nor the address the pointer is pointing to
    const int* const score_ptr3 {&a_score};
//    *score_ptr3 = 66;
//    score_ptr3 = &b_score;
    
    return 0;
}
