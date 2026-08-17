#include <iostream>

int main()
{
    long long l, r;
    std::cin >> l >> r;
    --l;
    long long ans_l = (l * (l + 1)) / 2;
    long long ans_r = (r * (r + 1)) / 2;
    std::cout << ans_r - ans_l;
    return 0;
}