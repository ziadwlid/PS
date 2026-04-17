#include <iostream>
#include <cmath>
bool odd(int n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    return false;
}
bool binary_representation(int n)
{
    int m = log2(n) + 1;
    int l = 0, r = m - 1;
    while (l < r){
        if (((n >> l) & 1) != ((n >> r) & 1))
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    int n{0};
    std::cin >> n;
    if (odd(n) && binary_representation(n))
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
    return 0;
}