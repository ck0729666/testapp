#include <iostream>
#include <string>

//深/浅拷贝、拷贝构造函数

//拷贝构造函数发生的3个场景：类对象在函数体中定义但以值传递作为返回、对象给另一个对象作为初始化、对象传入参数为对象值的函数
//拷贝构造函数必须以引用的形式传递

class String
{
private:
    /* data */
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string) {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size];
        memcpy(m_Buffer,string,m_Size);
       // m_Buffer[m_Size] = 0;
    }
    String(const String& other)
        : m_Size(other.m_Size)
    {
        std::cout << "copyed string" << std::endl;
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer,other.m_Buffer,m_Size+1);
    }
    ~String() {
        delete[] m_Buffer;
    }
    char& operator[](unsigned int index) {
        return m_Buffer[index];
    }
    friend std::ostream& operator<<(std::ostream& stream,const String& string);
};

std::ostream& operator<<(std::ostream& stream,const String& string) {
    stream<<string.m_Buffer;
    stream<<"sss";
    return stream;
}

void PrintString(const String& string) {
    std::cout << string << std::endl;
}

int main() {
    String string = "cherno";
    //浅拷贝，会delete两次，程序崩溃
    String second = string;
    second[2]='a';
    // std::cout << string << std::endl;
    // std::cout << second << std::endl;
    PrintString(string);
    PrintString(second);
    std::cin.get();
}