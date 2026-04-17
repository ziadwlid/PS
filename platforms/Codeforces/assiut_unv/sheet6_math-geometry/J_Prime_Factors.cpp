#include <iostream>

int main (){
    long long n {0}; 
    std::cin >> n;
    if (n <= 1) return 0;
    bool first = true;
    for (int i = 2; i <= n; i++){
        int exp = 0;
        while (n % i == 0) {
            exp++;
            n /= i;
        }
        if (exp > 0) {
            if (!first) std::cout << "*";
            std::cout << "(" << i << "^" << exp << ")";
            first = false;
        }
    }
    std::cout <<"\n";
    return 0;
}