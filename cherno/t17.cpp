#include <iostream>

//引用
/*
void Increment(int* value) {
    (*value)++;
}*/

void Increment(int& value) {
    value++;
}

int main() {
    int a = 5;
    std::cout << a << std::endl;
    //int& res = a;
    int* a1 = &a;
    int b = 2;
    int* b1 = &b;
    (*a1) = 11;
    //int& res2 = b;
    //res = res2;
    // //res = 2;
    //Increment(&a);
    //Increment(a);
    std::cout << a << std::endl;
    return 0;
}

