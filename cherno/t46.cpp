#include <iostream>

//箭头

struct Vector {
    float x,y,z;
};
 
int main() {
   int a = (int)&((Vector*)nullptr)->x;
   std::cout << a << std::endl;
}


