#include <iostream>

void repeat_char(int test)
{
    int repet{0};
    char p = ' ';
    while (test--)
    {
        std::cin >> repet >> p;
        while (repet--)
        {
            std::cout << p << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int test_cases{0};
    std::cin >> test_cases;
    repeat_char(test_cases);
    return 0;
}