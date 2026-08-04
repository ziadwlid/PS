#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    int input;
    std::cin >> input;
    long long ans {};
    for (int i = 1; i <= input; i++)
    {
        ans += i * i;
    }
    std::cout << ans << "\n";
    return 0;
}

/*
    #include <iostream>

int main()
{
    int n{};
    std::cin >> n;
    std::cout << ((n * (n + 1)) * (2 * n + 1)) / 6 << "\n";
    return 0;
}

*/