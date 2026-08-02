#include <iostream>

int main()
{
    int testCases{};
    std::cin >> testCases;
    while (testCases--)
    {
        std::string str = "";
        std::cin >> str;
        int len = str.length();
        if (len > 10)
            std::cout << str[0] << len - 2 << str[len-1] << "\n";

        else
            std::cout << str << "\n";
    }
    return 0;
}