#include <iostream>
#include <vector>
#include <unordered_map>

//55
//宏：在实际用法中，可能debug模式需要定义宏log(x)=std::cout<<x<<std::endl;而release模式定义宏log(x)使他不打印
//宏中的/代表换行
//56
//auto何时使用？一般变量用固定类型定义即可，在某些iterator或者很长的map等的类型使用时，可以用auto减少代码长度，比如const auto&

#define WAIT  std::cin.get()

class Temp {
    private:
    std::unordered_map<std::string,int> m;
    public:
    std::unordered_map<std::string,int> getMap() {
        return m;
    }
};
 
int main() {
    WAIT;
    Temp t;
   // std::unordered_map<std::string,int> m = t.getMap();
   const auto& m = t.getMap();
    std::cout << m.max_size() << std::endl;
    return 0;
}


