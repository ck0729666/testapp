#include <iostream>

//类型转换:4种
//dynamic_cast不检查类型，运行时检查
//static_cast用于低风险转化，例如int-float-string等
//reinterpret_cast用于强制转化
//const_cast用于const的转化

class B
{
public:
    B() {
        std::cout << "base create" << std::endl;
    }
    virtual ~B() {
        std::cout << "base release" << std::endl;
    }
};

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
    double value = 5.25;
    double a = (int)(value + 5.3);

    //double s = static_cast<Base*>(&value)+5.3;
    std::cout << a << std::endl;

    Base* base = new Base();
    Son* son = new Son();
    Base* b = dynamic_cast<Son*>(son);
    if (b) {
    std::cout << "not null" << std::endl;
    } else {
        /* code */
    }
    
    std::cin.get();
}