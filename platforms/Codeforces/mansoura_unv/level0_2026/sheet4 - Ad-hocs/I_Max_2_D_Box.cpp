#include <iostream>
#include <algorithm>

int main()
{
    int n{}, m{}, x{}, y{};
    std::cin >> n >> m >> x >> y;

    long long pref[n + 1][m + 1]{};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            long long value{};
            std::cin >> value;

            pref[i][j] = value
                       + pref[i - 1][j]
                       + pref[i][j - 1]
                       - pref[i - 1][j - 1];
        }
    }

    long long maxSum = -(1LL << 60);

    for (int i = x; i <= n; i++)
    {
        for (int j = y; j <= m; j++)
        {
            long long sum =
                pref[i][j]
                - pref[i - x][j]
                - pref[i][j - y]
                + pref[i - x][j - y];

            maxSum = std::max(maxSum, sum);
        }
    }

    std::cout << maxSum << '\n';

    return 0;
}