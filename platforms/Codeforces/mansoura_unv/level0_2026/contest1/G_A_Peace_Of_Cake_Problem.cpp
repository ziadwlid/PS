#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a-b > 0) std::cout << a-b;
    else std::cout << 0;
    return 0;
}