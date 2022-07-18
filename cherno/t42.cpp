#include <iostream>

//this

//做声明
class Entity;
void PrintEntity(const Entity& e);


class Entity {
    public:
    int x,y;
    Entity(int x,int y) {
        this->x = x;
        this->y = y;
        PrintEntity(*this);
    }
};

void PrintEntity(const Entity& e) {
    std::cout << e.x << std::endl;
}

int main() {
    Entity e(1,2);

}