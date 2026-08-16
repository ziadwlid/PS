#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
int check_coin(char cr)
{
    if (cr == '@')
        return 1;
    else if (cr == '*')
        return 2;
    return 0;
}

int main()
{
    int testCase{};
    std::cin >> testCase;
    while (testCase--)
    {
        int pathLength{};
        std::cin >> pathLength;
        std::string str = {};
        std::cin >> str;
        int coins{};
        for (int i = 0; i < pathLength;)
        {
            if (check_coin(str[i]) == 1)
            {
                ++coins;
            }
            if (i + 1 < pathLength && check_coin(str[i + 1]) == 2)
            {
                if (i + 2 < pathLength && check_coin(str[i + 2]) == 2)
                {
                    break;
                }
                i += 2;
            }
            else
            {
                ++i;
            }
        }
        std::cout << coins << "\n";
    }
    return 0;
}