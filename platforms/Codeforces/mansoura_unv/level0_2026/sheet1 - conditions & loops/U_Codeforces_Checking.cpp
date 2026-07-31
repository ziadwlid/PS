#include <iostream>
#include <cmath>
int main()
{
    int testCase{};
    std::cin >> testCase;
    while (testCase--)
    {
        bool flag = false;
        char c;
        std::cin >> c;
        std::string str = "codeforces";
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == c)
            {
                flag = true;
                break;
            }
        }
        if (flag) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    return 0;
}