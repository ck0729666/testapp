#include <iostream>
#include <array>

//静态数组 std::array,存栈上；vector存堆上

template <int size>

void PrintArr(const std::array<int,size> arr) {
    for (int i=0;i<size;i++) {
        std::cout << arr[i] << std::endl;
    }
}
 
int main() {
    std::array<int,8> data;
    data[0]=0;
    data[2]=4;
    data[10]=2;
    PrintArr<8>(data);

    int data1[8];
    data1[10]=2;
    return 0;
}


