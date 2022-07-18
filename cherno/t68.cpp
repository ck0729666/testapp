#include <iostream>

//虚析构函数

class Base
{
public:
    Base() {
        std::cout << "base create" << std::endl;
    }
    virtual ~Base() {
        std::cout << "base release" << std::endl;
    }
};
class Son : public Base {
public:  
    Son() {
        std::cout << "son create" << std::endl;
    }
    ~Son() {
        std::cout << "son release" << std::endl;
    }
};



int main() {
    Base* base = new Base();
    delete base;
    std::cout << "-----" << std::endl;
    //Son* son = new Son();
    //delete son;

    //析构函数不标记为vitural，不会调用子类的析构函数，可能内存泄漏（比如子类有一些成员变量，需要在析构函数中释放等）
    Base* son = new Son();
    delete son;
    
    std::cin.get();
}