#include <iostream>

int main()
{
    int test {}, repeat {};
    char ch = 'z';
    std::cin >> ch;
    std::cin >> test;
    while (test > 0){
        std::cin >> repeat;
        while (repeat > 0){
            std::cout << ch;
            --repeat;
        }
        std::cout << "\n";
        --test;
    }
    return 0;
}