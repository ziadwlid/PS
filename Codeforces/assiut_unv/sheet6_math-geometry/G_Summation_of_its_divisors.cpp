#include <iostream>
#include <cmath>

int main()
{
    long long n{0};
    std::cin >> n;
    long long sum{0};
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != sqrt(n))
                sum += (n / i);
        }
    }
    std::cout << sum << "\n";
    return 0;
}