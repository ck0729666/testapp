#include <iostream>

//成员初始化列表

class Example {
public:
    Example() {
        std::cout << "created" << std::endl;
    }    
    Example(int x) {
        std::cout << "created " << x << std::endl;
    }
};

class Entity{
private:
    std::string m_Name;
    Example m_Example;    
public:
    //会创建两个成员变量example
    // Entity() {
    //     m_Name = std::string("Unhonwn");
    //     m_Example = Example(8);
    // }
    //用成员初始化列表，只会生成一个
    Entity() 
    :m_Name("Unhonwn"),m_Example(8)
    {}
    Entity(const std::string& name) 
    : m_Name(name)
    {}
    const std::string& GetName() const {return m_Name;}
};

int main() {
    Entity e0;
    std::cout << e0.GetName() << std::endl;
    std::cin.get();
}