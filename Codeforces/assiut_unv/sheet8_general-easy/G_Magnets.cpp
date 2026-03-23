#include <iostream>
#include <string>

int main() {
    int n {0};
    std::cin >> n;
    
    int groups = 1;
    std::string prev, curr;
    std::cin >> prev;
    
    for (int i = 1; i < n; i++) {
        std::cin >> curr;
        if (prev[1] == curr[0])
            groups++;
        prev = curr;
    }
    
    std::cout << groups << "\n";
    return 0;
}