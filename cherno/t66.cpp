#include <iostream>

//类型双关:比如把int类型的指针地址转化为double类型的
//union一般作为类型双关的实现

struct Vector2
{
    float x,y;
};
struct Vector4
{
    union {
        struct 
        {
            float x,y,z,w;
        };
        struct 
        {
            Vector2 a,b;
        };
        
    
    };
};
void PrintVector(const Vector4& vector) {
    std::cout << vector.x << " " << vector.y << " " << vector.z << " " << vector.w << std::endl;
}

int main() {
    Vector4 v1 = {1.0f,2.0f,3.0f,4.0f};
    PrintVector(v1);
    v1.a.x = 9.0f;
    PrintVector(v1);
}