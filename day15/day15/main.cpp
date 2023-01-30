//
//  main.cpp
//  day15
//
//  Created by Thomas Holz on 30.01.23.
//

#include <iostream>
#include <string>

// defintion of functions before calling them is okay for small programs
int add_2numbers(int a, int b){
    // pass by value
    return a + b;
}

void pass_by_value(int num){
    num = 400;
}

// no input (functional) parameters, no output
void greet(){
    std::cout<< "Hi there!" << std::endl;
}

// function prototype / forward declaration
// also used in header (.h) files
int substract_2numbers(int, int);

// default argument gets used when nothing is passed during function call
void bye(std::string phrase = "Default Bye"){
    std::cout << phrase << std::endl;
}

int main(int argc, const char * argv[]) {
    // functions: separate code into logical self-contained units
    // the compiler must know the function before it is called
    int a_number {1};
    int b_number {4};
    
    // function call with actual parameters, passed by value (compiler copys data (different location), which stays unchanged, can be expensive)
    std::cout << a_number << " + " << b_number << " = " << add_2numbers(a_number, b_number) << std::endl;
    
    std::cout << "a_number before pass_by_value: " << a_number << std::endl;
    pass_by_value(a_number);
    std::cout << "a_number after pass_by_value: " << a_number << std::endl;
    
    greet();
    
    std::cout << a_number << " - " << b_number << " = " << substract_2numbers(a_number, b_number) << std::endl;
    
    bye();  // uses default parameter
    bye("Goodbye");
    
    return 0;
}

int substract_2numbers(int a, int b){
    return a - b ;
}
