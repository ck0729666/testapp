#include <iostream>
#include <vector>

//动态数组vector，最好存对象，因为指针的话，遍历每个指针后，要去不同的内存地址寻找变量内容

//优化：如何避免更新长度、复制

struct Vertex {
    float x,y,z;
    Vertex(float x, float y, float z)
    :x(x),y(y),z(z) {}
    Vertex(const Vertex& vertex) 
    :x(vertex.x),y(vertex.y),z(vertex.z) {
        std::cout << "copyed" << std::endl;
    }
    
};
 
int main() {
    std::vector<Vertex> vertexs;
    vertexs.reserve(3);//知道初始长度的话，预先分配，避免扩容复制
   // vertexs.push_back({1,2,3}); 构造了Vertex对象后，拷贝到vertor中，所以要复制
    vertexs.emplace_back(1,2,3);
    vertexs.emplace_back(4,5,6);
    vertexs.emplace_back(7,8,9);

    std::cin.get();
}


