#include <iostream>

int main()
{
    int  l, r, n;
    std::cin >> l >> r >> n;
    int a = r/n - (l-1)/n;
    std::cout << (r - l + 1) - a << "\n";    
    return 0;
}