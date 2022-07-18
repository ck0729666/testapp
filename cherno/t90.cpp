#include <iostream>
#include <string>

//左右值
//移动语义
//stdmove和移动赋值操作符

class String
{
private:
    /* data */
    char* m_Buffer;
    uint32_t m_Size;
public:
    String() = default;
    String(const char* string) {
        std::cout << "created" << std::endl;
        m_Size = strlen(string);
        m_Buffer = new char[m_Size];
        memcpy(m_Buffer,string,m_Size);
    }
    String(const String& other)
        : m_Size(other.m_Size)
    {
        std::cout << "copyed" << std::endl;
        m_Size = other.m_Size;
        m_Buffer = new char[m_Size];
        memcpy(m_Buffer,other.m_Buffer,m_Size);
    }
    String(String&& other) noexcept
    {
        std::cout << "moved" << std::endl;
        m_Size = other.m_Size;
        m_Buffer = other.m_Buffer;
        other.m_Buffer = nullptr;
        other.m_Size = 0;
    }
    ~String() {
        std::cout << "deleted" << std::endl;
        delete[] m_Buffer;
    }
    void Print() {
        for (uint32_t i = 0; i < m_Size; i++) {
            printf("%c",m_Buffer[i]);
        }
        printf("\n");
    }
    String& operator=(String&& other) {
        printf("===");
        // if (this!=&other) {
        //     delete[] m_Buffer;
        //     m_Size = other.m_Size;
        //     m_Buffer = other.m_Buffer;
        //     other.m_Buffer = nullptr;
        //     other.m_Size = 0;
        // }
        printf("\n");
        return *this;
    }
};

class Entity
{
private:
    String m_Name;
public:
    Entity(const String& name) 
    :m_Name(name)
    {}
    Entity(String&& name) 
    //:m_Name(name)
    //std::move用于把一个值移动到另外的地方，而不是赋值了,等价于下面的
    //:m_Name(std::move(name))
    :m_Name((String&&)name)
    {}
    void PrintName() {
        m_Name.Print();
    }
};

int main() {
    // Entity entity("Cherno");
    // entity.PrintName();
    String apple = "Apple";
    String dest;
    std::cout << "apple" << std::endl;
    apple.Print();
    std::cout << "dest" << std::endl;
    dest.Print();
    dest = std::move(apple);
    std::cout << "apple" << std::endl;
    apple.Print();
    std::cout << "dest" << std::endl;
    dest.Print();
    std::cin.get();
}