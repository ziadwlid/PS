#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
    int testCases{};
    std::cin >> testCases;

    while (testCases--)
    {
        int n{};
        std::cin >> n;

        int arr[n], cpy[n];

        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }

        int strt = 0, end = n - 1;
        bool turn = 1;

        for (int i = 0; i < n; i++)
        {
            if (turn)
            {
                cpy[i] = arr[end];
                end--;
                turn = 0;
            }
            else
            {
                cpy[i] = arr[strt];
                strt++;
                turn = 1;
            }
        }

        int score = 0;
        bool f = true;

        for (int i = 0; i < n; i++)
        {
            if (cpy[i] == score)
            {
                f = false;
                break;
            }

            score += cpy[i];
        }

        if (f)
        {
            std::cout << "YES\n";

            for (int i = 0; i < n; i++)
            {
                std::cout << cpy[i] << " ";
            }

            std::cout << '\n';
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}