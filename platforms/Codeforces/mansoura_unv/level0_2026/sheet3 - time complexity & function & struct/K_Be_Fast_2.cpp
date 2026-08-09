#include <iostream>
#include <string>

int main()
{
    int l, r, n;
    std::cin >> l >> r >> n;
    int total = r - l + 1;
    int divisible_r = r / n;
    int divisible_l_minus_1 = (l - 1) / n;
    int divisible_count = divisible_r - divisible_l_minus_1;
    std::cout << total - divisible_count;
    return 0;
}