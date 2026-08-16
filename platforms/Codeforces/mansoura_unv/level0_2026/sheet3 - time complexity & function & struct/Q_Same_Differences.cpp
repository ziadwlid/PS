#include <iostream>
#include <cstring>

#define int long long

const int N = 2e5 + 5;
const int OFFSET = N;

signed main()
{
    int testCases{};
    std::cin >> testCases;

    int arr[N];
    int freq[2 * N];

    while (testCases--)
    {
        int n{};
        std::cin >> n;
        std::memset(freq, 0, sizeof(freq));
        int score{};
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
            arr[i] -= i;
            int x = arr[i] + OFFSET;
            score += freq[x];
            freq[x]++;
        }
        std::cout << score << '\n';
    }
    return 0;
}