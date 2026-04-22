#include <iostream>

int main (){
    int w {};
    std::cin >> w;
    if (w == 2) {
        std::cout << "NO\n";
        return 0;
    }
    if (w%2 == 0) std::cout << "YES\n";
    else std::cout << "NO\n"; 
    return 0;
}