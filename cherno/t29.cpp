#include <iostream>

//纯虚函数 相当于接口，其他类必须实现接口中的纯虚函数才能实例化

class Interface {
public:
    virtual std::string GetClassName() = 0;
};

class EntityTmp : public Interface {
public:
    // std::string GetClassName() override {
    //     return "Entity";
    // }

};

class Entity : public Interface {
public:
    std::string GetClassName() override {
        return "Entity";
    }

};

class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string& name) 
    : m_Name(name)
    {

    }
    std::string GetClassName() override {return m_Name;}
};

void PrintName(Interface* interface) {
    std::cout << interface->GetClassName() << std::endl;
}

int main() {
    Interface* e = new Entity();
    //std::cout << e->GetName() << std::endl;
    PrintName(e);
    Player* p = new Player("aaak");
    //std::cout << p->GetName() << std::endl;
    PrintName(p);

    Entity* e1 = p;
    //std::cout << e1->GetName() << std::endl;
    PrintName(e1);

    Entity* e2 = new Entity();
    PrintName(e2);

    //编译失败，必须实现接口
    //EntityTmp* e2 = new EntityTmp();
    //PrintName(e2);
       
}