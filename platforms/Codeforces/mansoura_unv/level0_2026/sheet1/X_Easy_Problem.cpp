#include <iostream>

bool prime(int n){
    if (n <= 1) return false;
    for (int i = 2; i <= (n/2); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main (){
    int x{};
    std::cin >> x;

    if (x == 1) {
        std::cout << "NO\n";
        return 0;
    }

    for (int i = 1; i <= x; i++){
        if (prime(i) && i % 13 == 0) {
            std::cout << "YES\n"; 
            return 0;
        }
    }

    std::cout << "NO\n";
    return 0;
}