#include <iostream>
#include <iostream>


//构造函数，用于初始化数据，不然每升成一个实例，都要init一遍
//没构造函数时，c++有默认的；可以通过private修饰/指定class() = delete不让调用默认构造函数

//还有复制构造函数、移动构造函数

class Entity {
    public:
    float x, y;
    Entity() {
        x = 0;
        y = 0;
    }
};

int main() {
    Entity e;
    std::cout << e.x << " " << e.y << std::endl;
   
    return 0;
}

