#include <iostream>

int main()
{
    int testCases{};
    std::cin >> testCases;

    while (testCases--)
    {
        int n{};
        std::cin >> n;

        int arr[n];
        int freq[101] = {};

        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
            freq[arr[i]]++;
        }

        int num{};

        for (int i = 0; i < 101; i++)
        {
            if (freq[i] == 1)
            {
                num = i;
                break;
            }
        }

        int ans{};

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == num)
            {
                ans = i;
                break;
            }
        }

        std::cout << ans + 1 << "\n";
    }

    return 0;
}