#include <iostream>
#include <algorithm>

int main()
{
    int testCases{};
    std::cin >> testCases;
    while (testCases--)
    {
        int n{};
        std::cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        std::sort(arr, arr + n);
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= arr[i - 1])
                flag = false;
            break;
        }
        std::cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}