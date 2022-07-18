#include <iostream>
#include <vector>

//多维数组


struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
    Timer() {
        //start = std::chrono::high_resolution_clock::now();
        auto start = std::chrono::steady_clock::now();

    }
    ~Timer() {
        end = std::chrono::steady_clock::now();
        duration = end-start;
        float ms = duration.count()*1000.0f;
        std::cout << ms << "ms" << std::endl;
    }
};
 
int main() {
    // int*** a3d = new int**[50];
    // for (int i=0;i<50;i++) {
    //     a3d[i] = new int*[50];
    //     for (int j=0;j<50;j++) {
    //         a3d[i][j] = new int[50];
    //         for (int k=0;k<50;k++) {
    //             a3d[i][j][k] = i+j+k;
    //         }
    //     }
    // }
    // Timer t;
    // for (int i=0;i<50;i++) {
    //     for (int j=0;j<50;j++) {
    //         for (int k=0;k<50;k++) {
    //             std::cout << a3d[i][j][k] << std::endl;
    //         }
    //     }
    // }
    // delete[] a3d;//会内存泄露，因为没有删除内部元素。应该从里层到外层遍历delete

    // //多维数组，每一层的每个元素位置都不确定，容易cache miss，比单维的慢。例如：
    // int* arr = new int[5*5];
    // for (int y=0;y<5;y++) {
    //     for (int x=0;x<5;x++) {
    //         arr[x+y*5]=2;
    //     }
    // }
    // for (int i=0;i<25;i++) {
    //     std::cout << arr[i] << std::endl;
    // }

    //sort
    std::vector<int> values = {1,4,553,223,12,3};
    //std::sort(values.begin(),values.end());
    std::sort(values.begin(),values.end(),[](int a,int b){
        return a<b;
    });
    for (int value : values) {
        std::cout << value << std::endl;
    }

    std::cin.get();
}


