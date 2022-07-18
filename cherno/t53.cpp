#include <iostream>
#include <vector>

//模版

// template<typename T>

// void PrintT(T t) {
//     std::cout << t << std::endl;
// }

template<typename T, int size>

class Tmep {
    private:
    //int a;
    T arr[size];
    public:
    int getArr() {
      return size;
    }
    void getType() {
      std::cout << T << std::endl;
    }
};
 
int main() {
    Tmep<int,5> arr;
    std::cout << arr.getArr() << std::endl;
    //std::cout << arr.getType() << std::endl;
    arr.getType();
    std::cin.get();

    Tmep<std::string,533> arr1;
    std::cout << arr1.getArr() << std::endl;
    //std::cout << arr1.getType() << std::endl;
    arr1.getType();
    //PrintT(1);
    //PrintT("99");
    return 0;
}


