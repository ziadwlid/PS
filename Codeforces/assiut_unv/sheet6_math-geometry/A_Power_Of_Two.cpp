#include <iostream>

int main (){
    long long  n{0};
    std::cin >> n;
    while (n > 1){
        if (n% 2 != 0){
            std::cout << "NO\n";
            return 0;
        }
        n/=2;
    }
    std::cout << "YES\n";
    return 0;
}