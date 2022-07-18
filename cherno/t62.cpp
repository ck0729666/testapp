#include <iostream>
#include <thread>

//线程
//join等待当前线程执行完毕，再往下执行

static bool flag = false;

void Print() {
   //using namespace std::literals::chrono_literals;
    //using namespace std::literals::chrono_literals;
    while (!flag)
    {
        std::cout << "a" << std::endl;
        //std::this_thread::sleep_for(1s);
    }
    std::cout << std::this_thread::get_id() << std::endl;
    std::cout << "end" << std::endl;
}


 
int main() {
    std::thread worker(Print);
    std::cin.get();
    flag = true;
    std::cout << std::this_thread::get_id() << std::endl;
    worker.join();
    std::cout << std::this_thread::get_id() << std::endl;
    return 0;
}


