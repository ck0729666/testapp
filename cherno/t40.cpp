#include <iostream>

//隐式转换和explicit
//explicit用于防止隐式调用构造函数

class Example {
private:
    std::string m_Name;
    int m_Age;
public:
    Example(const std::string& name) 
    :m_Name(name),m_Age(88){}    
    Example(int x) 
    :m_Name("Ssss"),m_Age(x){}

    void GetName() {
        std::cout << m_Name << " " << m_Age << std::endl;
    }
};

void PrintName(const Example& e) {
     //std::cout << e. << e << m_Age << std::endl;
}


int main() {
    Example e0 = 9;
    Example e2(9);
    //这里得做一次强制转换，把char[]转为string，不然需要隐式转换两次，char[]->string->Example，行不通
    Example e1(std::string("sdadsa"));
    e0.GetName();
    e1.GetName();
    PrintName(e0);
    PrintName(e1);
    std::cin.get();
}