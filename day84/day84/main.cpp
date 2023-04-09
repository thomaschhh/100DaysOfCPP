//
//  main.cpp
//  day84
//
//  Created by Thomas Holz on 09.04.23.
//
//  atomic


#include <iostream>
#include <thread>
#include <atomic>

// Non-atomic variable shared by threads
int shared = 0;

// Atomic variable shared by threads
// guarantees that the counter value is incremented correctly and no data races occur.
std::atomic<int> atomic_shared(0);

// Function executed by threads that increments the shared variable
void increment_non_atomic() {
    for (size_t i = 0; i < 10000; ++i) {
        ++shared;
    }
}

// Function executed by threads that increments the atomic shared variable
void increment_atomic() {
    for (size_t i = 0; i < 10000; ++i) {
        ++atomic_shared;
    }
}

int main(int argc, const char * argv[]) {
    // Create two threads that increment the non-atomic shared variable
    std::thread t1(increment_non_atomic);
    std::thread t2(increment_non_atomic);

    t1.join();
    t2.join();

    std::cout << "Non-atomic shared value: " << shared << std::endl;

    // Create two threads that increment the atomic shared variable
    std::thread t3(increment_atomic);
    std::thread t4(increment_atomic);

    t3.join();
    t4.join();

    std::cout << "Atomic shared value: " << atomic_shared << std::endl;

    return 0;
}
