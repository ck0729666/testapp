#include <iostream>

//vitual虚函数 实现 多类时子类调用自己的方法
//虚函数开销：1.额外内存建立v表，包含继承的虚函数的关系
//override可加可不加

class Entity {
    public:
    virtual std::string GetName() {return "Entity";}

};

class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string& name) 
    : m_Name(name)
    {

    }
    std::string GetName() override {return m_Name;}
};

void PrintName(Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}

int main() {
    Entity* e = new Entity();
    //std::cout << e->GetName() << std::endl;
    PrintName(e);
    Player* p = new Player("aaak");
    //std::cout << p->GetName() << std::endl;
    PrintName(p);

    Entity* e1 = p;
    //std::cout << e1->GetName() << std::endl;
    PrintName(e1);
}