#include <iostream>
#include <thread>
#include <chrono>

//计时器
//chrono库

struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
    Timer() {
        //start = std::chrono::high_resolution_clock::now();
        auto start = std::chrono::steady_clock::now();

    }
    ~Timer() {
        end = std::chrono::steady_clock::now();
        duration = end-start;
        float ms = duration.count()*1000.0f;
        std::cout << ms << "ms" << std::endl;
    }
};

 
int main() {
    Timer t;
    for (int i=0;i<1000;i++) {
        std::cout << 1;
    }
    
    // using namespace std::literals::chrono_literals;
    // auto start = std::chrono::high_resolution_clock::now();
    // std::this_thread::sleep_for(1s);
    // auto end = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<float> duration = end-start;
    // std::cout << duration.count() << std::endl;
    // return 0;
}


