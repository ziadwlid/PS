#include <iostream>
#include <cstring>

int main()
{
    int testCases{};
    std::cin >> testCases;
    while (testCases--)
    {
        int length{};
        std::cin >> length;
        int freq[length + 1] = {};
        int arr[length];

        for (int i = 0; i < length; i++)
        {
            std::cin >> arr[i];
            freq[arr[i]]++;
        }
        bool found = false;
        int val{};
        for (int i = 0; i <= length; i++)
        {
            if (freq[i] >= 3)
            {
                found = true;
                val = i;
            }
        }
        if (!found)
        {
            std::cout << -1 << '\n';
        }
        else
        {
            std::cout << val << '\n';
        }
    }
    return 0;
}