#include <iostream>

//重载运算符

struct Vector
{
    float x,y;
    Vector(float x, float y) 
    :x(x),y(y) {}
    Vector add(const Vector& other) const {
        return Vector(x+other.x,y+other.y);
    }
    Vector operator+(const Vector& other) const {
        return add(other);
    }
};

std::ostream& operator<<(std::ostream& stream, const Vector& other) {
    stream << other.x << ", " << other.y;
    return stream;
} 

int main() {
    Vector v1(1.0f,2.0f);
    Vector v2(2.0f,3.0f);
    Vector v3 = v1+v2;
   // std::cout << v3.x << " " << v3.y << std::endl;
   std::cout << v3 << std::endl;
}