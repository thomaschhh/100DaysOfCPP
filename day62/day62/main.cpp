//
//  main.cpp
//  day62
//
//  Created by Thomas Holz on 18.03.23.
//
// Reading a text file


#include <iostream>
#include <string>
#include <fstream>


int main(int argc, const char * argv[]) {
    
    std::string filepath {};
    std::string line {};
    
    std::cout << "Enter the path to your file" << std::endl;
    std::cin >> filepath;
    
    try {
        std::fstream file {};
        
        //open a file to perform read operation using file object
        file.open(filepath, std::ios::out | std::ios::in );

        // check if file can be opened, if not throw an error
        if (!file.is_open()){
            throw 1;
        }
    
        std::cout << "Reading each line in existing file: " << std::endl;
        while (getline(file, line)){
          std::cout << line << std::endl;
        }
        
        // write to file
        file << "\nThis is a line.\n";
        file << "This is another line.\n";
        
        // close the file again
        file.close();
        
        
    } catch (int& exce) {
        std::cout << "The file path you specified is not correct or the file does not exist." << std::endl;
    }
    
    
    return 0;
}
