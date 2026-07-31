#include <iostream>
#include <cmath>
int main()
{
    int k, r;
    std::cin >> k >> r;
    for (int i = 1; i < __INT_MAX__; i++){
        if ((i * k) % 10 == 0 || (i * k) % 10 == r) {
            std::cout << i << "\n";
            break;
        }
    }
    return 0;
}