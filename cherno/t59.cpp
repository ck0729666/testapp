#include <iostream>
#include <array>

//lambda


void PrintArr() {
    std::cout << "111" << std::endl;
}

void PrintValue(int value) {
    std::cout << value << std::endl;
}
void forEach(int arr[5], const std::function<void(int)>& func) {
    for (int i=0;i<5;i++) {
        func(arr[i]);
    }
}

 
int main() {
    int arr[5] = {1,2,3,4,5};
    auto lambda = [=](int value) {std::cout << arr << std::endl;};
    forEach(arr, lambda);
    return 0;
}


