#include <iostream>

int main()
{
    int n{};
    std::cin >> n;
    int f_dig{}, l_dig{};
    f_dig = n / 10;
    l_dig = n % 10;
    if (l_dig == 0)
        std::cout << "YES\n";
    else if (f_dig % l_dig == 0 || l_dig % f_dig == 0)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    return 0;
}