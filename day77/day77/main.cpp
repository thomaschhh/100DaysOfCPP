//
//  main.cpp
//  day77
//
//  Created by Thomas Holz on 02.04.23.
//
//  mutex
//  grant exclusive access / ownership in multithread use cases
//  protect shared data

#include <iostream>
#include <thread>
#include <mutex>
#include <future>


std::mutex mtx;
int num {};

void print_block (const int& n, const char& c) {
    // Critical section (exclusive access to std::cout signaled by locking mtx)
    // If the functions throws an exception the unlock statement is never reached
    // The lock_guard object gets destroyed automatically whenever the function is exited – regardless how it is exited.
    
    std::lock_guard<std::mutex> lock(mtx);
    //    mtx.lock();
   
    std::cout << num << " ";
    
    for (size_t i=0; i<n; ++i) {
        std::cout << c;
    }
    
    std::cout << std::endl;
    
    num++;
    
//    mtx.unlock();
}

int main(int argc, const char * argv[]) {
    std::thread thread1 (print_block, 50, '*');
    std::thread thread2 (print_block, 50, '$');

    thread1.join();
    thread2.join();

    auto future1 = std::async(std::launch::async, print_block, 50, '+');
    auto future2 = std::async(std::launch::async, print_block, 50, '=');
    
    future1.wait();
    future2.wait();
    
    return 0;
}

