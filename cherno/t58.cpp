#include <iostream>
#include <array>

//函数指针


void PrintArr() {
    std::cout << "111" << std::endl;
}

void PrintValue(int value) {
    std::cout << value << std::endl;
}
void forEach(int arr[5], void(*func)(int)) {
    for (int i=0;i<5;i++) {
        func(arr[i]);
    }
}

 
int main() {
    auto func1 = PrintArr;
    auto func2 = PrintArr;
    func1();
    func2();
    void (*func3)() = PrintArr;
    func3();

    typedef void(*PrintArrFunc)();
    PrintArrFunc func4 = PrintArr;
    func4();

    int arr[5] = {1,2,3,4,5};
    forEach(arr, PrintValue);
    return 0;
}


