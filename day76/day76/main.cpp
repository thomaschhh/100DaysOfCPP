//
//  main.cpp
//  day76
//
//  Created by Thomas Holz on 01.04.23.
//
//  threads


#include <iostream>
#include <thread>
#include <future>
#include <chrono>
#include <iomanip>


// A dummy function
void aLoop(size_t a)
{
  for (size_t i = 0; i < a; i++)
  {
//      std::cout << "Thread 1 using function pointer as callable" << std::endl;
      continue;
  }
}
 
// A callable object
class thread_obj {
public:
    void operator()(size_t x)
    {
      for (size_t i = 0; i < x; i++)
//          std::cout << "Thread 2 using function object as callable" << std::endl;
          continue;
    }
};


int main(int argc, const char * argv[]) {
    // A Lambda Expression
    auto lambdaLoop = [](size_t x)
    {
        for (size_t i = 0; i < x; i++)
//            std::cout << "Thread 3 using lambda expression as callable" << std::endl;
            continue;
    };
    
    // Create a thread pool with 3 worker threads
    std::vector<std::thread> threads(3);
    
    // for nLoopIterations = 600'000, std::async was 27 times faster
    const size_t nLoopIterations {10'000};

    auto begin = std::chrono::high_resolution_clock::now();

    for (size_t i = 0; i < nLoopIterations; i++){
        // Submit tasks to the thread pool
        threads[0] = std::thread(aLoop, nLoopIterations);
        threads[1] = std::thread(thread_obj(), nLoopIterations);
        threads[2] = std::thread(lambdaLoop, nLoopIterations);
        
        // Wait for the tasks to complete
        for (auto& t : threads) {
            if (t.joinable()) {
                t.join();
            }
        }
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    auto time_elapsed = static_cast<double>(std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count());
    std::cout << "Time used to run the std::thread based for loop: " << std::setprecision(10) << time_elapsed * 1e-9 << " seconds." << std::endl;

    begin = std::chrono::high_resolution_clock::now();
    
    for (size_t i = 0; i < nLoopIterations; i++){
        auto future1 = std::async(std::launch::async, aLoop, 10);
        auto future2 = std::async(std::launch::async, thread_obj(), 10);
        auto future3 = std::async(std::launch::async, lambdaLoop, 10);
        
        // Wait for the futures to finish
        future1.wait();
        future2.wait();
        future3.wait();
    }
    
    end = std::chrono::high_resolution_clock::now();
    time_elapsed = static_cast<double>(std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count());
    std::cout << "Time used to run the std::async based for loop: " << std::setprecision(10) << time_elapsed * 1e-9 << " seconds." << std::endl;
    
    std::cout << "Not until all threads are finished will you see this output." << std::endl;
    
    return 0;
}
