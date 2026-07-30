#include <iostream>
#include <cmath>
int main()
{
    int testCase{};
    std::cin >> testCase;
    while (testCase--)
    {
        long long n{};
        std::cin >> n;
        int pow = 1;
        int sum = 0;
        while (pow <= n)
        {
            sum += pow;
            pow *= 2;
        }
        std::cout << n * (n + 1) / 2 - 2 * sum << "\n";
    }
    return 0;
}