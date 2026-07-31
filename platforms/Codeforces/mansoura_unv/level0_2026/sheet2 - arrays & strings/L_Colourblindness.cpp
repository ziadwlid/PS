#include <iostream>
int main()
{
    int testCases{};
    std::cin >> testCases;
    while (testCases--)
    {
        int n{};
        std::cin >> n;
        char arr[2][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 'G')
                    arr[i][j] = 'B';
            }
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (arr[0][i] != arr[1][i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}