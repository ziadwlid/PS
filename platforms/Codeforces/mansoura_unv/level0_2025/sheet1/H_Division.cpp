#include <iostream>

int main()
{
    int test_cases{};
    std::cin >> test_cases;
    while (test_cases > 0)
    {
        int x{};
        std::cin >> x;
        if (x >= 1900)
            std::cout << "Division 1\n";
        else if (x >= 1600 && x <= 1899)
            std::cout << "Division 2\n";
        else if (x >= 1400 && x <= 1599)
            std::cout << "Division 3\n";
        else 
            std::cout << "Division 4\n";
        --test_cases;
    }

    return 0;
}