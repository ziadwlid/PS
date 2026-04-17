#include <iostream>

void swap (int a, int b){
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << " " << b << "\n";
}

int main (){
    int a{0}, b{0};
    std::cin >> a >> b;
    swap(a, b);
    return 0;
}