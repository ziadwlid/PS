#include <iostream>

int main()
{
    int n{}, m{}, l{};
    std::cin >> n >> m >> l;
    if (n > m) std::swap (n, m);
    if (m > l) std::swap (m, l);
    if (n > m) std::swap (n , m);
    if (n+m <= l) std::cout << l - (n+m) + 1 << "\n";
    else std::cout << 0 << "\n"; 
    return 0;
}