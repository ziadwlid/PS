#include <iostream>

int main (){
    long long n {0};
    std::cin >> n;
    long long sum {0};
    for (int i = 0; i <= n; i++){
        sum += i;
        if (sum > n){
            std::cout << i - 1 << "\n";
            break;
    }}
    return 0;
}