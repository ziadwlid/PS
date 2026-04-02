#include <iostream>

int main()
{
    int num{0};
    std::cin >> num;

    int original = num; 
    int rest{0};
    bool flag = false;

    while (true)
    {
        rest = num % 10;

        if (rest == 4 || rest == 7)
        {
            flag = true;
            num /= 10;
            if (num == 0) break;
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

        for (int i = 0; i < 14; i++)
        {
            if (original % lucky[i] == 0)
            {
                flag = true;
                break;
            }
        }
    }

    if (flag) std::cout << "YES\n";
    else std::cout << "NO\n";

    return 0;
}