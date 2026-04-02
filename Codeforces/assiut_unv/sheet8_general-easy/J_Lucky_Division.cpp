#include <iostream>

int main()
{
    int num{0};
    std::cin >> num;
    int rest{0};
    bool flag = false;
    while (true)
    {
        rest = num % 10;
        if (num % 4 == 0)
        {
            flag = true;
            break;
        }
        if (rest == 4 || rest == 7)
        {
            flag = true;
            num /= 10;
            if (num == 0) break;
            continue;
        }
        else
        {
            std::cout << "NO\n";
            break;
        }
    }
    if (flag) std::cout << "YES\n";
    return 0;
}