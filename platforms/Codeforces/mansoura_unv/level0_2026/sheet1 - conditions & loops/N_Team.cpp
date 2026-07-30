#include <iostream>

int main()
{
    int n{};
    std::cin >> n;
    int answer{0};
    while (n--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a + b + c >= 2)
            answer++;
    }
    std::cout << answer << "\n";

    return 0;
}