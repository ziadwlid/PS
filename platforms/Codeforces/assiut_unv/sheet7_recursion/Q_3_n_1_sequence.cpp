#include <iostream>
long long threen_plus_one_seq (long long i){
    if (i == 1) return 1;
    if (i % 2 == 0) return 1 + threen_plus_one_seq(i / 2);
    else return 1 + threen_plus_one_seq(3 * i + 1);
}
int main(){
    long long input {0}; std::cin >> input;
    std::cout << threen_plus_one_seq (input);
    return 0;
}