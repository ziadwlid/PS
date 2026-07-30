#include <iostream>

int main()
{
    int testCases {0};
    std::cin >> testCases;
    while(testCases--){
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a + b == c) std::cout << "YES\n";
        else if (a + c == b) std::cout << "YES\n";
        else if (b + c == a) std::cout << "YES\n";
        else std::cout << "NO\n";
    }

    return 0;
}