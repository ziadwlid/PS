#include <iostream>
int main()
{
    long long a{0}, b{0};
    std::cin >> a >> b;
    long long even {0}, odd {0}, sum {0};
    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            sum += i;
            if (i % 2 == 0) even += i;
            else  odd += i;
        }
        std::cout << sum << "\n";
        std::cout << even << "\n";
        std::cout << odd << "\n";
    }
    else{
        for (int i = b; i <= a; i++)
        {
            sum += i;
            if (i % 2 == 0) even += i;
            else  odd += i;
        }
        std::cout << sum << "\n";
        std::cout << even << "\n";
        std::cout << odd << "\n";
    }
    return 0;
}