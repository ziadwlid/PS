#include <iostream>
long long power {0};
long long log_2 (long long i){
    if (i == 1) return power;
    i = log_2(i / 2);
    ++power;
    return power;
}

int main(){
    long long input{0}; std::cin >> input;
    std::cout << log_2 (input);
    return 0;
}