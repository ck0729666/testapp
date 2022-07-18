#include <iostream>

//const:左边有东西，就是修饰左边；左边没东西就是修饰右边

//1.
//const int *a 等价于 int const * a, 表示a指向的地址中的内容不能被修改，可以理解为我把指向内容的int类型声明为const不准修改了，因为const和int在一起
//int * const a, 表示a指向的地址不能修改，可以理解为这个const和指针名在一起，表示a存储的值（指向的地址）不能改变

//2.
//放在类的方法名后，只能读取，不能修改实际的类
//常对象只能调用常成员函数
class Entity {
private: 
    mutable int x;
    int y;
public:
    int GetX() const {
        x = 5;
        return x;
    }
    // int GetX() {
    //     x = 55;
    //     return x;
    // }
};
void PrintEntity(Entity& e) {
    std::cout << e.GetX() << std::endl;
}

int main() {
   //const int* a;
   //int const* a
   int b = 1;
   int* const a = new int;
   //int* a;
   *a = 5;
   //a = 3;
    std::cin.get();
}