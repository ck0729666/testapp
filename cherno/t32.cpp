#include <iostream>

//字符串

//只读的情况下：传string会拷贝一份字符串，很慢；可以传常量引用
void PrintString(const std::string& string) {
    std::cout << string << std::endl;
}

//char *p = "hello"; // p是一个指针，直接指向常量区，修改p【0】就是修改常量区的内容，这是不允许的。
//char p【】 = "hello"; // 编译器在栈上创建一个字符串p，把"hello"从常量区复制到p，修改p【0】就相当于修改数组元一样，是可以的。
int main() {
    char p [] = "Cherno";
    p[0]='s';
    //char* name = "Cherno";
    //name[0] = 's';
    //std::string name = "Cherno";
    std::cout << p << std::endl;
    //PrintString(name);
    std::cin.get();
}