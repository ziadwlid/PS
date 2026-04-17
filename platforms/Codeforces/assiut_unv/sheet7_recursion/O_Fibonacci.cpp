#include <iostream>
int fibonacci (int i){
    if (i == 1) return 0;
    if (i == 2) return 1;
    return fibonacci(i - 1) + fibonacci (i - 2);
}

int main(){
    int input {0}; std::cin >> input;
    std::cout << fibonacci (input);
    return 0;
}